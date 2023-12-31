#include <iostream>
#include <raylib.h>

using namespace std;

class Paddle {
    public:
        float x, y;
        int width, height;
        int speed;

    void Draw() {
        DrawRectangle(x, y, width, height, WHITE);
    }
};  

class Ball {
    public:
        float x, y;
        int speed_x, speed_y;
        int radius;

    void Draw() {
        DrawCircle(x, y, radius, WHITE);
    }

    void Update() {
        x += speed_x;
        y += speed_y;

        if (y + radius >= GetScreenHeight() || y - radius <= 0) {
            speed_y *= -1;
        }
        if (x + radius >= GetScreenWidth() || x - radius <= 0) {
            speed_x *= -1;
        }
    }
};

Ball ball;
Paddle player;

int main () {
    const int screenWidth = 1280;
    const int screenHeight = 800;
    InitWindow(screenWidth, screenHeight, "My Pong Game!");
    SetTargetFPS(60);
    ball.radius = 20;
    ball.x = screenWidth / 2;
    ball.y = screenHeight / 2;
    ball.speed_x = 7;
    ball.speed_y = 7;

    player.width = 25;
    player.height = 120;
    player.x = screenWidth - player.width - 10;
    player.y = screenHeight / 2 - player.height / 2;
    player.speed = 6;

    while (!WindowShouldClose() == false) {
        BeginDrawing();

        // Update
        ball.Update();

        #Drawing
        ClearBackground(BLACK);
        DrawLine(screenWidth / 2, 0, screenWidth / 2, screenHeight, WHITE);
        ball.Draw();
        DrawRectangle(10, screenHeight / 2 - 60, 25, 120, WHITE);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}