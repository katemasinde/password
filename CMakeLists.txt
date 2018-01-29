cmake_minimum_required(VERSION 2.8)

project(login)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11 -Wall -Wextra")

add_executable(login main.c)
