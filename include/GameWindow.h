#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H
#include "LoadingScreen.h"
#include <SDL2/SDL.h>

#define LOADING 0
#define MENU 1
#define GAMESCREEN 2

class GameWindow
{
    public:
        GameWindow();
        virtual ~GameWindow();
        void Run();

    protected:
        bool isRunning;
        unsigned char status;
        void Clear();
        void Update();
        void Render();
        SDL_Window* window;
        SDL_Renderer* renderer;
        LoadingScreen* loading_screen;
        SDL_Event e;
    private:
};

#endif // GAMEWINDOW_H
