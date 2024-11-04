cmake_minimum_required(VERSION 3.29)
project(what_runs_all_day_but_has_no_legs_Ryan_B_Runo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(what_runs_all_day_but_has_no_legs_Ryan_B_Runo
        main.cpp
        Timer.cpp
        Timer.h)
