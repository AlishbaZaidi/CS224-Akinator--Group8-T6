// This line is a header guard to prevent multiple inclusions of this header file.
#pragma once

// Including necessary SDL libraries and standard I/O libraries.
#include <SDL.h>             // Main SDL header
#include <SDL_image.h>       // SDL extension for handling image files
#include <stdio.h>           // Standard input/output library
#include <iostream>          // Library for console input and output
#include <string>            // String type header
#include "MusicManager.hpp"  // Including the MusicManager class header

// Declaration of the Game class
class Game {
public:
    // Singleton pattern implementation for the Game class.
    static Game& getInstance() 
    {
        static Game instance; // Create a static instance of Game
        return instance;      // Return the instance
    }

    // Delete the copy constructor to prevent copying of the singleton instance
    Game(Game const&) = delete;
    // Delete the assignment operator to prevent assignment of the singleton instance
    void operator=(Game const&) = delete;

    // Destructor of the Game class
    ~Game();

    // Member variables and functions
    // MusicManager MG;               // Uncomment to use MusicManager
    bool userWantsMusic;            // Flag to store if the user wants music
    void loadImage(const std::string& imagePath); // Function to load an image from a path
    void render();                                // Function to render the current image
    void handleEvents();                          // Function to handle SDL events
    bool isRunning() const;                       // Function to check if the game is running
    void renderInitialScreen();                   // Function to render the initial screen
    void run();                                   // Function to run the game
    void displayOutcome(const std::string& outcomeImage); // Function to display the outcome image
    bool promptMusicChoice();                     // Function to prompt the user for music choice
    void startMusic();                            // Function to start playing music
    void startMusic(std::string filenaem);         // Overload Function to start playing music
    void stopMusic();                             // Function to stop playing music
    void closeSDL();                              // Function to close SDL and clean up

private:
    // Constructor is private to enforce singleton pattern
    Game();
    SDL_Window* window;            // Pointer to the SDL_Window
    SDL_Renderer* renderer;        // Pointer to the SDL_Renderer
    SDL_Texture* currentTexture;   // Pointer to the current SDL_Texture
    bool running;                  // Flag to store the running state of the game

    // Private member functions
    void initSDL();                // Function to initialize SDL
    // void destroyTextures();      // Uncomment to use a function to destroy textures
};