#include <iostream>
#include"Extras.hpp"
#include"Locations.hpp"
#include"FirstFloor.hpp"
#include"LowerGroundFloor.hpp"
#include"SecondFloor.hpp"
#include"game.hpp"
#include"GroundFLoor.hpp"
#include"FourthFloor.hpp"
#include"Students.hpp"


int main(int argc, char* argv[])
{
    
    std::string mode, option;
    Game& game = Game::getInstance();
    game.run(); 
    // std::cout << "students or locations?\n";
    // std::cin >> mode;
    game.loadImage("Choose.png");
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
        Students stud;
        stud.questionOrder();
    }
    else if (option == "no")
    {
        Locations loc;
        loc.ourFloor();
        loc.updateFloor();
        if (loc.floor == "First Floor")
        {
            FirstFloor FL;
            FL.questionOrder();
        }
        else if(loc.floor == "Lower Ground Floor")
        {

            LowerGroundFloor LGF;
            LGF.questionOrder();
        }
        else if(loc.floor == "Ground Floor")
        {    
                GroundFloor GF;
                GF.questionOrder();
        } 
        else if(loc.floor == "Fourth Floor")
        {
            FourthFloor FL;
            FL.questionOrder();
        }
        else if(loc.floor == "Second Floor")
        {
            SecondFloor SF;
            SF.questionOrder();
        }
    }
    // else
    // {
    //     Students stud;
    //     stud.questionOrder();
    // }
    return 0;
}