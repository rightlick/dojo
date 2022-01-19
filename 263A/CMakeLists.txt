cmake_minimum_required(VERSION 3.20)

project(
    263A
    VERSION 1.0
    DESCRIPTION "this is 263A taks from codeforces"
    LANGUAGES CXX
)

add_executable(
    263A
        ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
)

target_compile_options(
    263A
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