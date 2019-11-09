cmake_minimum_required(VERSION 3.2.0)

# Library as INTERFACE; does not produce build output
add_library(navi INTERFACE)

target_include_directories(navi INTERFACE include/)

#project(navi)
#set(CMAKE_BUILD_TYPE Release)

#include_directories("navi")

# Generate the shared library from the sources
#add_library(navi SHARED ${SOURCES})

# Set the location for library installation ("sudo make install")
#install(TARGETS navi DESTINATION /usr/lib)
