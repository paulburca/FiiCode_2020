#include "MenuScreen.h"
#include <iostream>
#include <string.h>
#define start 0
#define options 1
#define howto 2
#define exit 3
MenuScreen::MenuScreen(SDL_Renderer* renderer)
{
    std::string TextButoane[] ={"start", "options", "How to", "exit"};
    this->renderer = renderer;

    for(int i = start; i <= exit; i++)
        buttons[i]= new Button(renderer, TextButoane[i].c_str(), 20, i*80 + 30, 50, 300, 1);
}
void MenuScreen::Render()
{
    for(int i = start; i <= exit; i++)
        buttons[i]->Render();
}
void MenuScreen::Update()
{
     for(int i = start; i <= exit; i++)
        buttons[i]->Update();
}
MenuScreen::~MenuScreen()
{

}
