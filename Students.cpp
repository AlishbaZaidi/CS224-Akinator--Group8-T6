#include <string>
#include <iostream>
#include "Students.hpp"


bool Students :: genderM(Game& game){
    // std::cout << "Is the person you're thinking of a male student?" << "\n";
    // std::cin >> option;
    game.loadImage("Qmale.png");
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

bool Students :: birthdayMonth(Game& game){
    // std::cout << "Does the person you're thinking has their birthday in the month of November" << "\n";
    // std::cin >> option;
    game.loadImage("Qbirthmonth.png");
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

bool Students :: outstation(Game& game){
    // std::cout << "Are you thinking of an outstation student?" << "\n";
    // std::cin >> option;
    game.loadImage("Qoutstation.png");
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

bool Students :: initialM(Game& game){
    // std::cout << "Are you thinking of a person who has M as their initial?" << "\n";
    // std::cin >> option;
    game.loadImage("QMinitial.png");
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

bool Students :: school(Game& game){
    // std::cout << "Does the person you're thinking of belong to AHSS?" << "\n";
    // std::cin >> option;
    game.loadImage("QAhss.png");
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

bool Students :: majorCS(Game& game){
    // std::cout << "Does the person you're thinking of is doing CS?" << "\n";
    // std::cin >> option;
    game.loadImage("QCE.png");
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

bool Students :: majorEE(Game& game){
    // std::cout << "Does the person you're thinking of is doing EE?" << "\n";
    // std::cin >> option;
    game.loadImage("QEE.png");
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

bool Students :: bdayStar(Game& game){
    // std::cout << "Is the person you're thinking of an Aquarius?" << "\n";
    // std::cin >> option;
    game.loadImage("QAqua.png");
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

bool Students :: calculusRepeat(Game& game){
    // std::cout << "Is the person you're thinking repeating calculus 1 for the third time?" << "\n";
    // std::cin >> option;
    game.loadImage("QCalcrepeat.png");
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

void Students :: questionOrder(){
    Game& game = Game::getInstance();
    bool male = genderM(game);
    if(male){
        bool out = outstation(game);
        if(out){
            bool cs = majorCS(game);
            if(cs){
                bool calc = calculusRepeat(game);
                if(calc){
                    game.displayOutcome("Ashar.png");
                    std::cout<<"Leutinent Ashar Abbasi Pakistan Navy";
                }
                else{
                    game.displayOutcome("Bilal.png");
                    std::cout<<"Bilal Ahmed Soomro - Wadero of Khairpur";
                }
            }
            else{
                game.displayOutcome("Mubashir.png");
                std::cout<<"Mubashir Anees Soomro - Shikarpur waro";
            }
        }
        else{
            bool nov = birthdayMonth(game);
            if(nov){
                game.displayOutcome("Shaaf.png");
                std::cout<<"Shaaf Farooq - The only King at Habib";
            }
            else{
                game.displayOutcome("Huzaifa.png");
                std::cout<<"Huzaifa Ahmed Khan - Real Chad";
            }
        }
    }    
    else{
        bool ahss = school(game);
        if(ahss){
            game.displayOutcome("Saba.png");
            std::cout<<"Saba Nisar Soomro - Queen of Larkana";
        }
        else{
            bool ee = majorEE(game);
            if(ee){
                game.displayOutcome("Mysha.png");
                std::cout<<"Mysha Zulfiqar - Female Andrew Tate";
            }
            else{
                bool star = bdayStar(game);
                if(star){
                    game.displayOutcome("Sajal.png");
                    std::cout<<"Sajal Fatima - The Model of Habib";
                }
                else{
                    game.displayOutcome("Alishba.png");
                    std::cout<<"The one & only Syeda Alishba Zaidi";
                }
            }
        }
    }
}