#include <iostream>
#include <raylib.h>

using namespace std;

int main () {
    const int screenWidth = 1280;
    const int screenHeight = 800;
    InitWindow(screenWidth, screenHeight, "My Pong Game!");
    SetTargetFPS(60);

    while (!WindowShouldClose() == false) {
        BeginDrawing();

        #Drawing
        DrawCircle(screenWidth / 2, screenHeight / 2, 20, WHITE);
        DrawRectangle(10, screenHeight / 2 - 60, 25, 120, WHITE);
        DrawRectangle(screenWidth - 35, screenHeight / 2 - 60, 25, 120, WHITE);

        EndDrawing();
    }

    return 0;
}