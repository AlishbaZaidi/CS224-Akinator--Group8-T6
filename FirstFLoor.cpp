#include <string>
#include <iostream>
#include "FirstFloor.hpp"

// Class implementation for the FirstFloor

// Function to inquire if the location is in the east direction
bool FirstFloor::eastDirection(Game& game) 
{
    // Display the question image for east direction
    game.loadImage("QEast.png");
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
                    option = "yes";
                    SDL_Delay(100);
                    return true;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) {// Check for NO coordinates
                    option = "no";
                    SDL_Delay(100);
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

// Function to inquire if the location is in the north direction
bool FirstFloor::northDirection(Game& game) 
{
    // Display the question image for north direction
    game.loadImage("QNorth.png");
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
                    option = "yes";
                    SDL_Delay(100);
                    return true;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) {// Check for NO coordinates
                    option = "no";
                    SDL_Delay(100);
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

// Function to inquire if the location is a smoking area
bool FirstFloor::smokingArea(Game& game)
{
    // Display the question image for smoking area
    game.loadImage("Qsmokingarea.png");
    game.render();

    SDL_Event e;
    while (true) {
        while (SDL_PollEvent(&e) != 0) {
            if (e.type == SDL_QUIT) {
                exit(0);
            } else if (e.type == SDL_MOUSEBUTTONDOWN) {
                int x, y;
                SDL_GetMouseState(&x, &y);// Check for YES coordinates
                if (x >= 135 && x <= 323 && y >= 470 && y <= 529) {
                    option = "yes";
                    SDL_Delay(100);
                    return true;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) {// Check for NO coordinates
                    option = "no";
                    SDL_Delay(100);
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

// Function to inquire if the location has a capacity of 350 or more
bool FirstFloor::capacity(Game& game)
{
    // Display the question image for capacity
    game.loadImage("Qcapacity.png");
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
                    option = "yes";
                    SDL_Delay(100);
                    return true;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) {// Check for NO coordinates
                    option = "no";
                    SDL_Delay(100);
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

// Function to inquire if the location is a lecture hall
bool FirstFloor::lectureHall(Game& game)
{
    // Display the question image for lecture hall
    game.loadImage("QLectureHall.png");
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
                    option = "yes";
                    SDL_Delay(100);
                    return true;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) {
                    // Check for NO coordinates
                    option = "no";
                    SDL_Delay(100);
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

// Function to inquire if the location is found on multiple floors
bool FirstFloor::multiStory(Game& game)
{
    // Display the question image for multiple floors
    game.loadImage("Qmultiple.png");
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
                    option = "yes";
                    SDL_Delay(100);
                    return true;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) {
                    // Check for NO coordinates
                    option = "no";
                    SDL_Delay(100);
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

// Function to inquire if the location is reserved for faculty only
bool FirstFloor::onlyFaculty(Game& game)
{
    // Display the question image for faculty-only location
    game.loadImage("QonlyFaculty.png");
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
                    option = "yes";
                    SDL_Delay(100);
                    return true;
                } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) {
                    // Check for NO coordinates
                    option = "no";
                    SDL_Delay(100);
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
void FirstFloor::questionOrder()
{
    // Get the instance of the game
    Game& game = Game::getInstance();

    // Generate a random number to determine the order of questions
    int num1 = NewRandomNumGenerator(2);

    if (num1 == 1)
    {
        // Ask questions in a specific order
        bool east = eastDirection(game);
        if (east)
        {
            bool lec = lectureHall(game);
            if (lec)
            {
                bool cap = capacity(game);
                if (cap)
                {
                    // Display outcome for Auditorium
                    game.displayOutcome("Audi.png");
                    std::cout << "WOHOOOO! Your location is Auditorium";
                }
                else
                {
                    // Display outcome for Tariq Rafi
                    game.displayOutcome("TR.png");
                    std::cout << "WOHOOOO! Your location is Tariq Rafi";
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
                        // Display outcome for Mehfil
                        game.displayOutcome("Mehfil.png");
                        std::cout << "WOHOOOO! Your location is Mehfil";
                    }
                    else {
                        // Display outcome for Library
                        game.displayOutcome("Lib.png");
                        std::cout << "WOHOOOO! Your location is Library";
                    }
                }
                else
                {
                    bool parhaku = multiStory(game);
                    if (parhaku)
                    {
                        // Display outcome for Library
                        game.displayOutcome("Lib.png");
                        std::cout << "WOHOOOO! Your location is Library";
                    }
                    else{
                        // Display outcome for Mehfil
                        game.displayOutcome("Mehfil.png");
                        std::cout << "WOHOOOO! Your location is Mehfil";
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
                    // Display outcome for Baithak
                    game.displayOutcome("Baithak.png");
                    std::cout << "WOHOOOO! Your location is Baithak";
                }
                else {
                    // Display outcome for Dean's Pod
                    game.displayOutcome("DP.png");
                    std::cout << "WOHOOOO! Your location is Dean's Pod";
                }
            }
            else
            {
                bool dir = northDirection(game);
                if (dir)
                {
                    // Display outcome for Dean's Pod
                    game.displayOutcome("DP.png");
                    std::cout << "WOHOOOO! Your location is Dean's Pod";
                }
                else{
                    // Display outcome for Baithak
                    game.displayOutcome("Baithak.png");
                    std::cout << "WOHOOOO! Your location is Baithak";
                }
            }
        }
    }
    else //0 as a random num
    {
        bool nasha = smokingArea(game);
        if (nasha)
        {
            bool faculty = onlyFaculty(game);
            if (faculty)
            {
                // Display outcome for Mehfil
                game.displayOutcome("Mehfil.png");
                std::cout << "WOHOOOO! Your location is Mehfil";
            }
            else{
                // Display outcome for Baithak
                game.displayOutcome("Baithak.png");
                std::cout << "WOHOOOO! Your location is Baithak";
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
                    // Display outcome for Auditorium
                    game.displayOutcome("Audi.png");
                    std::cout << "WOHOOOO! Your location is Auditorium";
                }
                else
                {
                    // Display outcome for Tariq Rafi
                    game.displayOutcome("TR.png");
                    std::cout << "WOHOOOO! Your location is Tariq Rafi";
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
                        // Display outcome for Library
                        game.displayOutcome("Lib.png");
                        std::cout << "WOHOOOO! Your location is Library";
                    }
                    else{
                        // Display outcome for Dean's Pod
                        game.displayOutcome("DP.png");
                        std::cout << "WOHOOOO! Your location is Dean's Pod";
                    }
                }
                else
                {
                    bool dir = northDirection(game);
                    if (dir)
                    {
                        // Display outcome for Dean's Pod
                        game.displayOutcome("DP.png");
                        std::cout << "WOHOOOO! Your location is Dean's Pod";
                    }
                    else
                    {
                        // Display outcome for Library
                        game.displayOutcome("Lib.png");
                        std::cout << "WOHOOOO! Your location is Library";
                    }
                }
            }
        }
    }
}