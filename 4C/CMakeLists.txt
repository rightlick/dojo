cmake_minimum_required(VERSION 3.20)

project(
    4C
    VERSION 1.0
    DESCRIPTION "this is 4C from codeforces"
    LANGUAGES CXX
)

add_executable(
    4C
        ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

target_compile_options(
    4C
    PRIVATE
        $<$<OR:$<C_COMPILER_ID:Clang>,$<C_COMPILER_ID:AppleClang>,$<C_COMPILER_ID:GNU>>:
           -Wall
           -Wextra
           -Werror
           -pedantic-errors
           -Wconversion>
        $<$<C_COMPILER_ID:MSVC>:
            /Wall>
)