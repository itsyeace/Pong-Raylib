#include "raylib.h"
#include "ball.h"
#include "Lantai.h"
//#include "collision.h"
#include "CollisionDetection.h"

int main()
{
    SetTargetFPS(60);
    
    InitWindow(500,500, "Pong game");

    Ball b;
    Platform p;
    CollisionDetection cd;

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        GetFPS();
        b.drawBall();
        b.moveBall();
        b.bounce();
        p.drawPlatform();
        p.platformControl();
        cd.collisionCheckwithLine(b.position.x, b.position.y, p.position.x - p.size.x/2, p.position.x + p.size.x/2, p.position.y);
        //p.CollisionCheckwithBall(b.position.x, b.position.y);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}