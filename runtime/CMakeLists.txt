cmake_minimum_required(VERSION 3.20)
project(KinectSportsPC CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Pull in all recompiled game source files
file(GLOB_RECURSE GAME_SOURCES "src/*.cpp")

# Runtime sources
file(GLOB_RECURSE RUNTIME_SOURCES "runtime/*.cpp")

add_executable(KinectSports
    ${GAME_SOURCES}
    ${RUNTIME_SOURCES}
)

target_include_directories(KinectSports PRIVATE
    runtime
    runtime/stubs
)

# Platform threading
find_package(Threads REQUIRED)
target_link_libraries(KinectSports PRIVATE Threads::Threads)

# On Windows link XAudio2 and kernel libs
if(WIN32)
    target_link_libraries(KinectSports PRIVATE xaudio2 kernel32 user32)
endif()

# Aggressive optimization for the recompiled game code
# (these files are enormous and slow to compile at high opt)
set_source_files_properties(${GAME_SOURCES} PROPERTIES
    COMPILE_OPTIONS "-O2"
)

# Useful defines
target_compile_definitions(KinectSports PRIVATE
    RECOMP_STANDALONE
    _CRT_SECURE_NO_WARNINGS
)

# Build to ./build/
set_target_properties(KinectSports PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/build"
)
