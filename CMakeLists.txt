cmake_minimum_required(VERSION 3.20)

project(
    right_lick_dojo
    DESCRIPTION "Bushido is a moral code concerning samurai attitudes, behavior and lifestyle"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

# Because purpose is write portable code
# safe versions of standard C functions should be avoided
if(WIN32)
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
endif()

enable_testing()

add_subdirectory(example_project)
add_subdirectory(4A)
add_subdirectory(4B)
add_subdirectory(4D)
add_subdirectory(50A)
add_subdirectory(71A)
add_subdirectory(112A)
add_subdirectory(158A)
add_subdirectory(231A)
add_subdirectory(236A)
add_subdirectory(263A)
add_subdirectory(266A)
add_subdirectory(268A)
add_subdirectory(281A)
add_subdirectory(282A)
add_subdirectory(339A)