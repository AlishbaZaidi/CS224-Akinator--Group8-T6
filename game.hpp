// Include necessary SDL and C++ headers
#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "MusicManager.hpp"

// Define the Game class
class Game {
public:
    // Singleton pattern: Get the instance of the Game class
    static Game& getInstance() 
    {
        static Game instance;
        return instance;
    }

    // Delete copy constructor and copy assignment operator to enforce singleton pattern
    Game(Game const&) = delete;
    void operator=(Game const&) = delete;

    // Destructor for the Game class
    ~Game();
    
    // Flag indicating whether the user wants music
    bool userWantsMusic;

    // Function to load an image as a texture
    void loadImage(const std::string& imagePath);

    // Function to render the current texture to the screen
    void render();

    // Function to handle SDL events
    void handleEvents();

    // Function to check if the game is running
    bool isRunning() const;

    // Function to render the initial screen
    void renderInitialScreen();

    // Function to run the main game loop
    void run();

    // Function to display the outcome image and play outro music
    void displayOutcome(const std::string& outcomeImage);

    // Function to prompt the user for their music choice
    bool promptMusicChoice();

    // Function to start playing music
    void startMusic();

    // Function to stop playing music
    void stopMusic();

    // Function to release SDL resources
    void closeSDL();

private:
    // Private constructor for the singleton pattern
    Game();

    // SDL window and renderer
    SDL_Window* window;
    SDL_Renderer* renderer;

    // Current texture to be rendered
    SDL_Texture* currentTexture;

    // Flag indicating whether the game is running
    bool running;

    // Function to initialize SDL and related libraries
    void initSDL();
};
