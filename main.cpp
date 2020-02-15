#include <iostream>
#include <SDL2/SDL.h>
#include "GameWindow.h"
using namespace std;

int main(int argc, char* argv[])
{
    GameWindow* gamewindow= new GameWindow();
    gamewindow->run();
    return 0;
}
