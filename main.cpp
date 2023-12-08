#include <iostream>
#include "raylib.h"

int main() {
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
    return 0;
}
