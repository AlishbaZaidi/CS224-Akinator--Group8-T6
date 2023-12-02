#include<iostream>
#include "MusicManager.hpp"

MusicManager::MusicManager(): currentMusic(NULL){}

MusicManager::~MusicManager()
{
    if (currentMusic != NULL){
        Mix_FreeMusic(currentMusic);
    }
}

void MusicManager::playMusic(const char* file, int loops)
{
    if (currentMusic != NULL)
    {
        Mix_FreeMusic(currentMusic);
    }
    currentMusic = Mix_LoadMUS(file);
    if (currentMusic == NULL)
    {
        std::cout<<"Failed to load music! SDL_mixer Error: " << Mix_GetError() << std::endl;
    }else
    {
        Mix_PlayMusic(currentMusic, loops);
    }
}

void MusicManager::toggleMusic()
{
    if (Mix_PlayingMusic() == 0){Mix_PlayMusic(currentMusic, -1);}
    else
    {
        if (Mix_PausedMusic() == 1) 
        {
            Mix_ResumeMusic();
        } else 
        {
            Mix_PauseMusic();
        }
    }
}

void MusicManager::stopMusic() 
{
    Mix_HaltMusic();
}