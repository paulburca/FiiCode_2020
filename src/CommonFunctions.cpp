#include "CommonFunctions.h"
#include <iostream>
#include <SDL2/SDL_ttf.h>
SDL_Event e;
int prev=SDL_MOUSEBUTTONDOWN;
bool leftClick(SDL_Rect rectangle)
{
    std::cout<<e.type<<std::endl;
    if(e.type == SDL_MOUSEBUTTONDOWN &&
       e.button.button == SDL_BUTTON_LEFT &&
       prev != SDL_MOUSEBUTTONDOWN )
            return true;
    return false;
}
bool onHover(SDL_Rect rectangle)
{
    int x,y;
    SDL_GetMouseState(&x, &y);
    if(x >= rectangle.x && x<= rectangle.x + rectangle.w && y >= rectangle.y && y<= rectangle.y + rectangle.h)
        return true;
    return false;
}
SDL_Texture* TextureFromText(SDL_Renderer* renderer,const char* text, const char* FontPath, SDL_Color color, unsigned int Size, int* h, int* w)
{
    TTF_Font* font = TTF_OpenFont(FontPath, Size);
    SDL_Surface* surf = TTF_RenderText_Blended(font, text, color);
    *h = surf->h;
    *w = surf->w;
    return SDL_CreateTextureFromSurface(renderer, surf);

}
void CenterRectOnAnother(SDL_Rect* rect, SDL_Rect field)
{
    if(rect->h <= field.h && rect->w <= field.w)
    {
        rect->x = field.x + ((field.x + field.w) - (field.x + rect->w))/2;
        rect->y = field.y + ((field.y + field.h) - (field.y + rect->h))/2;
    }
}
