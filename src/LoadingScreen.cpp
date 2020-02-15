#include <string>
#include <SDL2/SDL.h>
#include "SDL2/SDL_image.h"
#include "LoadingScreen.h"

LoadingScreen::LoadingScreen(SDL_Window* window, SDL_Renderer* renderer)
{
    this->window = window;
    this->renderer = renderer;

    starting_time = SDL_GetTicks();
    std::string nume;
    char nr[3];

    animation_rect = {0, 0, 800, 450};

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 1);

    for(int i = 0; i < 30; ++i)
    {
        itoa(i, nr, 10);
        nume = "resources/animatii/pac-man/loading";
        nume.append(nr);
        nume += ".png";
        animation_frames[i] = IMG_LoadTexture(renderer, nume.c_str());
    }

}
void LoadingScreen::update()
{

}

void LoadingScreen::render()
{
    static int counter = 0;
    if(SDL_GetTicks() - starting_time >= 1000 / 30 ){
        counter = (counter == 29) ? 0 : counter + 1;
        starting_time = SDL_GetTicks();
    }
    SDL_RenderCopy(renderer, animation_frames[counter], NULL, &animation_rect);
}

LoadingScreen::~LoadingScreen()
{
    //dtor
}
