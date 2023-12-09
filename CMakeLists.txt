message(Version: ${CMAKE_VERSION})
cmake_minimum_required(VERSION 3.26)
project(ray-lib-cmake-template LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

include_directories(${PROJECT_SOURCE_DIR}/Libs/Raylib/include)

add_executable(${PROJECT_NAME} main.cpp)

#target_link_libraries(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/Libs/Raylib/lib/libraylib.a)
target_link_libraries(${PROJECT_NAME} ${PROJECT_SOURCE_DIR}/Libs/Raylib/lib/libraylibdll.a)

configure_file(${PROJECT_SOURCE_DIR}/Libs/Raylib/lib/raylib.dll ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)

