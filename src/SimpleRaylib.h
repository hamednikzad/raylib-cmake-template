//
// Created by Hamed on 12/13/2023.
//
#ifndef RAY_LIB_CMAKE_TEMPLATE_SIMPLERAYLIB_H
#define RAY_LIB_CMAKE_TEMPLATE_SIMPLERAYLIB_H

#include <iostream>
#include "raylib.h"


void simpleRun(){
    std::cout << "Hello, World!" << std::endl;
    auto width = 800, height = 600;
    InitWindow(width, height, "First Raylib window!");

    auto circle_x{width / 2};
    auto circle_y{height / 2};

    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(WHITE);

        DrawCircle(circle_x, circle_y, 25, BLUE);

        if(IsKeyDown(KEY_D)){
            circle_x += 1;
            std::cout << "X:" << circle_x << ", Y:" << circle_y << std::endl;
        }
        if(IsKeyDown(KEY_A)){
            circle_x -= 1;
            std::cout << "X:" << circle_x << ", Y:" << circle_y << std::endl;
        }

        EndDrawing();
    }
}
#endif //RAY_LIB_CMAKE_TEMPLATE_SIMPLERAYLIB_H
