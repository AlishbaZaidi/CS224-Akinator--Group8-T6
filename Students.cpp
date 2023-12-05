#include <string>
#include <iostream>
#include "Students.hpp"

bool Students::genderM(Game& game) {
    // Display the image and handle user input for gender
    game.loadImage("Screens/Qmale.png");
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
                    SDL_Delay(100);
                    break;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // NO coordinates
                    option = "no";
                    SDL_Delay(100);
                    break;
                }
            }
        }
    }

    // Return true if the person is male, false otherwise
    return (option == "yes");
}

bool Students::birthdayMonth(Game& game) {
    // Display the image and handle user input for birthday month
    game.loadImage("Screens/Qbirthmonth.png");
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
                    SDL_Delay(100);
                    break;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // NO coordinates
                    option = "no";
                    SDL_Delay(100);
                    break;
                }
            }
        }
    }

    // Return true if the birthday is in November, false otherwise
    return (option == "yes");
}

bool Students::outstation(Game& game) {
    // Display the image and handle user input for outstation status
    game.loadImage("Screens/Qoutstation.png");
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
                    SDL_Delay(100);
                    break;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // NO coordinates
                    option = "no";
                    SDL_Delay(100);
                    break;
                }
            }
        }
    }

    // Return true if the person is outstation, false otherwise
    return (option == "yes");
}

bool Students::initialM(Game& game) {
    // Display the image and handle user input for the initial 'M'
    game.loadImage("Screens/QMinitial.png");
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
                    SDL_Delay(100);
                    break;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // NO coordinates
                    option = "no";
                    SDL_Delay(100);
                    break;
                }
            }
        }
    }

    // Return true if the initial is 'M', false otherwise
    return (option == "yes");
}

bool Students::school(Game& game) {
    // Display the image and handle user input for school affiliation
    game.loadImage("Screens/QAhss.png");
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
                    SDL_Delay(100);
                    break;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // NO coordinates
                    option = "no";
                    SDL_Delay(100);
                    break;
                }
            }
        }
    }

    // Return true if the person belongs to AHSS, false otherwise
    return (option == "yes");
}

bool Students::majorCS(Game& game) {
    // Display the image and handle user input for majoring in Computer Science
    game.loadImage("Screens/QCE.png");
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
                    SDL_Delay(100);
                    break;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // NO coordinates
                    option = "no";
                    SDL_Delay(100);
                    break;
                }
            }
        }
    }

    // Return true if the person is majoring in Computer Science, false otherwise
    return (option == "yes");
}

bool Students::majorEE(Game& game) {
    // Display the image and handle user input for majoring in Electrical Engineering
    game.loadImage("Screens/QEE.png");
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
                    SDL_Delay(100);
                    break;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // NO coordinates
                    option = "no";
                    SDL_Delay(100);
                    break;
                }
            }
        }
    }

    // Return true if the person is majoring in Electrical Engineering, false otherwise
    return (option == "yes");
}

bool Students::bdayStar(Game& game) {
    // Display the image and handle user input for being born under the star sign Aquarius
    game.loadImage("Screens/QAqua.png");
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
                    SDL_Delay(100);
                    break;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // NO coordinates
                    option = "no";
                    SDL_Delay(100);
                    break;
                }
            }
        }
    }

    // Return true if the person is born under the star sign Aquarius, false otherwise
    return (option == "yes");
}

bool Students::calculusRepeat(Game& game) {
    // Display the image and handle user input for repeating calculus
    game.loadImage("Screens/QCalcrepeat.png");
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
                    SDL_Delay(100);
                    break;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // NO coordinates
                    option = "no";
                    SDL_Delay(100);
                    break;
                }
            }
        }
    }

    // Return true if the person is repeating calculus, false otherwise
    return (option == "yes");
}

void Students::questionOrder() {
    // Get the singleton instance of the game
    Game& game = Game::getInstance();

    // Ask a series of questions based on the order defined
    bool male = genderM(game);
    if (male) {
        bool out = outstation(game);
        if (out) {
            bool cs = majorCS(game);
            if (cs) {
                bool calc = calculusRepeat(game);
                if (calc) {
                    game.displayOutcome("Screens/Ashar.png");
                    std::cout << "Leutinent Ashar Abbasi - Pakistan Navy";
                } else {
                    game.displayOutcome("Screens/Bilal.png");
                    std::cout << "Bilal Ahmed Soomro - Wadero of Khairpur";
                }
            } else {
                game.displayOutcome("Screens/Mubashir.png");
                std::cout << "Mubashir Anees Soomro - Shikarpur waro";
            }
        } else {
            bool nov = birthdayMonth(game);
            if (nov) {
                game.displayOutcome("Screens/Shaaf.png");
                std::cout << "Shaaf Farooq - The only King at Habib";
            } else {
                game.displayOutcome("Screens/Huzaifa.png");
                std::cout << "Huzaifa Ahmed Khan - CE ki Jaan";
            }
        }
    } else {
        bool ahss = school(game);
        if (ahss) {
            game.displayOutcome("Screens/Saba.png");
            std::cout << "Saba Nisar Soomro - Waderi of Larkana";
        } else {
            bool ee = majorEE(game);
            if (ee) {
                game.displayOutcome("Screens/Mysha.png");
                std::cout << "Mysha Zulfiqar - Female Andrew Tate";
            } else {
                bool star = bdayStar(game);
                if (star) {
                    game.displayOutcome("Screens/Sajal.png");
                    std::cout << "Sajal Fatima - The Model";
                } else {
                    game.displayOutcome("Screens/Alishba.png");
                    std::cout << "Syeda Alishba Zaidi - The Queen";
                }
            }
        }
    }
}