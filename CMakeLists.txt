cmake_minimum_required(VERSION 3.3)
project(app)

set( CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")
set(CMAKE_C_COMPILER "/usr/bin/clang")
set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/includes")
set(SRC_DIR "${CMAKE_SOURCE_DIR}/src")

include_directories("${INCLUDE_DIR}")

add_executable(app
	"${INCLUDE_DIR}/tree.h"
    "${SRC_DIR}/tree.c"
	"${INCLUDE_DIR}/node.h"
main.c)
