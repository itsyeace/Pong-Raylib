#include "raylib.h"
#include "raymath.h"

class Ball
{
public:
    Vector2 position;
    Vector2 speed;
    float size;

    void drawBall()
    {
        DrawCircle(position.x, position.y, size, BLUE);
    }

    void moveBall()
    {
        position.x = position.x + speed.x;
        position.y = position.y + speed.y;
        position = Vector2Add (position, speed);  

        }

    void bounce()
    {
        if(position.x > GetScreenWidth() || position.x < 0)
        {
            speed.x = speed.x * -1;
        }
        if(position.y > GetScreenHeight() || position.y < 0)
        {
            speed.y = speed.y * -1;
        }
    }

    void platformBounce() {

    }
    Ball();

    
};

//constructor
Ball::Ball(/* args */)
{
    position = {233, 120};
    speed = { 2.5, 2.5};
    //position.x = 250;
    //position.y = 250;
    //speed.x = 0.01;
    //speed.y = 0.01;
    size = 20;
}
