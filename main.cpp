#include <iostream>
#include <SDL2/SDL.h>
using namespace std;

int main(int argc, char* argv[])
{
    bool isRunning=true;

    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* window;
    SDL_Renderer* renderer;

    window = SDL_CreateWindow("sa window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800,600,0);
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    SDL_Event e;

    while(isRunning)
    {
        if(SDL_PollEvent(&e))
            if(e.type == SDL_QUIT)
                isRunning=false;

        SDL_RenderClear(renderer);

        SDL_RenderPresent(renderer);
    }

    cout<<"Done";
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);

    return 0;
}
