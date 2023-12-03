#include <string>
#include <iostream>
#include "FirstFloor.hpp"

// FirstFloor::FirstFloor(){}


bool FirstFloor::eastDirection(Game& game) 
    {
        // std::cout << "Is the location you are thinking in East?" << "\n";
        // std::cin >> option;
        game.loadImage("QEast.png");  // Load the question image
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

bool FirstFloor::northDirection(Game& game) 
    {
        // std::cout << "Is the location you are thinking in North?" << "\n";
        // std::cin >> option;
        game.loadImage("QNorth.png");  // Load the question image
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

bool FirstFloor::smokingArea(Game& game)
    {
        // std::cout << "Are you thinking of a smoking area?" << "\n";
        // std::cin >> option;
        game.loadImage("Qsmokingarea.png");  // Load the question image
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
    
bool FirstFloor::capacity(Game& game)
    {
        // std::cout << "Is the capacity of the room you are thinking 350+?" << "\n";
        // std::cin >> option;
        game.loadImage("Qcapacity.png");  // Load the question image
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
    
bool FirstFloor::lectureHall(Game& game)
    {
        // std::cout << "Are you thinking of a Lecture Hall?" << "\n";
        // std::cin >> option;
        game.loadImage("QLectureHall.png");  // Load the question image
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

bool FirstFloor::multiStory(Game& game)
    {
        // std::cout << "Is your location found on multiple floors?" << "\n";
        // std::cin >> option;
        game.loadImage("Qmultiple.png");  // Load the question image
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

bool FirstFloor::onlyFaculty(Game& game)
    {
        // std::cout << "Is this location reserved for faculty?" << "\n";
        // std::cin >> option;
        game.loadImage("QonlyFaculty.png");  // Load the question image
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

void FirstFloor::questionOrder()
    {
        Game& game = Game::getInstance();
        int num1 = NewRandomNumGenerator(2);
        if (num1 == 1)
        {
            bool east = eastDirection(game);
            if (east)
            {
                bool lec = lectureHall(game);
                if (lec)
                {
                    bool cap = capacity(game);
                    if (cap)
                    {
                        game.displayOutcome("Audi.png");
                        std::cout<<"WOHOOOO! Your location is Auditorium";
                    }
                    else
                    {
                        game.displayOutcome("TR.png");
                        std::cout<<"WOHOOOO! Your location is Tariq Rafi";
                    }
                }
                else
                {
                    int num2 = NewRandomNumGenerator(2);
                    if (num2 == 1)
                    {
                        bool nasha = smokingArea(game);
                        if (nasha)
                        {
                        game.displayOutcome("Mehfil.png");
                        std::cout<<"WOHOOOO! Your location is Mehfil";
                        }
                        else {
                            game.displayOutcome("Lib.png");
                            std::cout<<"WOHOOOO! Your location is Library";
                            }
                    }
                    else
                    {
                        bool parhaku = multiStory(game);
                        if (parhaku)
                        {
                        game.displayOutcome("Lib.png");
                        std::cout<<"WOHOOOO! Your location is Library";
                        }
                        else{
                            game.displayOutcome("Mehfil.png");
                            std::cout<<"WOHOOOO! Your location is Mehfil";
                            }
                    }
                }
            }
            else  //east false
            {
                int num3 = NewRandomNumGenerator(2);
                    if (num3 == 1)
                    {
                        bool nasha = smokingArea(game);
                        if (nasha)
                        {
                            game.displayOutcome("Baithak.png");
                            std::cout<<"WOHOOOO! Your location is Baithak";
                            }
                        else {
                        game.displayOutcome("DP.png");
                        std::cout<<"WOHOOOO! Your location is Dean's Pod";
                        }
                    }
                    else
                    {
                        bool dir = northDirection(game);
                        if (dir)
                        {
                        game.displayOutcome("DP.png");
                        std::cout<<"WOHOOOO! Your location is Dean's Pod";
                        }
                        else{
                            game.displayOutcome("Baithak.png");
                            std::cout<<"WOHOOOO! Your location is Baithak";
                            }
                    }
            }
    }else //0 as a random num
    {
        bool nasha = smokingArea(game);
        if (nasha)
        {
            bool faculty = onlyFaculty(game);
            if (faculty)
            {
                game.displayOutcome("Mehfil.png");
                std::cout<<"WOHOOOO! Your location is Mehfil";
                }
            else{
                game.displayOutcome("Baithak.png");
                std::cout<<"WOHOOOO! Your location is Baithak";
                }
        }
        else
        {
            bool lec = lectureHall(game);
            if (lec)
            {
                bool cap = capacity(game);
                    if (cap)
                    {
                        game.displayOutcome("Audi.png");
                        std::cout<<"WOHOOOO! Your location is Auditorium";
                    }
                    else
                    {
                        game.displayOutcome("TR.png");
                        std::cout<<"WOHOOOO! Your location is Tariq Rafi";
                    }
            }
            else
            {
                int num4 = NewRandomNumGenerator(2);
                if (num4 == 1)
                {
                    bool parhaku = multiStory(game);
                    if (parhaku)
                    {
                    game.displayOutcome("Lib.png");
                    std::cout<<"WOHOOOO! Your location is Library";
                    }
                    else{
                    game.displayOutcome("DP.png");
                    std::cout<<"WOHOOOO! Your location is Dean's Pod";
                    }
                }
                else
                {
                    bool dir = northDirection(game);
                    if (dir)
                    {
                    game.displayOutcome("DP.png");
                    std::cout<<"WOHOOOO! Your location is Dean's Pod";
                    }
                    else
                    {
                    game.displayOutcome("Lib.png");
                    std::cout<<"WOHOOOO! Your location is Library";
                    }
                }
            }
        }
    }
}