#ifndef MENUSCREEN_H
#define MENUSCREEN_H
#include <SDL2/SDL.h>
#include "Button.h"
class MenuScreen
{
    public:
        MenuScreen(SDL_Renderer* renderer);
        virtual ~MenuScreen();
        void Render();
        void Update();
        SDL_Renderer* renderer;
        Button* buttons[4];
    protected:

    private:
};

#endif // MENUSCREEN_H
