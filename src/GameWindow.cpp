#include <iostream>
#include "GameWindow.h"
GameWindow::GameWindow()
{
    isRunning = true;
    window = SDL_CreateWindow("fereastra", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
    renderer = SDL_CreateRenderer(window, -1, 0);
    loading_screen = new LoadingScreen(window, renderer);
    status = 0;
}
void GameWindow::Run()
{
    while(isRunning)
    {
        Clear();
        Update();
        Render();
    }
}
void GameWindow::Clear()
{
    SDL_RenderClear(renderer);
}
void GameWindow::Update()
{
    if(SDL_PollEvent(&e))
        if(e.type == SDL_QUIT)
            isRunning = false;
    switch (status)
    {
        case LOADING:
            loading_screen->update();
            break;
    }
}
void GameWindow::Render()
{
    switch (status)
    {
        case LOADING:
            loading_screen->render();
            break;
    }
    SDL_RenderPresent(renderer);
}
GameWindow::~GameWindow()
{
    //dtor
}
