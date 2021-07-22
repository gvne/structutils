cmake_minimum_required(VERSION 3.11)

project(structutils)

set(CMAKE_CXX_STANDARD 17)
option(astruct_enable_tests "Enable tests" ON)

add_subdirectory(src)

if(${astruct_enable_tests})
  include(${CMAKE_CURRENT_SOURCE_DIR}/cmake/add_googletest.cmake)
  add_subdirectory(test)
endif()
