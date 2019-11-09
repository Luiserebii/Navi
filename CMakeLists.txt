cmake_minimum_required(VERSION 3.5.1)
project(navi)
set(CMAKE_BUILD_TYPE Release)

include_directories("navi")

# Generate the shared library from the sources
add_library(navi SHARED ${SOURCES})

# Set the location for library installation ("sudo make install")
install(TARGETS navi DESTINATION /usr/lib)
