#include "game.hpp"

Game::Game() : window(nullptr), renderer(nullptr), images(nullptr), textures(nullptr), numImages(0), currentImage(0) {
    SDL_Init(SDL_INIT_EVERYTHING);
    window = SDL_CreateWindow("HU-Quest", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
    renderer = SDL_CreateRenderer(window, -1, 0);
    loadImages();
}

Game::~Game() {
    destroyTextures();

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

void Game::loadImages() {
    numImages = 10; // Set the number of images

    images = new SDL_Surface*[numImages];
    textures = new SDL_Texture*[numImages];

    for (int i = 0; i < numImages; ++i) {
        char filename[15]; // Adjusted to accommodate larger filenames
        sprintf(filename, "%d.png", i + 1);
        images[i] = IMG_Load(filename);

        if (images[i] == nullptr) {
            printf("Unable to load image %s! SDL_image Error: %s\n", filename, IMG_GetError());
        }

        textures[i] = SDL_CreateTextureFromSurface(renderer, images[i]);

        if (textures[i] == nullptr) {
            printf("Unable to create texture from image %s! SDL Error: %s\n", filename, SDL_GetError());
        }

        SDL_FreeSurface(images[i]);
    }
}

void Game::handleEvents() {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        switch (event.type) {
        case SDL_QUIT:
            SDL_Quit();
            break;

        case SDL_KEYDOWN:
            if (event.key.keysym.sym == SDLK_ESCAPE) {
                SDL_Quit();
            }
            break;

        case SDL_MOUSEBUTTONDOWN:
            // Handle mouse clicks
            // ...

            break;
        }
    }
}

void Game::render() {
    // Clear the current rendering target with the drawing color
    SDL_RenderClear(renderer);

    // Render the current texture
    SDL_RenderCopy(renderer, textures[currentImage], nullptr, nullptr);

    // Update the screen
    SDL_RenderPresent(renderer);
}

void Game::destroyTextures() {
    for (int i = 0; i < numImages; ++i) {
        SDL_DestroyTexture(textures[i]);
    }

    delete[] images;
    delete[] textures;
}

void Game::run() {
    bool isRunning = true;
    SDL_Event event;

    while (isRunning) {
        handleEvents();
        render();
    }

    destroyTextures();
}
