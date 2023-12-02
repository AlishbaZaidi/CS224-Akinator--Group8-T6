#include <string>
#include <iostream>
#include "SecondFloor.hpp"
// #include "game.hpp"

// SecondFloor() = default;

bool SecondFloor :: northDirection(Game& game){
    //std::cout << "Is the location you are thinking in North?" << "\n";
    //std::cin >> option;
    game.loadImage("QNorth.png");
    game.render();

    SDL_Event e;
    while (true) 
    {
        if (SDL_PollEvent(&e) != 0) 
        {
            if (e.type == SDL_QUIT) 
            {
                exit(0);
            } else if (e.type == SDL_MOUSEBUTTONDOWN) 
            {
                int x, y;
                SDL_GetMouseState(&x, &y);
                if (x >= 135 && x <= 323 && y >= 470 && y <= 529) 
                { // YES coordinates
                    option = "yes";
                    break;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) 
                { // NO coordinates
                    option = "no";
                    break;
                }
            }
        }
    }
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
};

bool SecondFloor :: leadersPlace(Game& game){
    //std::cout << "Is this area primarily used for high-level executive decision-making?" << "\n";
    //std::cin >> option;
    game.loadImage("QPresident.png");
    game.render();

    SDL_Event e;
    while (true) 
    {
        if (SDL_PollEvent(&e) != 0) 
        {
            if (e.type == SDL_QUIT) 
            {
                exit(0);
            } else if (e.type == SDL_MOUSEBUTTONDOWN) 
            {
                int x, y;
                SDL_GetMouseState(&x, &y);
                if (x >= 135 && x <= 323 && y >= 470 && y <= 529) 
                { // YES coordinates
                    option = "yes";
                    break;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) 
                { // NO coordinates
                    option = "no";
                    break;
                }
            }
        }
    }
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
};

bool SecondFloor :: marketingPlace(Game& game){
    //std::cout << "Is this area dedicated to marketing, communication, and information technology operations?" << "\n";
    //std::cin >> option;
    game.loadImage("QMarkcomm.png");
    game.render();
    SDL_Event e;
    while (true) 
    {
        if (SDL_PollEvent(&e) != 0) 
        {
            if (e.type == SDL_QUIT) 
            {
                exit(0);
            } else if (e.type == SDL_MOUSEBUTTONDOWN) 
            {
                int x, y;
                SDL_GetMouseState(&x, &y);
                if (x >= 135 && x <= 323 && y >= 470 && y <= 529) 
                { // YES coordinates
                    option = "yes";
                    break;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) 
                { // NO coordinates
                    option = "no";
                    break;
                }
            }
        }
    }
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
};

bool SecondFloor :: collabPlace(Game& game){
    //std::cout << "Is this area designed for creative collaboration and innovative thinking?" << "\n";
    //std::cin >> option;

    game.loadImage("Qplay.png");
    game.render();
    SDL_Event e;
    while (true) 
    {
        if (SDL_PollEvent(&e) != 0) 
        {
            if (e.type == SDL_QUIT) 
            {
                exit(0);
            } else if (e.type == SDL_MOUSEBUTTONDOWN) 
            {
                int x, y;
                SDL_GetMouseState(&x, &y);
                if (x >= 135 && x <= 323 && y >= 470 && y <= 529) 
                { // YES coordinates
                    option = "yes";
                    break;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) 
                { // NO coordinates
                    option = "no";
                    break;
                }
            }
        }
    }


        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
};

void SecondFloor :: questionOrder(){
    Game& game = Game::getInstance();
    bool north = northDirection(game);
    if(north){
        bool pod = leadersPlace(game);
        if(pod){
            game.displayOutcome("President.png");
            std::cout<<"President Pod it is!";
        }
        else{
            int num1 = NewRandomNumGenerator(2);
            if(num1 == 1){
                bool collab = collabPlace(game);
                if(collab){
                    game.displayOutcome("Playground.png");
                    std::cout<<"WOHOOOO!!! It's Playground";
                } 
                else{
                    game.displayOutcome("Markcomm.png");
                    std::cout<<"It seems like it's Marcomm/IT Dept";
                }
            }
            else{
                bool market = marketingPlace(game);
                if(market){
                     game.displayOutcome("Markcomm.png");
                    std::cout<<"It seems like it's Marcomm/IT Dept";
                }
                else{
                    game.displayOutcome("Playground.png");
                    std::cout<<"WOHOOOO!!! It's Playground";
                }
            }
        }
    }
    else{
        game.displayOutcome("SFCL.png");
        std::cout<<"WOOHOOOOO!!! You are thinking of SFCL";
    }
};