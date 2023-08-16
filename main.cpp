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
        EndDrawing();
    }

    return 0;
}