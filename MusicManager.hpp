#pragma once
#include <SDL_mixer.h>

class MusicManager{
public:
    MusicManager();
    ~MusicManager();

    void playMusic(const char* file, int loops = -1);
    void toggleMusic();
    void stopMusic();

private:
    Mix_Music* currentMusic;
};

