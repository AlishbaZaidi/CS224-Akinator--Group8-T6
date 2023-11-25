// Include the SDL image library
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <stdio.h>
#include <iostream>

int main(int argv, char** args)
{
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_Window *window = SDL_CreateWindow("HU-Quest", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
    // Load the images
    SDL_Surface* images[10];
    SDL_Texture* textures[10];
    for (int i = 0; i < 10; ++i) {
        char filename[10];
        sprintf(filename, "%d.png", i + 1);
        images[i] = IMG_Load(filename);
        if (images[i] == NULL) {
            printf("Unable to load image %s! SDL_image Error: %s\n", filename, IMG_GetError());
        }
        textures[i] = SDL_CreateTextureFromSurface(renderer, images[i]);
        if (textures[i] == NULL) {
            printf("Unable to create texture from image %s! SDL Error: %s\n", filename, SDL_GetError());
        }
        SDL_FreeSurface(images[i]);
    }

    // Start with the first image
    int currentImage = 0;

    bool isRunning = true;
    SDL_Event event;

    while (isRunning)
    {
        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
            case SDL_QUIT:
                isRunning = false;
                break;

            case SDL_KEYDOWN:
                if (event.key.keysym.sym == SDLK_ESCAPE)
                {
                    isRunning = false;
                }
                break;

            case SDL_MOUSEBUTTONDOWN:
                // Print the coordinates of the mouse click
                std::cout << "Mouse clicked at (" << event.button.x << ", " << event.button.y << ")" << std::endl;

                // Check if the click is within the coordinates of the "No" box
                if (currentImage > 0 && currentImage < 6 && 
                    (event.button.x >= 457 && event.button.x <= 646) && 
                    (event.button.y >= 470 && event.button.y <= 529)) 
                {
                    // On "No" box click, switch to the next image
                    if (currentImage < 9) {
                        ++currentImage;
                    }
                } else if (currentImage == 0) {
                    // On the first image, any click switches to the second image
                    ++currentImage;
                } else if ((currentImage == 6 || currentImage == 7 || currentImage == 8) && 
                           (event.button.x >= 135 && event.button.x <= 323) && 
                           (event.button.y >= 470 && event.button.y <= 529)) 
                {
                    // On "Yes" box click on the 7th, 8th or 9th image, switch to the next image
                    if (currentImage < 9) {
                        ++currentImage;
                    }
                }
                break;
            }
        }

        // Clear the current rendering target with the drawing color
        SDL_RenderClear(renderer);

        // Render the current texture
        SDL_RenderCopy(renderer, textures[currentImage], NULL, NULL);

        // Update the screen
        SDL_RenderPresent(renderer);
    }

    // Destroy the textures
    for (int i = 0; i < 10; ++i) {
        SDL_DestroyTexture(textures[i]);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
