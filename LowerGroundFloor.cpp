#include <string>
#include <iostream>
#include "LowerGroundFloor.hpp"

bool LowerGroundFloor::eastDirection(Game& game) 
    {
        // std::cout << "Is the location you are thinking in East?" << "\n";
        // std::cin >> option;
        game.loadImage("QEast.png");
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
    }

bool LowerGroundFloor::centralDirection(Game& game) 
    {
        // std::cout << "Is the location you are thinking a central location?" << "\n";
        // std::cin >> option;
        game.loadImage("QCentral.png");
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
    }

bool LowerGroundFloor::maleRestricted(Game& game)
{
        // std::cout << "Is the location you are thinking restricted for males?" << "\n";
        // std::cin >> option;
        game.loadImage("QRestricted.png");
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
    }

bool LowerGroundFloor::cockroach(Game& game)
{
        // std::cout << "Are cockroaches and lizards found at your desired location?" << "\n";
        // std::cin >> option;
        game.loadImage("QCockroaches.png");
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
    }

bool LowerGroundFloor::groupStudy(Game& game)
{
        // std::cout << "Is that place an isolated learning spot?" << "\n";
        // std::cin >> option;
        game.loadImage("QIsolated.png");
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
    }

bool LowerGroundFloor::famousName(Game& game)
{
        // std::cout << "Is the location you're thinking of named after a famous personality?" << "\n";
        // std::cin >> option;
        game.loadImage("QFamousPerson.png");
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
    }

bool LowerGroundFloor::openArea(Game& game)
{
        // std::cout << "Is the location you're of at open area?" << "\n";
        // std::cin >> option;
        game.loadImage("QOpenArea.png");
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
    }

bool LowerGroundFloor::events(Game& game)
{
        // std::cout << "Do events take place at your desired location?" << "\n";
        // std::cin >> option;
        game.loadImage("QEvents.png");
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
    }

bool LowerGroundFloor::stage(Game& game)
{
        // std::cout << "Can a stage be found on your location?" << "\n";
        // std::cin >> option;
        game.loadImage("QStage.png");
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
    }

void LowerGroundFloor::questionOrder()
{
    Game& game = Game::getInstance();
    bool east = eastDirection(game);
    if(east){
        bool music = famousName(game);
        if(music){
            game.displayOutcome("Music.png");
            std::cout<<"WOO_HOO!!! Your desired location is Music Room";
        }
        else{
            bool cockroaches = cockroach(game);
            if(cockroaches){
                game.displayOutcome("Tapal.png");
                std::cout<<"WOO-HOO!! You're thinking of Tapal Cafeteria";
            }
            else{
                bool dhaba = openArea(game);
                if(dhaba){
                    game.displayOutcome("Dhaba.png");
                    std::cout<<"Dhaba souch rahey hou na hehe";
                }
                else{
                    game.displayOutcome("Dukaan.png");
                    std::cout<<"Easy hougaya bhai! Aap tou Dukaan ki baat kar rahey!";
                }
            }
        }
    }
    else{
        bool central = centralDirection(game);
        if(central){
            bool eventPlace = events(game);
            if(eventPlace){
                bool stages = stage(game);
                if(stages){
                    game.displayOutcome("Amphi.png");
                    std::cout<<"WOO-HOO!! You're thinking of Amphitheatre";
                }
                else{
                    game.displayOutcome("Courts.png");
                    std::cout<<"WOO-HOO!! You're thinking of Courts";
                }
            }
            else{
                game.displayOutcome("Gym.png");
                std::cout<<"WOO-HOO! It's Gym";
            }
        }
        else{
            bool fLounge = maleRestricted(game);
            if(fLounge){
                game.displayOutcome("FemaleLounge.png");
                std::cout<<"WOO-HOO! Khawateen Lounge";
            }
            else{
                bool study = groupStudy(game);
                if(study){
                    game.displayOutcome("Learn.png");
                    std::cout<<"WOO-HOO!! You're thinking of Learn Courtyard";
                }
                else{
                    game.displayOutcome("ParkingArea.png");
                    std::cout<<"WOO-HOO!! You're thinking of the Parking areas";
                }
            }
        }
    }
}