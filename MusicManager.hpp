#pragma once
#include <SDL_mixer.h>

class MusicManager {
public:
    // Singleton pattern: Get the instance of the MusicManager
    static MusicManager& getInstance()
    {
        static MusicManager instance;
        return instance;
    }

    // Destructor for the MusicManager class
    ~MusicManager();

    // Play music from a specified file with an optional loop parameter
    void playMusic(const char* file, int loops = -1);

    // Toggle the playing state of the music
    void toggleMusic();

    // Stop the currently playing music
    void stopMusic();

private:
    // Private constructor for the MusicManager to enforce singleton pattern
    MusicManager();

    // Pointer to the SDL_Mixer music structure
    Mix_Music* currentMusic;
};
