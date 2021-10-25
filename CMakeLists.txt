cmake_minimum_required(VERSION 3.19)

project(Res_TP2)

set(CMAKE_CXX_STANDARD 17)


add_executable("${PROJECT_NAME}" main.cpp)

add_subdirectory(Serialize)

target_include_directories("${PROJECT_NAME}" PUBLIC
                          "Serialize/headers"
                          "Serialize/src"
			  include/)

target_sources("${PROJECT_NAME}" PUBLIC Serialize/headers/Compressor.h Serialize/headers/Serializer.h Serialize/headers/Deserializer.h 
                Serialize/headers/Player.h  Serialize/src/Player.cpp "Serialize/headers/Framework.h" Serialize/src/Compressor.cpp Serialize/src/Serializer.cpp 
                Serialize/src/Deserializer.cpp Serialize/src/Compressor.cpp) 


