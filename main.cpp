#include <iostream>
#include <raylib.h>

using namespace std;

class Ball {
    public:
        float x, y;
        int speed_x, speed_y;
        int radius;

    void Draw() {
        DrawCircle(x, y, radius, WHITE);
    }
};

int main () {
    const int screenWidth = 1280;
    const int screenHeight = 800;
    InitWindow(screenWidth, screenHeight, "My Pong Game!");
    SetTargetFPS(60);
    ball.radius = 20;
    ball.x = screenWidth / 2;
    ball.y = screenHeight / 2;

    while (!WindowShouldClose() == false) {
        BeginDrawing();

        #Drawing
        DrawLine(screenWidth / 2, 0, screenWidth / 2, screenHeight, WHITE);
        DrawRectangle(10, screenHeight / 2 - 60, 25, 120, WHITE);
        DrawRectangle(screenWidth - 35, screenHeight / 2 - 60, 25, 120, WHITE);

        EndDrawing();
    }

    return 0;
}