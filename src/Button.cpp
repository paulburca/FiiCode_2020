#include "Button.h"

Button::Button(const char* title, int x, int y, unsigned int h, unsigned int w)
{
    rect.x = x;
    rect.y = y;
    rect.h = h;
    rect.w = w;
    this->title = title;
}

void Button::setPosition(int x,int y)
{
    rect.x = x;
    rect.y = y;
}
void Button::createTexture(const char* file)
{

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
