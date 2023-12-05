#include <iostream>
#include "Extras.hpp"
#include "Locations.hpp"
#include "FirstFloor.hpp"
#include "LowerGroundFloor.hpp"
#include "SecondFloor.hpp"
#include "game.hpp"
#include "GroundFLoor.hpp"
#include "FourthFloor.hpp"
#include "Students.hpp"

// Main function
int main(int argc, char* argv[])
{
    // Declare variables for game mode and user option
    std::string mode, option;

    // Get the singleton instance of the Game class
    Game& game = Game::getInstance();

    // Run the game
    game.run(); 

    // Load the image for the mode selection screen
    game.loadImage("Choose.png");
    game.render();

    // SDL event handling
    SDL_Event e;
    while (true) {
        if (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                exit(0);
            } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                int x, y;
                SDL_GetMouseState(&x, &y);
                // Check if user clicked on "YES" button
                if (x >= 135 && x <= 323 && y >= 470 && y <= 529) {
                    option = "yes";
                    SDL_Delay(500);
                    break;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) { // Check if user clicked on "NO" button
                    option = "no";
                    SDL_Delay(500);
                    break;
                }
            }
        }
    }

    // Branch based on user option
    if (option == "yes")
    {
        // If user chooses "students," initiate Students class and run questionOrder
        Students stud;
        stud.questionOrder();
    }
    else if (option == "no")
    {
        // If user chooses "locations," initiate Locations class and handle floor-specific logic
        Locations loc;
        loc.ourFloor();
        loc.updateFloor();

        // Branch based on the selected floor
        if (loc.floor == "First Floor")
        {
            Locations* FF = new FirstFloor();
            FF->questionOrder();
            delete FF;
            FF = nullptr;
        }
        else if(loc.floor == "Lower Ground Floor")
        {
            Locations* LGF = new LowerGroundFloor();
            LGF->questionOrder();
            delete LGF;
            LGF = nullptr;
        }
        else if(loc.floor == "Ground Floor")
        {    
            Locations* GF = new GroundFloor();
            GF->questionOrder();
            delete GF;
            GF = nullptr;
        } 
        else if(loc.floor == "Fourth Floor")
        {
            Locations* FL = new FourthFloor();
            FL->questionOrder();
            delete FL;
            FL = nullptr;
        }
        else if(loc.floor == "Second Floor")
        {
            Locations* SF = new SecondFloor();
            SF->questionOrder();
            delete SF;
            SF = nullptr;
        }
    }
    // else
    // {
    //     Students stud;
    //     stud.questionOrder();
    // }
    // Return 0 to indicate successful execution
    return 0;
}