#ifndef LOADINGSCREEN_H
#define LOADINGSCREEN_H
#include <SDL2/SDL.h>

class LoadingScreen
{
    public:
        LoadingScreen(SDL_Window* window, SDL_Renderer* renderer);
        virtual ~LoadingScreen();
        void update();
        void render();
    protected:
        SDL_Window* window;
        SDL_Renderer* renderer;
    private:
};

#endif // LOADINGSCREEN_H
