cmake_minimum_required(VERSION 4.0)
project(SlotMachine)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(SlotMachine
        main.cpp
        Game.cpp
        Game.h
        Player.cpp
        Player.h
        Reel.cpp
        Reel.h
        SlotMachine.cpp
        SlotMachine.h
        Symbol.cpp
        Symbol.h
        Utils.cpp
        Utils.h
)
