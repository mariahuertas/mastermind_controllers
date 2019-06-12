cmake_minimum_required(VERSION 3.13)
project(mastermind_controllers)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(mastermind_controllers
        controllers/ColocateController.cpp
        controllers/ColocateController.h
        models/Color.cpp
        models/Color.h
        models/Combination.cpp
        models/Combination.h
        controllers/ContinueController.cpp
        controllers/ContinueController.h
        controllers/Controller.cpp
        controllers/Controller.h
        models/Game.cpp
        models/Game.h
        controllers/Logic.cpp
        controllers/Logic.h
        main.cpp
        Mastermind.cpp
        Mastermind.h
        models/ProposedCombination.cpp
        models/ProposedCombination.h
        models/Result.cpp
        models/Result.h
        models/SecretCombination.cpp
        models/SecretCombination.h
        controllers/StartController.cpp
        controllers/StartController.h
        controllers/State.h)
