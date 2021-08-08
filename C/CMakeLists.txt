cmake_minimum_required(VERSION 3.10)
PROJECT(app)

# Set C Compiler
set( CMAKE_C_COMPILER "/usr/bin/clang")

# Set C Version
set( CMAKE_C_FLAGS "-w -std=c11")

# Main Include Path
set( INCLUDE_DIR "${PROJECT_SOURCE_DIR}/include")

# Main Source Path
set( SOURCE_DIR "${PROJECT_SOURCE_DIR}/src")

# Set the include directory
include_directories( "${INCLUDE_DIR}" )

# Subdirectories
add_subdirectory("${SOURCE_DIR}")

ADD_EXECUTABLE(app main.c)

target_link_libraries( app DS )





