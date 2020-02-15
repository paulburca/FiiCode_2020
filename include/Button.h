#ifndef BUTTON_H
#define BUTTON_H
#include <SDL2/SDL.h>

class Button
{
    public:
        Button(const char* title, int x, int y, unsigned int h, unsigned int w);
        virtual ~Button();

    protected:
        const char* title;
        SDL_Rect rect;
        SDL_Texture* button_texture;

        void setPosition(int x, int y);
        void setX(int x);
        void setY(int y);
        void setDimensions(unsigned int h,unsigned int w);
        void setH(unsigned int h);
        void setW(unsigned int w);
        void createTexture(const char* file);
        void update();
        int getX();
        int getY();
    private:
};

#endif // BUTTON_H
