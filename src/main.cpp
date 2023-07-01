#include "raylib.h"

int main()
{
    InitWindow(512, 512, "Window");

    while(!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        EndDrawing();
    }

    return 0;

}