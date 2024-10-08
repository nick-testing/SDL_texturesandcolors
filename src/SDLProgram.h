#ifndef SDLPROGRAM_H
#define SDLPROGRAM_H

#include "LTexture.h"
#include <SDL2/SDL_rect.h>

typedef struct SDL_Window SDL_Window;
typedef struct SDL_Renderer SDL_Renderer;
typedef struct SDL_Texture SDL_Texture;

class SDLProgram 
{
    public:
        SDLProgram();
        virtual void Run() = 0;

    protected:
        static const int SCREEN_HEIGHT = 600;
        static const int SCREEN_WIDTH = 800;

        SDL_Window* window;
        SDL_Renderer* renderer;

        /**
         * @brief SDL and SDL_image libraries.
         * Init() also creates an SDL window and a hardware accelerated SDL renderer for that window.
         * 
         * @return true on succes, false on failure
         */
        virtual bool Init();

        /**
         * @brief Clears currently displayed image
         */
        virtual void ClearScreen();

        /**
         * @brief Deallocate resources and shut down SDL subsystems
         */
        virtual void Close();

        virtual void RenderLoop() = 0;
        virtual bool LoadMedia() = 0;
};

#endif