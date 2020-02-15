#include "CommonFunctions.h"
bool leftClick(SDL_Rect rectangle)
{
    SDL_Event e;
    if(SDL_PollEvent(&e))
        if(e.type == SDL_MOUSEBUTTONDOWN && e.button.button == SDL_BUTTON_LEFT)
        return true;
    return false;
}
