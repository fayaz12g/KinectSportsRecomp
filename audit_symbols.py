#!/usr/bin/env python3
"""
audit_symbols.py — Parses PPC_EXTERN_FUNC(__imp__X) declarations to find all
XDK imports the game needs, checks which are implemented, generates skeletons.

Usage:  python3 audit_symbols.py
"""

import os
import re
import glob
from collections import defaultdict

SRC_DIR      = "./src"
STUBS_DIR    = "./runtime/stubs"
XENIA_KERNEL = "./xenia/src/xenia/kernel"

KINECT_KEYWORDS = ["Nui", "NUI", "Kinect", "kinect", "PsCam", "Biometric"]

CATEGORY_PREFIXES = [
    ("XamNui",    "kinect"),
    ("XamAvatar", "xam"),
    ("XamVoice",  "xam"),
    ("XamUser",   "xam"),
    ("XamCache",  "xam"),
    ("Xam",       "xam"),
    ("NetDll",    "network"),
    ("XAudio",    "audio"),
    ("XMA",       "audio"),
    ("Vd",        "graphics"),
    ("Ke",        "kernel"),
    ("Nt",        "kernel"),
    ("Rtl",       "kernel"),
    ("Ex",        "kernel"),
    ("Mm",        "kernel"),
    ("Ob",        "kernel"),
    ("Io",        "kernel"),
    ("Hal",       "kernel"),
    ("Ps",        "kinect"),
    ("Stfs",      "kernel"),
    ("LDI",       "kernel"),
    ("XeCrypt",   "crypto"),
    ("XeKeys",    "crypto"),
    ("Xex",       "xex"),
    ("XNet",      "network"),
    ("XMsg",      "xam"),
    ("XGet",      "xam"),
]

def categorize(name):
    for kw in KINECT_KEYWORDS:
        if kw in name:
            return "kinect"
    for prefix, cat in CATEGORY_PREFIXES:
        if name.startswith(prefix):
            return cat
    return "misc"

def find_all_imports():
    imports = set()
    pattern = re.compile(r'PPC_EXTERN_FUNC\s*\(\s*__imp__(\w+)\s*\)')
    search_paths = (
        glob.glob(f"{SRC_DIR}/**/*.h",   recursive=True) +
        glob.glob(f"{SRC_DIR}/**/*.cpp", recursive=True) +
        glob.glob(f"{SRC_DIR}/*.h") +
        glob.glob(f"{SRC_DIR}/*.cpp")
    )
    for path in search_paths:
        with open(path, encoding="utf-8", errors="ignore") as f:
            for line in f:
                for m in pattern.finditer(line):
                    imports.add(m.group(1))
    return imports

def find_implemented():
    implemented = set()
    pattern = re.compile(r'__imp__(\w+)\s*\(')
    stub_paths = (
        glob.glob(f"{STUBS_DIR}/**/*.cpp", recursive=True) +
        glob.glob(f"{STUBS_DIR}/*.cpp")
    )
    for path in stub_paths:
        with open(path, encoding="utf-8", errors="ignore") as f:
            content = f.read()
        for m in pattern.finditer(content):
            name = m.group(1)
            nearby = content[m.start():m.start() + 400]
            if '{' in nearby:
                implemented.add(name)
    return implemented

def xenia_ref(name):
    if not os.path.isdir(XENIA_KERNEL):
        return None
    for path in glob.glob(f"{XENIA_KERNEL}/**/*.cc", recursive=True):
        try:
            with open(path, encoding="utf-8", errors="ignore") as f:
                if name in f.read():
                    return os.path.basename(path)
        except Exception:
            pass
    return None

def main():
    print("=== Kinect Sports XDK Symbol Audit ===\n")

    imports     = find_all_imports()
    implemented = find_implemented()
    missing     = imports - implemented

    print(f"Total XDK imports declared : {len(imports)}")
    print(f"Already implemented        : {len(implemented)}")
    print(f"Missing stubs needed       : {len(missing)}\n")

    if not imports:
        print("ERROR: No PPC_EXTERN_FUNC(__imp__...) declarations found.")
        print(f"  Searched under: {SRC_DIR}/")
        print("  Check that the file with those declarations is in src/ (not a subdirectory above it)")
        print("  Also check if ppc_recomp_shared.h is somewhere else and copy/symlink it into src/")
        return

    by_cat = defaultdict(list)
    for name in sorted(missing):
        by_cat[categorize(name)].append(name)

    cat_order = ["kinect", "graphics", "audio", "network", "kernel", "xam", "crypto", "xex", "misc"]

    for cat in cat_order:
        names = by_cat.get(cat, [])
        if not names:
            continue
        tag = "  *** YOUR PRIMARY GOAL — wire to libfreenect ***" if cat == "kinect" else ""
        print(f"--- {cat.upper()} ({len(names)}){tag} ---")
        for name in names:
            ref = xenia_ref(name)
            print(f"  __imp__{name}" + (f"  [xenia:{ref}]" if ref else ""))
        print()

    os.makedirs(STUBS_DIR, exist_ok=True)

    for cat in ["kernel", "xam", "audio", "network", "crypto", "xex", "misc"]:
        names = by_cat.get(cat, [])
        if not names:
            continue
        out_path = f"{STUBS_DIR}/generated_{cat}.cpp"
        with open(out_path, "w") as f:
            f.write('#include "stubs.h"\n\n')
            f.write(f'// AUTO-GENERATED — {cat.upper()} stubs\n')
            f.write('// Implement using xenia/src/xenia/kernel/ as reference\n\n')
            for name in sorted(names):
                f.write(f'PPC_EXTERN_FUNC(__imp__{name}) {{\n')
                f.write(f'    STUB_LOG("{name}");\n')
                f.write(f'    ctx.r3.u64 = 0;\n')
                f.write(f'}}\n\n')
        print(f"Written: {out_path}  ({len(names)} stubs)")

    gfx_names = by_cat.get("graphics", [])
    if gfx_names:
        out_path = f"{STUBS_DIR}/generated_graphics.cpp"
        with open(out_path, "w") as f:
            f.write('#include "stubs.h"\n\n')
            f.write('// GRAPHICS STUBS — DO NOT IMPLEMENT YET\n')
            f.write('// These need a Vulkan backend. Log and return 0 only for now.\n\n')
            for name in sorted(gfx_names):
                f.write(f'PPC_EXTERN_FUNC(__imp__{name}) {{\n')
                f.write(f'    fprintf(stderr, "[GFX-STUB] {name}\\n");\n')
                f.write(f'    ctx.r3.u64 = 0;\n')
                f.write(f'}}\n\n')
        print(f"Written: {out_path}  ({len(gfx_names)} stubs)")

    kinect_names = by_cat.get("kinect", [])
    if kinect_names:
        out_path = f"{STUBS_DIR}/generated_kinect.cpp"
        with open(out_path, "w") as f:
            f.write('#include "stubs.h"\n\n')
            f.write('// KINECT / NUI STUBS\n')
            f.write('// Do NOT return fake skeleton data (that was the Xenia dead end)\n')
            f.write('// Wire these to libfreenect when ready\n')
            f.write('// Each call prints [KINECT-REVIEW] so you can track which are hit\n\n')
            for name in sorted(kinect_names):
                ref = xenia_ref(name)
                if ref:
                    f.write(f'// xenia ref: {ref}\n')
                f.write(f'PPC_EXTERN_FUNC(__imp__{name}) {{\n')
                f.write(f'    fprintf(stderr, "[KINECT-REVIEW] {name}\\n");\n')
                f.write(f'    ctx.r3.u64 = 0;\n')
                f.write(f'}}\n\n')
        print(f"Written: {out_path}  ({len(kinect_names)} Kinect stubs)")

if __name__ == "__main__":
    main()
