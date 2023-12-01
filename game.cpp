#include "game.hpp"

Game::Game() : window(nullptr), renderer(nullptr), currentTexture(nullptr), running(true) {
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
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        // Handle SDL initialization error
    }

    window = SDL_CreateWindow("Game Title", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);
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

    // Optionally wait for a user input or a set amount of time before proceeding
    SDL_Delay(3000); // For example, wait for 3 seconds
}