cmake_minimum_required(VERSION 3.4.1)
project (firstDemo)

include_directories (
	${CMAKE_SOURCE_DIR}/src
)

add_executable(
    firstDemo 
    ${CMAKE_SOURCE_DIR}/src/main.cpp
    ${CMAKE_SOURCE_DIR}/src/display.cpp
)