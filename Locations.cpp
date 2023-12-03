#include<string>
#include <iostream>
#include "Locations.hpp"
// #include"Extras.cpp"
// #include"main.cpp"
// #include <ctime>
// Locations::Locations(){}

// Define the Ground function for the Locations class, taking a Game reference as a parameter.
bool Locations::Ground(Game& game) 
{
    // Load an image named 'QGround.png' and render it using the Game instance.
    game.loadImage("QGround.png");
    game.render();

    SDL_Event e;
    // Start an infinite loop to handle SDL events.
    while (true) {
        // Check if there are any pending SDL events.
        if (SDL_PollEvent(&e) != 0) {
            // If the user closes the window, exit the program.
            if (e.type == SDL_QUIT) {
                exit(0);
            // If there's a mouse button press, handle it.
            } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                int x, y;
                // Get the mouse coordinates when the button was pressed.
                SDL_GetMouseState(&x, &y);
                // Check if the coordinates are within the 'YES' button area.
                if (x >= 135 && x <= 323 && y >= 470 && y <= 529) {
                    option = "yes";
                    SDL_Delay(500); // Wait for 500 milliseconds.
                    break; // Exit the loop.
                // Check if the coordinates are within the 'NO' button area.
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) {
                    option = "no";
                    SDL_Delay(500); // Wait for 500 milliseconds.
                    break; // Exit the loop.
                }
            }
        }
    }
    // Set the reception status based on the user's choice and return the corresponding boolean value.
    if (option == "yes")
    {
        reception = true;
        return true;
    }
    else
    {
        return false;
    }
}

// Similar structure for LowerGround, First, Second, and Fourth methods.
// These methods follow the same logic as Ground, but with different conditions and outcomes.

bool Locations::LowerGround(Game& game)
    {
        // std::cout << "Is there parking on this floor?" << "\n";
        // std::cin >> option;
        game.loadImage("QLowerGround.png");
        game.render();

        SDL_Event e;
        while (true) {
            if (SDL_PollEvent(&e) != 0) {
                if (e.type == SDL_QUIT) {
                    exit(0);
                } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                    int x, y;
                    SDL_GetMouseState(&x, &y);
                    if (x >= 135 && x <= 323 && y >= 470 && y <= 529) { // YES coordinates
                        option = "yes";
                        SDL_Delay(500);
                        break;
                    } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // NO coordinates
                        option = "no";
                        SDL_Delay(500);
                        break;
                    }
                }
            }
        }
            if(option == "yes"){
                park = true;
                return true;
            }
            else
            {
                return false;
            }
        }


bool Locations::First(Game &game) {
        // std::cout << "Is the piano room on the same floor?" << "\n";
        // std::cin >> option;
    game.loadImage("QFirst.png");
    game.render();

    SDL_Event e;
    while (true) {
        if (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                exit(0);
            } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                int x, y;
                SDL_GetMouseState(&x, &y);
                if (x >= 135 && x <= 323 && y >= 470 && y <= 529) { // YES coordinates
                    option = "yes";
                    SDL_Delay(500);
                    break;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // NO coordinates
                    option = "no";
                    SDL_Delay(500);
                    break;
                }
            }
        }
    }


    if (option == "yes")
    {
        piano = true;
        return true;
    }
    else
    {
        return false;
    }
}


bool Locations::Second(Game& game) 
    {
        // std::cout << "Does this floor have two divisions?" << "\n";
        // std::cin >> option;
        game.loadImage("QSecond.png");
        game.render();

        SDL_Event e;
        while (true) {
            if (SDL_PollEvent(&e) != 0) {
                if (e.type == SDL_QUIT) {
                    exit(0);
                } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                    int x, y;
                    SDL_GetMouseState(&x, &y);
                    if (x >= 135 && x <= 323 && y >= 470 && y <= 529) { // YES coordinates
                        option = "yes";
                        SDL_Delay(500);
                        break;
                    } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // NO coordinates
                        option = "no";
                        SDL_Delay(500);
                        break;
                    }
                }
            }
        }
        if (option == "yes")
        {
            divide = true;
            return true;
        }
        else
        {
            return false;
        } 
    }

bool Locations::Fourth(Game& game) 
    {
        // std::cout << "Is this floor newly made?" << "\n";
        // std::cin >> option;
        game.loadImage("QFourth.png");
        game.render();

        SDL_Event e;
        while (true) {
            if (SDL_PollEvent(&e) != 0) {
                if (e.type == SDL_QUIT) {
                    exit(0);
                } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                    int x, y;
                    SDL_GetMouseState(&x, &y);
                    if (x >= 135 && x <= 323 && y >= 470 && y <= 529) { // YES coordinates
                        option = "yes";
                        SDL_Delay(500);
                        break;
                    } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // NO coordinates
                        option = "no";
                        SDL_Delay(500);
                        break;
                    }
                }
            }
        }
        if (option == "yes")
        {
            newmade = true;
            return true;
        }
        else
        {
            return false;
        } 
    }


void Locations::ourFloor()
{
    // Get a reference to the singleton Game instance.
    Game& game = Game::getInstance();
    bool returntype = false;
    // Initialize an array to keep track of visited numbers.
    int arr[5] = {-1, -1, -1, -1, -1};
    int noCounter = 0; // Counter for 'No' responses

    // Continue until a floor is identified.
    while (!returntype)
    {
        // Generate a random number between 1 and 5.
        int number = NewRandomNumGenerator(5);
        // Ensure the generated number is not already in the array.
        while (newisInArray(number, arr, 5))
        {
            number = NewRandomNumGenerator(5);
        }
        // Update the array with the new number.
        for (int i = 0; i < 5; i++) 
        {
            if (arr[i] == -1)
            {
                arr[i] = number;
                break; 
            }
        }
        if (number == 1)
        {
            returntype = this->Ground(game);
            if (!returntype){noCounter++;}
        }
        else if (number == 2)
        {
            returntype = this->LowerGround(game);
            if (!returntype){noCounter++;}
        }
        else if (number == 3)
        {
            returntype = this->First(game);
            if (!returntype){noCounter++;}
        }
        else if (number == 4)
        {
            returntype = this->Second(game);
            if (!returntype){noCounter++;}
        }
        else if (number == 5)
        {
            returntype = this->Fourth(game);
            if (!returntype){noCounter++;}
        }

        if (noCounter >= 5)
        {
            // Option 1: Close the game
            // game.closeSDL();

            // Option 2: Display an outcome screen and close after a delay
            game.stopMusic();
            game.startMusic("SedOutro.mp3");
            game.loadImage("OutcomeScreen.png"); // Load your outcome screen image
            game.render();
            SDL_Delay(7500); // Wait for 3 seconds
            game.closeSDL();
            break;
        }        

    }

    
}



void Locations::updateFloor()
    {
         // Update the floor variable based on the status of different floor attributes.
        if (piano == true)
        {
            floor = "First Floor";
        }
        else if (park == true)
        {
            floor = "Lower Ground Floor";
        }
        else if (reception == true)
        {
            floor = "Ground Floor";
        }
        else if (divide == true)
        {
            floor = "Second Floor";
        }
        else if(newmade == true)
        {
            floor = "Fourth Floor";
        }
    }