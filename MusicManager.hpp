#pragma once
#include <SDL_mixer.h>

class MusicManager{
public:
    static MusicManager& getInstance()
    {
        static MusicManager instance;
        return instance;
    }
    ~MusicManager();

    void playMusic(const char* file, int loops = -1);
    void toggleMusic();
    void stopMusic();

private:
    MusicManager();
    Mix_Music* currentMusic;
};

