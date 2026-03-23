import os

# ====== CONFIG ======
folder_path = r"./"   # change this
output_file = "file_list.txt"
# ====================

with open(output_file, "w", encoding="utf-8") as f:
    for root, dirs, files in os.walk(folder_path):
        for file in files:
            full_path = os.path.join(root, file)
            relative_path = os.path.relpath(full_path, folder_path)
            f.write(relative_path + "\n")

print(f"File list saved to {output_file}")