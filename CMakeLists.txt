cmake_minimum_required(VERSION 3.20)
project(KinectSportsPC CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE GAME_SOURCES    "src/*.cpp")
file(GLOB_RECURSE RUNTIME_SOURCES "runtime/*.cpp")

add_executable(KinectSports
    ${GAME_SOURCES}
    ${RUNTIME_SOURCES}
)

target_include_directories(KinectSports PRIVATE
    src             # <-- ppc_recomp_shared.h and ppc_context.h live here
    runtime
    runtime/stubs
)

# Threading
find_package(Threads REQUIRED)
target_link_libraries(KinectSports PRIVATE Threads::Threads)

if(WIN32)
    target_link_libraries(KinectSports PRIVATE ws2_32)
    # xaudio2/kernel32/user32 are auto-linked by MSVC, don't need to specify
endif()

# Optimization flags — use generator expressions so MSVC and GCC/Clang both work
if(MSVC)
    # /O1 = minimize size, keeps compile times tolerable on 340 giant files
    # /MP = parallel compilation (uses all cores)
    set_source_files_properties(${GAME_SOURCES} PROPERTIES
        COMPILE_OPTIONS "/O1;/MP"
    )
else()
    set_source_files_properties(${GAME_SOURCES} PROPERTIES
        COMPILE_OPTIONS "-O1"
    )
endif()

target_compile_definitions(KinectSports PRIVATE
    _CRT_SECURE_NO_WARNINGS
)

set_target_properties(KinectSports PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/build"
)
