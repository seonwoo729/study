cmake_minimum_required(VERSION 2.6)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_COMPILER g++)
project(study)

set(BINARY_NAME out)

set(SRC_FILES
    ${CMAKE_SOURCE_DIR}/src/Sample.cpp
    ${CMAKE_SOURCE_DIR}/src/main.cpp
)

add_executable(${BINARY_NAME}
    ${SRC_FILES}
)

target_include_directories(
    ${BINARY_NAME}
    PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)

target_compile_options(${BINARY_NAME} PUBLIC -Wall -Werror)
