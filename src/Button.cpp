#include "Button.h"
#include <iostream>
#include <string.h>
#include <CommonFunctions.h>

Button::Button(SDL_Renderer* renderer, const char* title, int x, int y, unsigned int h, unsigned int w,unsigned char tip)
{
    rect.x = x;
    rect.y = y;
    rect.h = h;
    rect.w = w;
    this->renderer = renderer;
    this->title = title;
    createTexture("resources/Button_1");
    button = &button_texture;
}
void Button::setPosition(int x,int y)
{
    rect.x = x;
    rect.y = y;
}
void Button::createTexture(char* file)
{
    std::string s="";
    s.append(file);
    s.append(".png");
    SDL_Surface* surf = IMG_Load(s.c_str());
    button_texture = SDL_CreateTextureFromSurface(renderer, surf);
    s="";
    s.append(file);
    s.append("_hover.png");
    surf = IMG_Load(s.c_str());
    hover_texture = SDL_CreateTextureFromSurface(renderer, surf);
    SDL_FreeSurface(surf);
    text = TextureFromText(renderer, title, "resources/fonts/arial.ttf", {124, 124, 124, 0}, 30, &textRect.h, &textRect.w);
    CenterRectOnAnother(&textRect, rect);
}
int Button::getH()
{
    return rect.h;
}
void Button::Render()
{
    SDL_RenderCopy(renderer, *button, NULL, &rect);
    SDL_RenderCopy(renderer, text, NULL, &textRect);
}
void Button::Update()
{
    if(onHover(rect))
        {
            button = &hover_texture;
            SDL_SetCursor(SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_HAND));
        }
    else
    if(button != &button_texture)
        {
            button = &button_texture;
            SDL_SetCursor(SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_ARROW));
        }
}
int Button::getW()
{
    return rect.w;
}
void Button::setX(int x)
{
    rect.x = x;
}
void Button::setY(int y)
{
    rect.y = y;
}
void Button::setDimensions(unsigned int h, unsigned int w)
{
    rect.h = h;
    rect.w = w;
}
void Button::setH(unsigned int h)
{
    rect.h = h;
}
void Button::setW(unsigned int w)
{
    rect.w = w;
}
int Button::getX()
{
    return rect.x;
}
int Button::getY()
{
    return rect.y;
}
Button::~Button()
{
    //dtor
}
