#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <iostream>
#include <string>


class Game {
public:
    Game();
    ~Game();

    void loadImage(const std::string& imagePath);
    void render();
    void handleEvents();
    bool isRunning() const;
    void renderInitialScreen();
    void run();
    void displayOutcome(const std::string& outcomeImage);


private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Texture* currentTexture;
    bool running;
    
    
    void initSDL();
    void closeSDL();
    // void destroyTextures();
};

