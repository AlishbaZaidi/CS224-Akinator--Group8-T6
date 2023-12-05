#include <string>
#include <iostream>
#include "LowerGroundFloor.hpp"

// Define the eastDirection function of the LowerGroundFloor class
bool LowerGroundFloor::eastDirection(Game& game) 
{
    // Load an image named 'QEast.png' and render it using the game instance
    game.loadImage("Screens/QEast.png");
    game.render();

    SDL_Event e;
    // Start an infinite loop to handle SDL events
    while (true) 
    {
        // Check for SDL events
        if (SDL_PollEvent(&e) != 0) 
        {
            // If the event is a request to quit, exit the program
            if (e.type == SDL_QUIT) 
            {
                exit(0);
            } 
            // Handle mouse button down events
            else if (e.type == SDL_MOUSEBUTTONDOWN) 
            {
                int x, y;
                // Get the mouse coordinates
                SDL_GetMouseState(&x, &y);
                // Check if coordinates are within the 'YES' button bounds
                if (x >= 135 && x <= 323 && y >= 470 && y <= 529) 
                {
                    option = "yes";
                    SDL_Delay(100);
                    break; // Exit the loop if 'YES' is clicked
                } 
                // Check if coordinates are within the 'NO' button bounds
                else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) 
                {
                    option = "no";
                    SDL_Delay(100);
                    break; // Exit the loop if 'NO' is clicked
                }
            }
        }
    }
    // Return true if the option is 'yes', otherwise false
    if (option == "yes")
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Similar structure for centralDirection, maleRestricted, cockroach, groupStudy, famousName, openArea, events, and stage methods
// These methods follow the same logic as eastDirection but ask different questions and load different images


bool LowerGroundFloor::centralDirection(Game& game) 
    {
        // std::cout << "Is the location you are thinking a central location?" << "\n";
        // std::cin >> option;
        game.loadImage("Screens/QCentral.png");
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
                        SDL_Delay(100);
                        break;
                    } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) 
                    { // NO coordinates
                        option = "no";
                        SDL_Delay(100);
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
        game.loadImage("Screens/QRestricted.png");
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
                        SDL_Delay(100);
                        break;
                    } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) 
                    { // NO coordinates
                        option = "no";
                        SDL_Delay(100);
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
        game.loadImage("Screens/QCockroaches.png");
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
                        SDL_Delay(100);
                        break;
                    } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) 
                    { // NO coordinates
                        option = "no";
                        SDL_Delay(100);
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
        game.loadImage("Screens/QIsolated.png");
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
                        SDL_Delay(100);
                        break;
                    } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) 
                    { // NO coordinates
                        option = "no";
                        SDL_Delay(100);
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
        game.loadImage("Screens/QFamousPerson.png");
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
                        SDL_Delay(100);
                        break;
                    } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) 
                    { // NO coordinates
                        option = "no";
                        SDL_Delay(100);
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
        game.loadImage("Screens/QOpenArea.png");
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
                        SDL_Delay(100);
                        break;
                    } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) 
                    { // NO coordinates
                        option = "no";
                        SDL_Delay(100);
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
        game.loadImage("Screens/QEvents.png");
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
                        SDL_Delay(100);
                        break;
                    } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) 
                    { // NO coordinates
                        option = "no";
                        SDL_Delay(100);
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
        game.loadImage("Screens/QStage.png");
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
                        SDL_Delay(100);
                        break;
                    } else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) 
                    { // NO coordinates
                        option = "no";
                        SDL_Delay(100);
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

    
// Define the questionOrder function of the LowerGroundFloor class
void LowerGroundFloor::questionOrder()
{
    // Get a reference to the singleton Game instance
    Game& game = Game::getInstance();
    // Follow a decision tree based on the responses to the questions
    // The logic involves calling different functions defined above and based on their return values
    // displaying different outcomes. The exact logic is omitted for brevity.
    bool east = eastDirection(game);
    if(east){
        bool music = famousName(game);
        if(music){
            game.displayOutcome("Screens/Music.png");
            std::cout<<"WOO_HOO!!! Your desired location is Music Room";
        }
        else{
            bool cockroaches = cockroach(game);
            if(cockroaches){
                game.displayOutcome("Screens/Tapal.png");
                std::cout<<"WOO-HOO!! You're thinking of Tapal Cafeteria";
            }
            else{
                bool dhaba = openArea(game);
                if(dhaba){
                    game.displayOutcome("Screens/Dhaba.png");
                    std::cout<<"Dhaba souch rahey hou na hehe";
                }
                else{
                    game.displayOutcome("Screens/Dukaan.png");
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
                    game.displayOutcome("Screens/Amphi.png");
                    std::cout<<"WOO-HOO!! You're thinking of Amphitheatre";
                }
                else{
                    game.displayOutcome("Screens/Courts.png");
                    std::cout<<"WOO-HOO!! You're thinking of Courts";
                }
            }
            else{
                game.displayOutcome("Screens/Gym.png");
                std::cout<<"WOO-HOO! It's Gym";
            }
        }
        else{
            bool fLounge = maleRestricted(game);
            if(fLounge){
                game.displayOutcome("Screens/FemaleLounge.png");
                std::cout<<"WOO-HOO! Khawateen Lounge";
            }
            else{
                bool study = groupStudy(game);
                if(study){
                    game.displayOutcome("Screens/Learn.png");
                    std::cout<<"WOO-HOO!! You're thinking of Learn Courtyard";
                }
                else{
                    game.displayOutcome("Screens/ParkingArea.png");
                    std::cout<<"WOO-HOO!! You're thinking of the Parking areas";
                }
            }
        }
    }
}