#include "raylib.h"
#include "raymath.h"

class  Collision
{

public:
    bool collisionCheckwithLine(float PointPositionX, float PointPositionY, float lineStartX, float lineEndX, float lineY){
        float startPointX = lineStartX;
        float endPointX = lineEndX;
        float positionY = lineY;

        float pointX = PointPositionX;
        float pointY = PointPositionY;

        if(pointY > positionY){
            if(pointX + startPointX && pointX < endPointX){
                DrawText("COLLIDE!!", 250, 10, 20, RED);
            }
        }
        else{
            DrawText("No Collision", 250, 10, 20, RED);
        }
    }
                                
};
