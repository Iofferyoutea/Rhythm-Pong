#include "button.h"

void Button::SpawnButtonTex(Button &buttonTex)
{
    DrawTexture(buttonTex.GetTex(), buttonTex.GetRectPos().x, buttonTex.GetRectPos().y, WHITE);
}

void Button::SpawnButtonCollision(Button &buttonRect)
{
    
}