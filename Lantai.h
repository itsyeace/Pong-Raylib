#include "raylib.h"
#include "raymath.h"

class Platform
{
public:
    Vector2 position;
    Vector2 speed;
    Vector2 size;

    void drawPlatform(){
        //DrawRectangle(position.x - size.x/2, position.y, size.x, size.y, RED);
        //DrawLine(position.x, position.y, position.x + size.x, position.y + size.y, GREEN);
        float offsetX = size.x/2;
        float startPoint = position.x - offsetX;
        float endPoint =   position.x + offsetX;
        
        //DrawLine(startPoint, position.y, endpoint, position.y, GREEN);
        DrawRectangle(startPoint, position.y, size.x, size.y, GREEN);
    }

    void platformControl(){
        if(IsKeyDown(KEY_D))
        {
            position.x = position.x + speed.x;
        }
        if(IsKeyDown(KEY_A))
        {
            position.x = position.x - speed.x;
        }

    }

    void CollisionCheckwithBall(float ballPositionX, float ballPositionY){
        float startPoint = position.x - size.x/2;
        float endPoint = position.x + size.x/2;

        float ballX = ballPositionX;
        float ballY = ballPositionY;

        if(ballY > position.y){
            if(ballX > startPoint && ballX < endPoint){
                DrawText("Collide!!", 250, 10, 20, RED);
            }
        }
        else{
            DrawText("No Collision", 250, 10, 20, GREEN);
        }
    }

Platform();
};

Platform::Platform()
{
    position = {250, 450};
    speed = {5, 0};
    size = {100, 10};
}
