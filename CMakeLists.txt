cmake_minimum_required(VERSION 3.13)
project(mastermind_controllers)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(mastermind_controllers
        controllers/colocatecontroller.cpp
        controllers/colocatecontroller.h
        models/color.cpp
        models/color.h
        models/combination.cpp
        models/combination.h
        controllers/continuecontroller.cpp
        controllers/continuecontroller.h
        controllers/controller.cpp
        controllers/controller.h
        models/game.cpp
        models/game.h
        controllers/logic.cpp
        controllers/logic.h
        main.cpp
        mastermind.cpp
        mastermind.h
        models/proposedcombination.cpp
        models/proposedcombination.h
        models/result.cpp
        models/result.h
        models/secretcombination.cpp
        models/secretcombination.h
        controllers/startcontroller.cpp
        controllers/startcontroller.h
        controllers/state.h)
