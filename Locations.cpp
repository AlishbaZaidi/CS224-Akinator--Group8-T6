#include<string>
#include <iostream>
#include "Locations.hpp"
// #include"Extras.cpp"
// #include"main.cpp"
// #include <ctime>
// Locations::Locations(){}

bool Locations::Ground(Game& game) 
    {
        // std::cout << "Is there reception on this floor?" << "\n";
        // std::cin >> option;
        game.loadImage("QGround.png");
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
            reception = true;
            return true;
        }
        else
        {
            return false;
        }
    }
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
    Game& game = Game::getInstance();
    bool returntype = false;
    int arr[5] = {0, 0, 0, 0, 0};
    int noCounter = 0; // Counter for 'No' responses

    while (!returntype)
    {
        int number = NewRandomNumGenerator(5);
        while (newisInArray(number, arr, 5))
        {
            number = NewRandomNumGenerator(5);
        }
        for (int i = 0; i < 5; i++) // corrected loop condition
        {
            if (arr[i] == 0)
            {
                arr[i] = number;
                break; 
            }
        }
        bool response = false;
        if (number == 1)
        {
            response = this->Ground(game);
        }
        else if (number == 2)
        {
            response = this->LowerGround(game);
        }
        else if (number == 3)
        {
            response = this->First(game);
        }
        else if (number == 4)
        {
            response = this->Second(game);
        }
        else if (number == 5)
        {
            response = this->Fourth(game);
        }

        if (!response)
        {
            noCounter++;
            if (noCounter >= 5) // Check if all responses are 'No'
            {
                // Option 1: Close the game
                // game.closeSDL();
                // break;

                // Option 2: Display an outcome screen and close after a delay
                game.loadImage("OutcomeScreen.png"); // Load your outcome screen image
                game.render();
                SDL_Delay(3000); // Wait for 3 seconds
                game.closeSDL();
                break;
            }
        }
    }
}


void Locations::updateFloor()
    {
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