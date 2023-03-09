cmake_minimum_required(VERSION 3.24)
project(date_demo)

set(CMAKE_CXX_STANDARD 17)

add_executable(date_demo main.cpp date.h Parser.h FileHelper.h ConsoleHelper.h)
