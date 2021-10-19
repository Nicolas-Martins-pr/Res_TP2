cmake_minimum_required(VERSION 3.19)

project(Project ${Version})

set(CMAKE_CXX_STANDARD 17)

set(${PROJECT_NAME}_SRC Serialize/src/Player.cpp "Serialize/src/Serializer.cpp" "Serialize/src/Deserializer.cpp" Serialize/headers/Compressor.h)

set(${PROJECT_NAME}_HEADERS Serialize/headers/Player.h  "Serialize/headers/Serializer.h" "Serialize/headers/Deserializer.h" "Serialize/headers/Framework.h" Serialize/src/Compressor.cpp)

add_library(${PROJECT_NAME} STATIC ${${PROJECT_NAME}_SRC} ${${PROJECT_NAME}_HEADERS})

target_include_directories(${PROJECT_NAME} PUBLIC include)
