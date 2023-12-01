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
                        break;
                    } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // NO coordinates
                        option = "no";
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
                        break;
                    } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // NO coordinates
                        option = "no";
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
                        break;
                    } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // NO coordinates
                        option = "no";
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
                        break;
                    } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // NO coordinates
                        option = "no";
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

void Locations::ourFloor()
    {
        Game game;
        bool returntype = false;
        int arr[4] = {0, 0, 0, 0};
        while (!returntype)
        {
            int number = NewRandomNumGenerator(4);
            while (newisInArray(number, arr, 4))
            {
                number = NewRandomNumGenerator(4);
            }
            for (int i = 0; i < 4; i++)
            {
                if (arr[i] == 0)
                {
                    arr[i] = number;
                    break; 
                }
            }
            if (number == 1)
            {
                returntype = this->Ground(game);
            }
            else if (number == 2)
            {
                returntype = this->LowerGround(game);
            }
            else if (number == 3)
            {
                returntype = this->First(game);
            }
            else if (number == 4)
            {
                returntype = this->Second(game);
            }
            else
            {
                // newmade = true;
                // returntype = newmade;
                std::cout<<"Wohooo! Your location is Horizon";
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
        else
        {
            floor = "Fourth Floor";
        }
    }
