cmake_minimum_required(VERSION 3.5)

project("game_guess")

add_executable(
	game_guess
	game_guess.cpp
    generation.cpp
    generation.h
)

set_target_properties(game_guess PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)


