#include <string>
#include <iostream>
#include "Students.hpp"

bool Students::genderM(Game& game) {
    // Display the image and handle user input for gender
    game.loadImage("Qmale.png");
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
    game.loadImage("Qbirthmonth.png");
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
    game.loadImage("Qoutstation.png");
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
    game.loadImage("QMinitial.png");
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
    game.loadImage("QAhss.png");
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
    game.loadImage("QCE.png");
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
    game.loadImage("QEE.png");
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
    game.loadImage("QAqua.png");
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
    game.loadImage("QCalcrepeat.png");
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
                    game.displayOutcome("Ashar.png");
                    std::cout << "Leutinent Ashar Abbasi Pakistan Navy";
                } else {
                    game.displayOutcome("Bilal.png");
                    std::cout << "Bilal Ahmed Soomro - Wadero of Khairpur";
                }
            } else {
                game.displayOutcome("Mubashir.png");
                std::cout << "Mubashir Anees Soomro - Shikarpur waro";
            }
        } else {
            bool nov = birthdayMonth(game);
            if (nov) {
                game.displayOutcome("Shaaf.png");
                std::cout << "Shaaf Farooq - The only King at Habib";
            } else {
                game.displayOutcome("Huzaifa.png");
                std::cout << "Huzaifa Ahmed Khan - Real Chad";
            }
        }
    } else {
        bool ahss = school(game);
        if (ahss) {
            game.displayOutcome("Saba.png");
            std::cout << "Saba Nisar Soomro - Queen of Larkana";
        } else {
            bool ee = majorEE(game);
            if (ee) {
                game.displayOutcome("Mysha.png");
                std::cout << "Mysha Zulfiqar - Female Andrew Tate";
            } else {
                bool star = bdayStar(game);
                if (star) {
                    game.displayOutcome("Sajal.png");
                    std::cout << "Sajal Fatima - The Model of Habib";
                } else {
                    game.displayOutcome("Alishba.png");
                    std::cout << "The one & only Syeda Alishba Zaidi";
                }
            }
        }
    }
}