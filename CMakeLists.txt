cmake_minimum_required(VERSION 3.13)
project(mastermind_controllers)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(mastermind_controllers
        colocatecontroller.cpp
        colocatecontroller.h
        color.cpp
        color.h
        combination.cpp
        combination.h
        continuecontroller.cpp
        continuecontroller.h
        controller.cpp
        controller.h
        game.cpp
        game.h
        logic.cpp
        logic.h
        main.cpp
        mastermind.cpp
        mastermind.h
        proposedcombination.cpp
        proposedcombination.h
        result.cpp
        result.h
        secretcombination.cpp
        secretcombination.h
        startcontroller.cpp
        startcontroller.h
        state.h)
