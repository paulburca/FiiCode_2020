#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H


class GameWindow
{
    public:
        GameWindow();
        virtual ~GameWindow();
        void Run();

    protected:
        bool isRunning;
        void Clear();
        void Update();
        void Render();
        SDL_Window* window;
        SDL_Renderer* renderer;
        SDL_Event e;
    private:
};

#endif // GAMEWINDOW_H
