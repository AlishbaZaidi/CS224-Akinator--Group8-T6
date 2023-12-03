#include<iostream>
#include "MusicManager.hpp"

// Constructor initializes the currentMusic pointer to NULL
MusicManager::MusicManager(): currentMusic(NULL) {}

// Destructor frees the allocated music resources
MusicManager::~MusicManager()
{
    if (currentMusic != NULL) {
        Mix_FreeMusic(currentMusic);
    }
}

// Load and play music from the specified file with an optional loop parameter
void MusicManager::playMusic(const char* file, int loops)
{
    // Free the current music resource if it exists
    if (currentMusic != NULL) {
        Mix_FreeMusic(currentMusic);
    }

    // Load the music from the specified file
    currentMusic = Mix_LoadMUS(file);

    // Check if the music loading was successful
    if (currentMusic == NULL) {
        std::cout << "Failed to load music! SDL_mixer Error: " << Mix_GetError() << std::endl;
    } else {
        // Play the loaded music with the specified number of loops
        Mix_PlayMusic(currentMusic, loops);
    }
}

// Toggle the playing state of the music (play, pause, or resume)
void MusicManager::toggleMusic()
{
    // If no music is currently playing, start playing the current music with an infinite loop
    if (Mix_PlayingMusic() == 0) {
        Mix_PlayMusic(currentMusic, -1);
    } else {
        // If music is playing, toggle between pause and resume states
        if (Mix_PausedMusic() == 1) {
            Mix_ResumeMusic();
        } else {
            Mix_PauseMusic();
        }
    }
}

// Stop the currently playing music
void MusicManager::stopMusic()
{
    Mix_HaltMusic();
}
