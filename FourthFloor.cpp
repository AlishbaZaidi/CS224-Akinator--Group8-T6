#include "FourthFloor.hpp"

bool FourthFloor :: blueTheme(Game& game){
    //std::cout << "Is the theme of location you're thinking blue?" << "\n";
    //std::cin >> option;
    game.loadImage("Qtidal.png");  // Load the question image
        game.render();

        SDL_Event e;
        while (true) {
            while (SDL_PollEvent(&e) != 0) {
                if (e.type == SDL_QUIT) {
                    exit(0);
                } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                    int x, y;
                    SDL_GetMouseState(&x, &y);
                    if (x >= 135 && x <= 323 && y >= 470 && y <= 529) { // YES coordinates
                        return true;
                    } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // NO coordinates
                        return false;
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

bool FourthFloor :: hangOut(Game& game){
    //std::cout << "Is the location you're thinking a good option for hangout and stuff?" << "\n";
    //std::cin >> option;
    game.loadImage("Qtrunk.png");  // Load the question image
        game.render();

        SDL_Event e;
        while (true) {
            while (SDL_PollEvent(&e) != 0) {
                if (e.type == SDL_QUIT) {
                    exit(0);
                } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                    int x, y;
                    SDL_GetMouseState(&x, &y);
                    if (x >= 135 && x <= 323 && y >= 470 && y <= 529) { // YES coordinates
                        return true;
                    } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // NO coordinates
                        return false;
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

bool FourthFloor :: openArea(Game& game){
    //std::cout << "Is the location you're thinking of at open area??" << "\n";
    //std::cin >> option;

    game.loadImage("Qskydhaba.png");  // Load the question image
        game.render();

        SDL_Event e;
        while (true) {
            while (SDL_PollEvent(&e) != 0) {
                if (e.type == SDL_QUIT) {
                    exit(0);
                } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                    int x, y;
                    SDL_GetMouseState(&x, &y);
                    if (x >= 135 && x <= 323 && y >= 470 && y <= 529) { // YES coordinates
                        return true;
                    } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // NO coordinates
                        return false;
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

bool FourthFloor :: cafe(Game& game){
    //std::cout << "Are you thinking of a place where you get healthy drinks?" << "\n";
    //std::cin >> option;
    game.loadImage("Qgrito.png");  // Load the question image
    game.render();

        SDL_Event e;
        while (true) {
            while (SDL_PollEvent(&e) != 0) {
                if (e.type == SDL_QUIT) {
                    exit(0);
                } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                    int x, y;
                    SDL_GetMouseState(&x, &y);
                    if (x >= 135 && x <= 323 && y >= 470 && y <= 529) { // YES coordinates
                        return true;
                    } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // NO coordinates
                        return false;
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

void FourthFloor :: questionOrder()
{
    Game game;
    bool blue = blueTheme(game);
    if(blue){
        game.displayOutcome("TidalPool.png");
        std::cout<<"You're thinking of Tidal Pool";
    }
    else{
        bool drinks = cafe(game);
        if(drinks){
            game.displayOutcome("Grito.png");
            std::cout<<"You are thinking of Grito";
        }
        else{
            int num1 = NewRandomNumGenerator(2);
            if(num1){
                bool open = openArea(game);
                if(open){
                    game.displayOutcome("SkyDhaba.png");
                    std::cout<<"you are thinking of Sky Dhaba";
                }
                else{
                    game.displayOutcome("Trunk.png");
                    std::cout<<"You are thinking of Trunk";
                }
            }
            else{
                bool hang = hangOut(game);
                if(hang){
                    game.displayOutcome("Trunk.png");
                    std::cout<<"You are thinking of Trunk";
                }
                else{
                    game.displayOutcome("SkyDhaba.png");
                    std::cout<<"you are thinking of Sky Dhaba";
                }
            }
        }
    }
}
