#include "game.hpp"  // Include the header file for the Game class

// Constructor definition for the Game class
Game::Game() : window(nullptr), renderer(nullptr), currentTexture(nullptr), running(true), userWantsMusic(false) {
    initSDL();  // Initialize SDL upon creating a Game instance
}

// Destructor definition for the Game class
Game::~Game() 
{
    closeSDL(); // Clean up SDL using the closeSDL function
}

// Function to initialize SDL and related libraries
void Game::initSDL() {
    // Initialize SDL_mixer for audio
    if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0) {
        std::cerr << "SDL_mixer could not initialize! SDL_mixer Error: " << Mix_GetError() << std::endl;
    }

    // Initialize SDL for video
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL could not initialize! SDL Error: " << SDL_GetError() << std::endl;
        return; // Early return in case of initialization failure
    }

    // Create an SDL window
    window = SDL_CreateWindow("HU-Quest", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 800, 600, SDL_WINDOW_SHOWN);
    if (!window) {
        std::cerr << "Window could not be created! SDL Error: " << SDL_GetError() << std::endl;
        SDL_Quit(); // Clean up SDL in case of window creation failure
        return; // Early return in case of failure
    }

    // Create an SDL renderer
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        std::cerr << "Renderer could not be created! SDL Error: " << SDL_GetError() << std::endl;
        SDL_DestroyWindow(window); // Clean up the window
        SDL_Quit(); // Clean up SDL
        return; // Early return in case of failure
    }

    // Initialize SDL_image for handling PNG images
    if (!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG)) {
        std::cerr << "SDL_image could not initialize! SDL_image Error: " << IMG_GetError() << std::endl;
        SDL_DestroyRenderer(renderer); // Clean up the renderer
        SDL_DestroyWindow(window); // Clean up the window
        SDL_Quit(); // Clean up SDL
        return; // Early return in case of failure
    }
}

// Function to close and clean up SDL
void Game::closeSDL() {
    if (currentTexture) {
        SDL_DestroyTexture(currentTexture); // Destroy the current texture if it exists
    }

    SDL_DestroyRenderer(renderer); // Destroy the renderer
    SDL_DestroyWindow(window); // Destroy the window
    IMG_Quit(); // Quit SDL_image
    SDL_Quit(); // Quit SDL
}

// Function to load an image as a texture
void Game::loadImage(const std::string& imagePath) {
    SDL_Surface* loadedSurface = IMG_Load(imagePath.c_str()); // Load the image as a surface
    if (!loadedSurface) {
        std::cerr << "Unable to load image " << imagePath << "! SDL_image Error: " << IMG_GetError() << std::endl;
        return; // Early return in case of loading failure
    } else {
        SDL_Texture* newTexture = SDL_CreateTextureFromSurface(renderer, loadedSurface); // Create a texture from the surface
        if (!newTexture) {
            std::cerr << "Unable to create texture from " << imagePath << "! SDL Error: " << SDL_GetError() << std::endl;
            SDL_FreeSurface(loadedSurface); // Free the loaded surface
            return; // Early return in case of texture creation failure
        }

        // Replace the current texture with the new texture
        if (currentTexture) {
            SDL_DestroyTexture(currentTexture); // Destroy the old texture if it exists
        }
        currentTexture = newTexture; // Set the new texture as the current texture

        SDL_FreeSurface(loadedSurface); // Free the loaded surface
    }
}

// Function to render the current texture
void Game::render() {
    SDL_RenderClear(renderer); // Clear the current rendering target
    if (currentTexture) {
        SDL_RenderCopy(renderer, currentTexture, NULL, NULL); // Copy the texture to the rendering target
    }
    SDL_RenderPresent(renderer); // Update the screen with rendering performed
}

// Function to render the initial screen of the game
void Game::renderInitialScreen()
{
    loadImage("Screens/Start.png"); // Load the start screen image
    render(); // Render the start screen
}

// Function to handle SDL events
void Game::handleEvents() {
    SDL_Event e; // Event variable
    while (SDL_PollEvent(&e) != 0) { // Poll for pending events
        if (e.type == SDL_QUIT) { // Check for quit event
            running = false; // Set the running flag to false
        }
    }
}

// Function to check if the game is still running
bool Game::isRunning() const {
    return running; // Return the running state
}

// Function to run the game loop
void Game::run()
{
    renderInitialScreen(); // Render the initial screen

    bool king = promptMusicChoice(); // Prompt the user for music choice
    
    if (king) {
        startMusic(); // Start music if the user chooses
    }

    bool clicked = false; // Flag to check if the user has clicked
    SDL_Event e; // Event variable
    while (!clicked)
    {
        while(SDL_PollEvent(&e) != 0)
        {
            if(e.type == SDL_QUIT)
            {
                running = false; // Set the running flag to false
                return; // Exit the function
            }else if(e.type == SDL_MOUSEBUTTONDOWN)
            {
                clicked = true; // Set the clicked flag to true
            }
        }
    }
}

// Function to display the outcome of the game
void Game::displayOutcome(const std::string& outcomeImage) {
    loadImage(outcomeImage); // Load the outcome image
    render(); // Render the outcome image
    if (userWantsMusic) {
        MusicManager& MG = MusicManager::getInstance();
        MG.playMusic("Outro.mp3"); // Play outro music if user wants music
    }
    SDL_Delay(5000); // Delay for 5 seconds to display the outcome
}

// Function to prompt the user for a music choice
bool Game::promptMusicChoice() {
    // Create a new window for the music choice prompt
    SDL_Window* choiceWindow = SDL_CreateWindow("Music Choice", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 200, 200, SDL_WINDOW_SHOWN);
    // Create a renderer for the choice window
    SDL_Renderer* choiceRenderer = SDL_CreateRenderer(choiceWindow, -1, SDL_RENDERER_ACCELERATED);
    // Load the popup image
    SDL_Surface* loadedSurface = IMG_Load("Screens/Popup.png");
    // Create a texture from the loaded surface
    SDL_Texture* popupTexture = SDL_CreateTextureFromSurface(choiceRenderer, loadedSurface);
    // Free the loaded surface
    SDL_FreeSurface(loadedSurface);

    bool choiceMade = false; // Flag to indicate if a choice has been made
    SDL_Event e; // Event variable

    while (!choiceMade) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                exit(0); // Exit the program if quit event is detected
            } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                int x, y; // Variables to store mouse coordinates
                SDL_GetMouseState(&x, &y); // Get the current mouse state
                // Check if the YES button coordinates are clicked
                if (x >= 107 && x <= 167 && y >= 68 && y <= 131) {
                    userWantsMusic = true; // Set the music preference to true
                    choiceMade = true; // Set the choice made flag to true
                } else if (x >= 30 && x <= 90 && y >= 68 && y <= 131) { // Check if the NO button coordinates are clicked
                    userWantsMusic = false; // Set the music preference to false
                    stopMusic(); // Stop music if playing
                    choiceMade = true; // Set the choice made flag to true
                }
            }
        }
        SDL_RenderClear(choiceRenderer); // Clear the renderer
        SDL_RenderCopy(choiceRenderer, popupTexture, NULL, NULL); // Copy the texture to the renderer
        SDL_RenderPresent(choiceRenderer); // Present the renderer
    }

    // Clean up the texture, renderer, and window
    SDL_DestroyTexture(popupTexture);
    SDL_DestroyRenderer(choiceRenderer);
    SDL_DestroyWindow(choiceWindow);

    return userWantsMusic; // Return the user's music preference
}

// Function to start playing music
void Game::startMusic() {
    if (userWantsMusic) {
        MusicManager::getInstance().playMusic("Music.mp3");  // playing music
    }
}

// Overloaded function
void Game::startMusic(std::string filename) {
    if (userWantsMusic) {
        const char* filenameCStr = filename.c_str();
        MusicManager::getInstance().playMusic(filenameCStr);  // playing music specified by filename
    }
}

void Game::stopMusic() {
    MusicManager::getInstance().stopMusic(); // stopping music
}