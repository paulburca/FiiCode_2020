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
        SDL_Texture* animation_frames[30];
        SDL_Rect animation_rect;
        Uint32 starting_time;
    private:
};

#endif // LOADINGSCREEN_H
