cmake_minimum_required(VERSION 3.14)

project(bdes LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(bdes bdes.c)
