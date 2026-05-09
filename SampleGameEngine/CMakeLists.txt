cmake_minimum_required(VERSION 3.20)

project(SampleGameEngine)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(SampleGameEngine
    main.cpp

    src/core/Game.cpp
    src/core/GameHistory.cpp

    src/input/InputHandler.cpp
    src/input/ConsoleInputDevice.cpp

    src/commands/JumpCommand.cpp
    src/commands/MoveCommand.cpp
    src/commands/ExitCommand.cpp

    src/actors/GameActor.cpp
    src/actors/Character.cpp
)

target_include_directories(SampleGameEngine PRIVATE
    include
)