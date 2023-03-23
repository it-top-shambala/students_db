cmake_minimum_required(VERSION 3.24)
project(students_db)

set(CMAKE_CXX_STANDARD 20)

add_executable(students_db main.cpp lib/model/Subject.h lib/model/Student.h lib/helper/FileHelper.h lib/Parsing.h lib/helper/ConsoleHelper.h lib/DB.h)
