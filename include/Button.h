#ifndef BUTTON_H
#define BUTTON_H
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

class Button
{
    public:
        Button(SDL_Renderer* renderer, const char* title, int x, int y, unsigned int h, unsigned int w, unsigned char tip);
        void setPosition(int x, int y);
        void setX(int x);
        void setY(int y);
        void setDimensions(unsigned int h,unsigned int w);
        void setH(unsigned int h);
        void setW(unsigned int w);
        void createTexture( char* file);
        void Update();
        void Render();
        int getX();
        int getY();
        int getH();
        int getW();
        virtual ~Button();

    protected:
        const char* title;
        SDL_Rect rect;
        SDL_Rect textRect;
        SDL_Texture* button_texture;
        SDL_Texture* hover_texture;
        SDL_Texture* text;
        SDL_Texture** button;
        SDL_Renderer* renderer;
    private:
};

#endif // BUTTON_H
