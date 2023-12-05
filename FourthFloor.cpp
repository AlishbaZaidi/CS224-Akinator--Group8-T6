#include "FourthFloor.hpp"

// Function to inquire if the theme of the location is blue
bool FourthFloor::blueTheme(Game& game) {
    game.loadImage("Screens/Qtidal.png");  // Load the question image
    game.render();

    SDL_Event e;
    while (true) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                exit(0);
            } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                int x, y;
                SDL_GetMouseState(&x, &y);
                // Check for YES coordinates
                if (x >= 135 && x <= 323 && y >= 470 && y <= 529) {
                    return true;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) {
                    // Check for NO coordinates
                    return false;
                }
            }
        }
    }

    if (option == "yes") {
        return true;
    } else {
        return false;
    }
}

// Function to inquire if the location is a good option for hangout
bool FourthFloor::hangOut(Game& game) {
    game.loadImage("Screens/Qtrunk.png");  // Load the question image
    game.render();

    SDL_Event e;
    while (true) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                exit(0);
            } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                int x, y;
                SDL_GetMouseState(&x, &y);
                // Check for YES coordinates
                if (x >= 135 && x <= 323 && y >= 470 && y <= 529) {
                    return true;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) {
                    // Check for NO coordinates
                    return false;
                }
            }
        }
    }

    if (option == "yes") {
        return true;
    } else {
        return false;
    }
}

// Function to inquire if the location is in an open area
bool FourthFloor::openArea(Game& game) {
    game.loadImage("Screens/Qskydhaba.png");  // Load the question image
    game.render();

    SDL_Event e;
    while (true) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                exit(0);
            } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                int x, y;
                SDL_GetMouseState(&x, &y);
                // Check for YES coordinates
                if (x >= 135 && x <= 323 && y >= 470 && y <= 529) {
                    return true;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) {
                    // Check for NO coordinates
                    return false;
                }
            }
        }
    }
    if (option == "yes") {
        return true;
    } else {
        return false;
    }
}

// Function to inquire if the location is a cafe with healthy drinks
bool FourthFloor::cafe(Game& game) {
    game.loadImage("Screens/Qgrito.png");  // Load the question image
    game.render();

    SDL_Event e;
    while (true) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                exit(0);
            } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                int x, y;
                SDL_GetMouseState(&x, &y);
                // Check for YES coordinates
                if (x >= 135 && x <= 323 && y >= 470 && y <= 529) {
                    return true;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) {
                    // Check for NO coordinates
                    return false;
                }
            }
        }
    }


    if (option == "yes") {
        return true;
    } else {
        return false;
    }
}

// Function to determine the order of questions and display outcomes
void FourthFloor::questionOrder() {
    Game& game = Game::getInstance();
    bool blue = blueTheme(game);
    if (blue) {
        game.displayOutcome("Screens/TidalPool.png"); // Display outcome for Tidal Pool
        std::cout << "You're thinking of Tidal Pool";
    } else {
        bool drinks = cafe(game);
        if (drinks) {
            game.displayOutcome("Screens/Grito.png"); // Display outcome for Grito
            std::cout << "You are thinking of Grito";
        } else {
            int num1 = NewRandomNumGenerator(2);
            if (num1) {
                bool open = openArea(game);
                if (open) {
                    game.displayOutcome("Screens/SkyDhaba.png"); // Display outcome for SkyDhaba
                    std::cout << "You are thinking of Sky Dhaba";
                } else {
                    game.displayOutcome("Screens/Trunk.png"); // Display outcome for Trunk
                    std::cout << "You are thinking of Trunk";
                }
            } else {
                bool hang = hangOut(game);
                if (hang) {
                    game.displayOutcome("Screens/Trunk.png"); // Display outcome for Trunk
                    std::cout << "You are thinking of Trunk";
                } else {
                    game.displayOutcome("Screens/SkyDhaba.png"); // Display outcome for SkyDhaba
                    std::cout << "You are thinking of Sky Dhaba";
                }
            }
        }
    }
}
