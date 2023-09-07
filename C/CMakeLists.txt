cmake_minimum_required(VERSION 3.2)
project(DS)

# Variables.
#
set(CMAKE_C_STANDARD 23)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(INCLUDE_DIRS "include")
set(BIN_NAME "CDS")

# Add debugging option.
#
option(DEV_DEBUG "Enter debug mode" 0)
if (DEV_DEBUG)
  add_definitions(-DDEV_DEBUG)
endif()

# Find all source files.
# 
# file(GLOB SRC_FILES "${CMAKE_SOURCE_DIR}/src/*.cpp")

# Set the project include directories.
# 
include_directories(${INCLUDE_DIRS})

# Create the final binary.
# 
add_executable(${BIN_NAME} main.c ${SRC_FILES})

add_subdirectory(src)


# Build the data structure library.
# 
target_link_libraries(${BIN_NAME} DS)
