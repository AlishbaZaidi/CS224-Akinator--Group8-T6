#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include"MusicManager.hpp"


class Game {
public:
    static Game& getInstance() 
    {
        static Game instance;
        return instance;
    }

    Game(Game const&) = delete;
    void operator=(Game const&) = delete;

    ~Game();
    // MusicManager MG;
    bool userWantsMusic;
    void loadImage(const std::string& imagePath);
    void render();
    void handleEvents();
    bool isRunning() const;
    void renderInitialScreen();
    void run();
    void displayOutcome(const std::string& outcomeImage);
    bool promptMusicChoice();
    void startMusic();
    void stopMusic();


private:
    Game();
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Texture* currentTexture;
    bool running;
    
    
    void initSDL();
    void closeSDL();
    // void destroyTextures();
};
