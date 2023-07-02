#include "mainmenu.h"

#include "button.h"

void MainMenu::DrawMainMenu(int winWidth, int winHeight)
{
    SetWinWidth(winWidth);
    SetWinHeight(winHeight);

    StartButton();
    QuitButton();

    // DrawText("Main Menu", 10, 10, 20, BLACK);
}

void MainMenu::StartButton()
{
    DrawRectangle(GetWinWidth()/2 - 40, GetWinHeight()/2, 80, 20, RED);
}

void MainMenu::QuitButton()
{
    Button quitButton;

    // @todo: Create button collision rect
    quitButton.SetRectPos({ static_cast<float>(GetWinWidth()/2 - 40), static_cast<float>(GetWinHeight()/2 - 40) });
    quitButton.SetRectWidth(80);
    quitButton.SetRectHeight(20);
    quitButton.SetRect(quitButton.GetRectPos().x, quitButton.GetRectPos().y, quitButton.GetRectWidth(), quitButton.GetRectHeight());


    DrawRectangle(GetWinWidth()/2 - 40, GetWinHeight()/2 - 40, 80, 20, RED);

    // @todo: If mouse is over collsion rect AND pressed
    if (IsKeyReleased(KEY_SPACE) && GetMouseX() >= quitButton.GetRectPos().x && GetMouseX() <= quitButton.GetRectPos().x + quitButton.GetRectWidth() && GetMouseY() >= quitButton.GetRectPos().y && GetMouseY () <= quitButton.GetRectPos().y + quitButton.GetRectHeight())
    {
        DrawText("Game should quit.", 10, 10, 20, BLACK);
        WindowShouldClose();
    }
    else
    {
        DrawText("Game should not quit.", 10, 10, 20, BLACK);
    }
}