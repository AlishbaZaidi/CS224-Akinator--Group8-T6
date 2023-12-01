#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <iostream>

class Game {
public:
    Game();
    ~Game();

    void run();

private:
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Surface** images;
    SDL_Texture** textures;
    int numImages;
    int currentImage;

    void loadImages();
    void handleEvents();
    void render();
    void destroyTextures();
};

