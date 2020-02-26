#ifndef COMMONFUNCTIONS_H_INCLUDED
#define COMMONFUNCTIONS_H_INCLUDED
#include <SDl2/SDL.h>
bool leftClick(SDL_Rect rectangle);
bool onHover(SDL_Rect rectangle);
SDL_Texture* TextureFromText(SDL_Renderer* renderer, const char* text, const char* FontPath, SDL_Color color, unsigned int Size, int* h, int* w);
void CenterRectOnAnother(SDL_Rect* rect, SDL_Rect field);
void CenterVerticalOnWindow(SDL_Rect* button, SDL_Window* window);
extern SDL_Event e;
extern int prev;
#endif // COMMONFUNCTIONS_H_INCLUDED
