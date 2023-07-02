#ifndef MAINMENU_H
#define MAINMENU_H

#include "raylib.h"
#include "button.h"

class MainMenu
{
private:
    int winWidth;
    int winHeight;

public:
    void DrawMainMenu(int winHeight, int winWidth);
    void StartButton();
    void QuitButton();

    int GetWinWidth() { return winWidth; }
    void SetWinWidth(int newWinWidth) { winWidth = newWinWidth; }
    int GetWinHeight() { return winHeight; }
    void SetWinHeight(int newWinHeight) { winHeight = newWinHeight; }

};

#endif