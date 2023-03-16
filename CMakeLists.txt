cmake_minimum_required(VERSION 3.24)
project(students_db)

set(CMAKE_CXX_STANDARD 17)

add_executable(students_db main.cpp Subject.h Student.h FileHelper.h Parsing.h ConsoleHelper.h)
