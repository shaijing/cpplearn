cmake_minimum_required(VERSION 3.21)
project(cpplearn)



# ##############################################################################
# Normal Configure
# ##############################################################################

set(CMAKE_CXX_STANDARD 11)
set(MAIN_PROJECIT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# set(CMAKE_BUILD_TYPE Debug CACHE STRING "set build type to debug")
# set(CMAKE_BUILD_TYPE "Debug”)
set(CMAKE_VERBOSE_MAKEFILEON ON)

# ##############################################################################
# Build
# ##############################################################################

# Add header file include directories
include_directories(./include)

file(GLOB_RECURSE SRC_SUB ${PROJECT_SOURCE_DIR}/src/learn/*.cpp ${PROJECT_SOURCE_DIR}/src/practice/*.cpp)
set(ALL_SRC ${SRC_TOP} ${SRC_SUB})
message("ALL_SRC: ${ALL_SRC}")
add_executable(cpplearn main.cpp main.h ${ALL_SRC})
