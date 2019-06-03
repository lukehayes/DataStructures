cmake_minimum_required(VERSION 3.2)
PROJECT(app)

# Set C++ Compiler
set( CMAKE_CXX_COMPILER "/usr/bin/clang++")

# Set C++ Version
set( CMAKE_CXX_FLAGS "-w -std=c++14")

# Main Include Path
set( INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include")

# Main Source Path
set( SOURCE_DIR "${PROJECT_SOURCE_DIR}/src")

# Modules Path
set( CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

# Useful for some autocompletion plugins
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set the include directory
INCLUDE_DIRECTORIES( ${INCLUDE_DIR}  )

# Subdirectories
# add_subdirectory(src/game)

# Example of adding a sub directory
# add_subdirectory(src/math)

ADD_EXECUTABLE(app main.cpp )
target_link_libraries( app )





