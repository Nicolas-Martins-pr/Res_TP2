cmake_minimum_required(VERSION 3.19)

project(Project VERSION 1.0)

set(${PROJECT_NAME}_PLAYER_SRC src/Player.cpp)
add_executable(${PROJECT_NAME}_PLAYER ${${PROJECT_NAME}_PLAYER_SRC})