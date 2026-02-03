cmake_minimum_required(VERSION 3.20)
project(KinectSportsRecomp CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB PPC_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/ppc_recomp.*.cpp")

add_executable(KinectSportsRuntime
    src/runtime_main.cpp
    src/ppc_func_mapping.cpp
    ${PPC_SOURCES}
)

target_include_directories(KinectSportsRuntime PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)

if (CMAKE_SYSTEM_PROCESSOR MATCHES "x86_64|AMD64|i.86")
    target_compile_options(KinectSportsRuntime PRIVATE -msse4.1 -mavx)
endif()
