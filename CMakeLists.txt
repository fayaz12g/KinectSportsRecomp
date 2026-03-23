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
    src
    runtime
    runtime/stubs
)

find_package(Threads REQUIRED)
target_link_libraries(KinectSports PRIVATE Threads::Threads)

if(WIN32)
    target_link_libraries(KinectSports PRIVATE ws2_32)
endif()

target_compile_definitions(KinectSports PRIVATE
    _CRT_SECURE_NO_WARNINGS
)

set_target_properties(KinectSports PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/build"
)

# cmake -B build -S . ; cmake --build build