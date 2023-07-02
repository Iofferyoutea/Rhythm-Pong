#include "raylib.h"
#include "scenehandler.h"
#include "mainmenu.h"

// Variable declaration goes here
int winDim[1];

// Object declaration goes here
MainMenu mainMenu;

SceneHandler sceneHandler;

// Function declaration goes here
void UpdateDrawnFrame();

int main()
{
    winDim[0] = 640;
    winDim[1] = 480;

    InitWindow(winDim[0], winDim[1], "Window");

    while(!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        UpdateDrawnFrame();

        EndDrawing();
    }

    return 0;

}   

void UpdateDrawnFrame()
{
    mainMenu.DrawMainMenu(winDim[0], winDim[1]);
}