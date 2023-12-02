#include "game.hpp"

Game::Game() : window(nullptr), renderer(nullptr), currentTexture(nullptr), running(true), userWantsMusic(false) {
    initSDL();
}

Game::~Game() 
{
    // if(currentTexture)
    // {
    //     SDL_DestroyTexture(currentTexture);
    //     currentTexture = nullptr;
    // }
    
    // if (renderer)
    // {
    //     SDL_DestroyRenderer(renderer);
    // }
    // if (window)
    // {
    //     SDL_DestroyWindow(window);
    //     window = nullptr;
    // }
    // IMG_Quit();
    // SDL_Quit();
    closeSDL();
}

void Game::initSDL() {
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        // Handle SDL initialization error
    }

    window = SDL_CreateWindow("HU-Quest", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);
    if (!window) {
        // Handle window creation error
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        // Handle renderer creation error
    }

    IMG_Init(IMG_INIT_PNG);
}

void Game::closeSDL() {
    if (currentTexture) {
        SDL_DestroyTexture(currentTexture);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    IMG_Quit();
    SDL_Quit();
}

void Game::loadImage(const std::string& imagePath) {
    SDL_Surface* loadedSurface = IMG_Load(imagePath.c_str());
    if (!loadedSurface) {
        // Handle image loading error
    } else {
        SDL_Texture* newTexture = SDL_CreateTextureFromSurface(renderer, loadedSurface);
        if (!newTexture) {
            // Handle texture creation error
        }

        if (currentTexture) {
            SDL_DestroyTexture(currentTexture);
        }
        currentTexture = newTexture;
        SDL_FreeSurface(loadedSurface);
    }
}

void Game::render() {
    SDL_RenderClear(renderer);
    if (currentTexture) {
        SDL_RenderCopy(renderer, currentTexture, NULL, NULL);
    }
    SDL_RenderPresent(renderer);
}

void Game::renderInitialScreen()
{
    loadImage("Start.png");
    render();
}

void Game::handleEvents() {
    SDL_Event e;
    while (SDL_PollEvent(&e) != 0) {
        if (e.type == SDL_QUIT) {
            running = false;
        }
    }
}

bool Game::isRunning() const {
    return running;
}


void Game::run()
{
    renderInitialScreen();

    bool king = promptMusicChoice();
    
    if (king) 
    {
        startMusic();
        // MG.playMusic("Music.mp3");
    }

    bool clicked = false;
    SDL_Event e;
    while (!clicked)
    {
        while(SDL_PollEvent(&e) != 0)
        {
            if(e.type == SDL_QUIT)
            {
                running = false;
                return;
            }else if(e.type == SDL_MOUSEBUTTONDOWN)
            {
                clicked = true;
            }
        }
    }
}



void Game::displayOutcome(const std::string& outcomeImage) {
    loadImage(outcomeImage); 
    render();
    if (userWantsMusic) {
        // MG.playMusic("Outro.mp3");
        MusicManager& MG = MusicManager::getInstance();
        MG.playMusic("Outro.mp3"); 
    }
    // Optionally wait for a user input or a set amount of time before proceeding
    SDL_Delay(5000); // For example, wait for 3 seconds
}



bool Game::promptMusicChoice() {
    SDL_Window* choiceWindow = SDL_CreateWindow("Music Choice", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 200, 200, SDL_WINDOW_SHOWN);
    SDL_Renderer* choiceRenderer = SDL_CreateRenderer(choiceWindow, -1, SDL_RENDERER_ACCELERATED);
    SDL_Surface* loadedSurface = IMG_Load("Popup.png");
    SDL_Texture* popupTexture = SDL_CreateTextureFromSurface(choiceRenderer, loadedSurface);
    SDL_FreeSurface(loadedSurface); // Free the surface after creating the texture

    bool choiceMade = false;
    SDL_Event e;

    while (!choiceMade) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                exit(0);
            } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                int x, y;
                SDL_GetMouseState(&x, &y);
                if (x >= 107 && x <= 167 && y >= 68 && y <= 131) { // YES coordinates
                    userWantsMusic = true;
                    // MG.playMusic("Music.mp3"); // Replace with correct path
                    choiceMade = true;
                } else if (x >= 30 && x <= 90 && y >= 68 && y <= 131) { // NO coordinates
                    userWantsMusic = false;
                    stopMusic(); // Stop music if playing
                    choiceMade = true;
                }
            }
        }
        SDL_RenderClear(choiceRenderer);
        SDL_RenderCopy(choiceRenderer, popupTexture, NULL, NULL);
        SDL_RenderPresent(choiceRenderer);
    }

    SDL_DestroyTexture(popupTexture);
    SDL_DestroyRenderer(choiceRenderer);
    SDL_DestroyWindow(choiceWindow);

    return userWantsMusic;
}

void Game::startMusic() {
    if (userWantsMusic) {
        MusicManager::getInstance().playMusic("Music.mp3");  // Add correct path
    }
}

void Game::stopMusic() {
    MusicManager::getInstance().stopMusic();
}