//
//  main.cpp
//  ReclassRaylib
//
//  Created by macbook on 20/07/2024.
//
#include <raylib.h>
#include <iostream>
#include "../ImRaylib/rlImgui.hpp"

int main(int argc, const char * argv[]) {
    InitWindow(800, 600, "Hello from MacOS !");
    SetTargetFPS(60);
    
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }
    CloseWindow();
    
    return 0;
}
