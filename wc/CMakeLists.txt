cmake_minimum_required(VERSION 3.15)
project(wc VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if (MSVC)
    add_compile_options(/W4 /permissive-)
else ()    
    add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif ()

set(SOURCES
    src/main.cpp
    src/wc.cpp
)

add_executable(wc ${SOURCES})

target_include_directories(wc PRIVATE ${CMAKE_SOURCE_DIR}/include)