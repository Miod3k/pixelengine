cmake_minimum_required(VERSION 3.27)
project(pre_engine)
set(CMAKE_CXX_STANDARD 17)
link_directories(${CMAKE_SOURCE_DIR}/lib)
include_directories(${CMAKE_SOURCE_DIR}/include)
add_executable(pre_engine WIN32 main.cpp
        graphics.h
        graphics.cpp)
target_compile_definitions(pre_engine PRIVATE _MBCS)
target_link_libraries(pre_engine PRIVATE d2d1.lib)