cmake_minimum_required(VERSION 3.19)

project(Project ${Version})

set(CMAKE_CXX_STANDARD 17)

set(${PROJECT_NAME}_SRC Serialize/src/main.cpp Serialize/src/Player.cpp "Serialize/src/Serializer.cpp" "Serialize/src/Compressor.cpp" "Serialize/src/Deserializer.cpp")

set(${PROJECT_NAME}_HEADERS Serialize/headers/Player.h  "Serialize/headers/Serializer.h" "Serialize/headers/Compressor.h" "Serialize/headers/Deserializer.h" "Serialize/headers/Framework.h")

add_library(${PROJECT_NAME} STATIC ${${PROJECT_NAME}_SRC} ${${PROJECT_NAME}_HEADERS})

target_include_directories(${PROJECT_NAME} PUBLIC include)
