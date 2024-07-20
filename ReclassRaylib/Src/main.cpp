//
//  main.cpp
//  ReclassRaylib
//
//  Created by macbook on 20/07/2024.
//
#include <raylib.h>
#include <iostream>
#include "../ImRaylib/rlImgui.hpp"
#include "../ImGui/imgui.h"

int main(int argc, const char * argv[]) {
    InitWindow(800, 600, "Hello from MacOS !");
    SetTargetFPS(60);
    rlImGuiSetup(true);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        
        rlImGuiBegin();
        ImGui::Begin("Hello world !");
        ImGui::Text("Hii");
        ImGui::End();
        rlImGuiEnd();
        EndDrawing();
    }
    rlImGuiShutdown();
    CloseWindow();
    
    return 0;
}
