cmake_minimum_required(VERSION 3.10)
project(BaccaratGame)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(include)

# Source files
set(SOURCES
    src/Deck.cpp
    src/Player.cpp
    src/BaccaratGame.cpp
    main.cpp
)

add_executable(Baccarat ${SOURCES})
