cmake_minimum_required(VERSION 3.19)

project(Res_TP2)

set(CMAKE_CXX_STANDARD 17)


add_executable("${PROJECT_NAME}" main.cpp)

add_subdirectory(Serialize)

target_include_directories("${PROJECT_NAME}" PUBLIC
                          "Serialize/headers"
                          "Serialize/src"
			  include/
                          )


