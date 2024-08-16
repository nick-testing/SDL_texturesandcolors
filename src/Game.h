#ifndef GAME_H
#define GAME_H

#include "LTexture.h"

typedef struct SDL_Window SDL_Window;
typedef struct SDL_Renderer SDL_Renderer;
typedef struct SDL_Texture SDL_Texture;

class Game {
public:
    Game();
    void Run();

private:
    static const int SCREEN_HEIGHT = 600;
    static const int SCREEN_WIDTH = 800;

    SDL_Window* window;
    SDL_Renderer* renderer;
    LTexture backgroundTexture;
    LTexture foregroundTexture;
    
    bool Init();
    bool LoadMedia();

    void Close();
};

#endif