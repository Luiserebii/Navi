cmake_minimum_required(VERSION 3.2.0)
project(container-fill)

# Add root directory of library as subdirectory
add_subdirectory(../../../ ${CMAKE_CURRENT_BINARY_DIR}/navi EXCLUDE_FROM_ALL)

add_executable(${CMAKE_PROJECT_NAME} main.cpp)
target_link_libraries(${CMAKE_PROJECT_NAME} navi)
