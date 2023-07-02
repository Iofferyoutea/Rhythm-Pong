#ifndef BUTTON_H
#define BUTTON_H

#include "raylib.h"

class Button
{
private:
    // Collision rectangle
    Vector2 rectPos;
    float rectWidth;
    float rectHeight;
    Rectangle rect;

    // Button texture (Image are for CPU, Texture is for GPU (RAM vs VRAM))
    unsigned int texId;
    int texWidth;
    int texHeight;
    int texMipMaps;
    int texFormat;
    Texture tex;

public:
    // @todo: Create spawn Button Texture and Button Collision functions
    void SpawnButtonTex(Button &buttonTex);
    void SpawnButtonCollision(Button &buttonRect);

    // Get Set
    // Collision rectangle
    // Rectangle location
    Vector2 GetRectPos() { return rectPos; }
    void SetRectPos(Vector2 newRectPos) { rectPos = newRectPos; }
    // Rectangle width
    float GetRectWidth() { return rectWidth; }
    void SetRectWidth(float newRectWidth) { rectWidth = newRectWidth; }
    // Rectangle height
    float GetRectHeight() { return rectHeight; }
    void SetRectHeight(float newRectHeight) { rectHeight = newRectHeight; }
    // Rectangle
    Rectangle GetRect() { return rect; }
    void SetRect(float newRectX, float newRectY, float newRectWidth, float newRectHeight)
    { 
        rect.x = newRectX;
        rect.y = newRectY;
        rect.width = newRectWidth;
        rect.height = newRectHeight;
    }

    // Button texture
    // Texture ID
    unsigned int GetTexID() { return texId;}
    void SetTexID(unsigned int newTexId) { texId = newTexId; }
    // Texture width
    int GetTexWidth() { return texWidth; }
    void SetTexWidth(int newTexWidth) { texWidth = newTexWidth; }
    // Texture height
    int GetTexHeight() { return texHeight; }
    void SetTexHeight(int newTexHeight) { texHeight = newTexHeight; }
    // Texture mipmaps
    int GetTexMipMaps() { return texMipMaps; }
    void SetTexMipMaps(int newTexMipMaps) { texMipMaps = newTexMipMaps; }
    // Texture format
    int GetTexFormat() { return texFormat; }
    void SetTexFormat(int newTexFormat) { texFormat = newTexFormat; }
    // Texture
    Texture GetTex() { return tex; }
    void setTex(Texture newTex) { tex = newTex; }

};

#endif