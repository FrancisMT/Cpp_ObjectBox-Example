# Project setup ---------------------------------------------------------------
cmake_minimum_required(VERSION 3.5)
project(ObjectBoxExampleProject VERSION 0.1 LANGUAGES CXX)

# For better global includes
include_directories(./)

# Project Packages ---------------------------------------------------------------------------------

# CMake Options ------------------------------------------------------------------------------------
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE TRUE)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Compile Options ----------------------------------------------------------------------------------

# Project Directories ------------------------------------------------------------------------------
add_subdirectory(src)