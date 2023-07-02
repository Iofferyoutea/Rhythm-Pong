#ifndef SCENEHANDLER_H
#define SCENEHANDLER_H

#include "raylib.h"

class SceneHandler
{
private:
    enum Scenes {
        mainMenu,
        gameModeSelect,
        mapSelect,
        play,
        pause,
        end
    };

    Scenes currentScene;

public:
    Scenes GetCurrentScene() { return currentScene; }
    void SetCurrentScene(Scenes newCurrentScene) { currentScene =  newCurrentScene; }

    int Test();
};

#endif