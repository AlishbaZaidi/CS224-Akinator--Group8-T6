#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include"MusicManager.hpp"


class Game {
public:
    Game();
    ~Game();
    MusicManager MG;
    bool userWantsMusic;
    void loadImage(const std::string& imagePath);
    void render();
    void handleEvents();
    bool isRunning() const;
    void renderInitialScreen();
    void run();
    void displayOutcome(const std::string& outcomeImage);
    bool promptMusicChoice();

private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Texture* currentTexture;
    bool running;
    
    
    void initSDL();
    void closeSDL();
    // void destroyTextures();
};

