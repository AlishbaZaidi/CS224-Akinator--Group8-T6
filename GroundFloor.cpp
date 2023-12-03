#include <string>
#include <iostream>
#include "GroundFloor.hpp"

// Define a member function 'westDirection' for the class 'GroundFloor'
bool GroundFloor::westDirection(Game& game)
{
    // Load an image with the filename 'QWest.png' using the 'game' object
    game.loadImage("QWest.png");
    // Render the loaded image onto the screen
    game.render();

    // Declare an SDL_Event variable to handle events
    SDL_Event e;
    // Start an infinite loop to continuously check for events
    while (true) 
    {
        // Check if there are any pending events
        if (SDL_PollEvent(&e) != 0) 
        {
            // Check if the event is of type SDL_QUIT (e.g., closing the window)
            if (e.type == SDL_QUIT) 
            {
                // Exit the program
                exit(0);
            } 
            // Check if the event is a mouse button down event
            else if (e.type == SDL_MOUSEBUTTONDOWN) 
            {
                // Declare variables to store the x and y coordinates of the mouse click
                int x, y;
                // Get the current mouse state (position)
                SDL_GetMouseState(&x, &y);
                // Check if the mouse click is within the coordinates for the 'YES' option
                if (x >= 135 && x <= 323 && y >= 470 && y <= 529) 
                {
                    // Set the option to 'yes'
                    option = "yes";
                    // Break out of the loop as the event is handled
                    break;
                } 
                // Check if the mouse click is within the coordinates for the 'NO' option
                else if (x >= 457 && x <= 646 && y >= 470 && y <= 529) 
                {
                    // Set the option to 'no'
                    option = "no";
                    // Break out of the loop as the event is handled
                    break;
                }
            }
        }
    }
    // Return true if the option is 'yes', else return false
    if (option == "yes")
    {
        return true;
    }
    else
    {
        return false;
    }        
};


bool GroundFloor::northDirection(Game& game){
    //std::cout << "Is the location you are thinking in North?" << "\n";
    //std::cin >> option;
    game.loadImage("QNorth.png");
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
};

bool GroundFloor::centralDirection(Game& game){
    //std::cout << "Is the location you are thinking a central location?" << "\n";
    //std::cin >> option;
    game.loadImage("QCentral.png");
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
};

bool GroundFloor::courtyard(Game& game){
    //std::cout << "Is the location you are thinking a courtyard?" << "\n";
    //std::cin >> option;
    game.loadImage("QCourtyard.png");
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
};

bool GroundFloor::classroom(Game& game){
    //std::cout << "Is the location you are thinking used as classroom?" << "\n";
    //std::cin >> option;
    game.loadImage("QClassroom.png");
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
};

bool GroundFloor::multiStory(Game& game){
    
    game.loadImage("Qmultiple.png");
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
};

bool GroundFloor::famousPerson(Game& game){
    //std::cout << "Is the location you're thinking of named after a famous personality?" << "\n";
    //std::cin >> option;
    game.loadImage("QFamousPerson.png");
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
};

bool GroundFloor::airCourt(Game& game){
    //std::cout << "Does the location you're thinking has some an invisible force in its name which is essential for life, known for my dance with the leaves, gentle as a whisper yet capable of tempestuous fury, without whom birds would walk and sails would remain motionless?" << "\n";
    //std::cin >> option;
    game.loadImage("QAir.png");
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

bool GroundFloor::waterCourt(Game& game){
    //std::cout << "Are you thinking of a location named after a transparent, tasteless, and odorless substance, vital for all known life forms, which covers approximately 71 percent of Earth's surface and can exist in three states: solid, liquid, and gas?" << "\n";
    //std::cin >> option;
    game.loadImage("QWater.png");
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

bool GroundFloor::fireCourt(Game& game){
    //std::cout << "Are you considering a location whose name includes a phenomenon known for combustion, characterized by heat, light, and flames, utilized for warmth, cooking, and various technological activities, but also posing a risk of destruction if not controlled?" << "\n";
    //std::cin >> option;
    game.loadImage("QFire.png");
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

bool GroundFloor::earthCourt(Game& game){
    //std::cout << "Are you referring to a location whose first name is the same as the third planet from the Sun, a hub of diverse life forms, encompassing extensive oceans and continents, notable for its gravity that keeps everything anchored?" << "\n";
    //std::cin >> option;
    game.loadImage("QEarth.png");
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

bool GroundFloor::comfortZone(Game& game){
   //std::cout << "Are you thinking of a relaxed space meant for socializing, studying with comfortable seating?" << "\n";
    //std::cin >> option;
    game.loadImage("QComfort.png");
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
bool GroundFloor::hygenicFood(Game& game){
    //std::cout << "Are you thinking of a location where you get hygienically prepared meals?" << "\n";
    //std::cin >> option;
    game.loadImage("QHygenic.png");
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

bool GroundFloor::lectureHall(Game& game){
    //std::cout << "Are you thinking of a lecture hall?" << "\n";
    //std::cin >> option;
    game.loadImage("QLectureHall.png");
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

bool GroundFloor::multipleOffices(Game& game){
    //std::cout << "Does your location contain several offices within it?" << "\n";
    //std::cin >> option;
    game.loadImage("Qoffices.png");
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

bool GroundFloor::eventsKarao(Game& game){
    //std::cout << "Is your chosen location a place where discussions about budget constraints for events are frequently heard?" << "\n";
    //std::cin >> option;
    game.loadImage("Qevent.png");
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

bool GroundFloor::wellness(Game& game){
    //std::cout << "Is your location dedicated to student health and well-being?" << "\n";
    //std::cin >> option;
    game.loadImage("QWellness.png");
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

bool GroundFloor::careerOffice(Game& game){
    //std::cout << "Does the location you have in mind play a key role in supporting your future?" << "\n";
    //std::cin >> option;
    game.loadImage("Qocs.png");
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

// This function determines the player's location based on their responses to a series of questions.
void GroundFloor::questionOrder()
{
    // Retrieve a reference to the Game singleton instance.
    Game& game = Game::getInstance();

    // Determine if the player's thought direction is west.
    bool west = westDirection(game);
    if(west){
        // Generate a random number (0 or 1) for decision branching.
        int num1 = NewRandomNumGenerator(2);
        if(num1){
            // Check if the player is thinking of a courtyard.
            bool court = courtyard(game);
            if(court){
                // Check if the player is thinking of the Air Courtyard.
                bool air = airCourt(game);
                if(air){
                    // Display the outcome for the Air Courtyard.
                    game.displayOutcome("Air.png");
                    std::cout << "You're thinking of Air Courtyard";
                }
                else{
                    // Check if the player is thinking of the Earth Courtyard.
                    bool earth = earthCourt(game);
                    if(earth){
                        // Display the outcome for the Earth Courtyard.
                        game.displayOutcome("Earth.png");
                        std::cout << "You're thinking of Earth Courtyard";
                    }
                    else{
                        // Generate another random number for further decision branching.
                        int num2 = NewRandomNumGenerator(2);
                        if(num2){
                            // Check if the player is thinking of the Water Courtyard.
                            bool water = waterCourt(game);
                            if(water){
                                // Display the outcome for the Water Courtyard.
                                game.displayOutcome("Water.png");
                                std::cout << "You're thinking of Water Courtyard";
                            }
                            else{
                                // If not Water, then it must be Fire Courtyard by elimination.
                                game.displayOutcome("Fire.png");
                                std::cout << "You're thinking of Fire Courtyard";
                            }
                        }
                        else{
                            // Check if the player is thinking of the Fire Courtyard.
                            bool fire = fireCourt(game);
                            if(fire){
                                // Display the outcome for the Fire Courtyard.
                                game.displayOutcome("Fire.png");
                                std::cout << "You're thinking of Fire Courtyard";
                            }
                            else{
                                // If not Fire, then it must be Water Courtyard by elimination.
                                game.displayOutcome("Water.png");
                                std::cout << "You're thinking of Water Courtyard";
                            }
                        }
                    }
                }
            }
            else{
                // If not a courtyard, then it must be the Wellness Center by elimination.
                game.displayOutcome("Wellness.png");
                std::cout << "You're thinking of Wellness Center";
            }
        }
        else{
            // Check if the player is thinking of the Wellness Center.
            bool well = wellness(game);
            if(well){
                // Display the outcome for the Wellness Center.
                game.displayOutcome("Wellness.png");
                std::cout << "You're thinking of Wellness Center";
            }
            else{
                // Check if the player is thinking of the Fire Courtyard.
                bool fire = fireCourt(game);
                if(fire){
                    // Display the outcome for the Fire Courtyard.
                    game.displayOutcome("Fire.png");
                    std::cout << "You're thinking of Fire Courtyard";
                }
                else{
                    // Check if the player is thinking of the Water Courtyard.
                    bool water = waterCourt(game);
                    if(water){
                        // If Water, display the outcome for the Water Courtyard.
                        game.displayOutcome("Fire.png");  // Note: Should this be "Water.png"?
                        std::cout << "You're thinking of Water Courtyard";
                    }
                    else{
                        // Generate another random number for further decision branching.
                        int num3 = NewRandomNumGenerator(2);
                        if(num3){
                            // Check if the player is thinking of the Air Courtyard.
                            bool air = airCourt(game);
                            if(air){
                                // Display the outcome for the Air Courtyard.
                                game.displayOutcome("Air.png");
                                std::cout << "You're thinking of Air Courtyard";
                            }
                            else{
                                // If not Air, then it must be Earth Courtyard by elimination.
                                game.displayOutcome("Earth.png");
                                std::cout << "You're thinking of Earth Courtyard";
                            }
                        }
                        else{
                            // Check if the player is thinking of the Earth Courtyard.
                            bool earth = earthCourt(game);
                            if(earth){
                                // Display the outcome for the Earth Courtyard.
                                game.displayOutcome("Earth.png");
                                std::cout << "You're thinking of Earth Courtyard";
                            }
                            else{
                                // If not Earth, then it must be Air Courtyard by elimination.
                                game.displayOutcome("Air.png");
                                std::cout << "You're thinking of Air Courtyard";
                            }
                        }
                    }
                }
            }
        }
    }
    else{
        // Determine if the player's thought direction is north.
        bool north = northDirection(game);
        if(north){
            // Generate a random number for decision branching.
            int num3 = NewRandomNumGenerator(2);
            if(num3){
                // Check if the player is thinking of the Office of Career and Services.
                bool career = careerOffice(game);
                if(career){
                    // Display the outcome for the Office of Career and Services.
                    game.displayOutcome("OCS.png");
                    std::cout << "You're thinking of Office of Career and Services";
                }
                else{
                    // If not the career office, then it must be the Student Center by elimination.
                    game.displayOutcome("StudentCentre.png");
                    std::cout << "You're thinking of Student Center";
                }
            }
            else{
                // Check if the player is thinking of the Student Center.
                bool studentcen = multipleOffices(game);
                if(studentcen){
                    // Display the outcome for the Student Center.
                    game.displayOutcome("StudentCentre.png");
                    std::cout << "You're thinking of Student Center";
                }
                else{
                    // If not the Student Center, then it must be the Office of Career and Services by elimination.
                    game.displayOutcome("OCS.png");
                    std::cout << "You're thinking of Office of Career and Services";
                }
            }
        }
        else{
            // Determine if the player's thought direction is central.
            bool central = centralDirection(game);
            if(central){
                // Check if the player is thinking of a classroom.
                bool classRoom = classroom(game);
                if(classRoom){
                    // Check if the player is thinking of a lecture hall.
                    bool hall = lectureHall(game);
                    if(hall){
                        // Display the outcome for Soorty Hall.
                        game.displayOutcome("Soorty.png");
                        std::cout << "It's Soorty Hall";
                    }
                    else{
                        // Check if the location is named after a famous person.
                        bool perosnality = famousPerson(game);
                        if(perosnality){
                            // Display the outcome for Arif Habib Classroom.
                            game.displayOutcome("ArifHabib.png");
                            std::cout << "You're thinking of Arif Habib Classroom";
                        }
                        else{
                            // If not named after a famous person, then it must be the Multipurpose Room by elimination.
                            game.displayOutcome("MPR.png");
                            std::cout << "The location you're thinking is Multipurpose Room";
                        }
                    }
                }
                else{
                    // Generate a random number for further decision branching.
                    int num4 = NewRandomNumGenerator(2);
                    if(num4){
                        // Check if the player is thinking of the Student Lounge.
                        bool lounge = comfortZone(game);
                        if(lounge){
                            // Display the outcome for the Student Lounge.
                            game.displayOutcome("Studentlounge.png");
                            std::cout << "You're thinking of Student Lounge";
                        }
                        else{
                            // If not the lounge, then it must be Student Life by elimination.
                            game.displayOutcome("SL.png");
                            std::cout << "You're thinking of Student Life";
                        }
                    }
                    else{
                        // Check if the player is thinking of Student Life.
                        bool life = eventsKarao(game);
                        if(life){
                            // Display the outcome for Student Life.
                            game.displayOutcome("SL.png");
                            std::cout << "You're thinking of Student Life";
                        }
                        else{
                            // If not Student Life, then it must be the Student Lounge by elimination.
                            game.displayOutcome("Studentlounge.png");
                            std::cout << "You're thinking of Student Lounge";
                        }
                    }
                }
            }
            else{
                // Generate a random number for the final set of decision branching.
                int num5 = NewRandomNumGenerator(2);
                if(num5){
                    // Check if the player is thinking of a multi-story building.
                    bool multi = multiStory(game);
                    if(multi){
                        // Display the outcome for the Library.
                        game.displayOutcome("Lib.png");
                        std::cout << "You're thinking of Library";
                    }
                    else{
                        // If not multi-story, then it must be Cafe2Go by elimination.
                        game.displayOutcome("Cafe2go.png");
                        std::cout << "You're thinking of Cafe2Go";
                    }
                }
                else{
                    // Check if the player is thinking of a location with hygienic food (Cafe2Go).
                    bool cafe = hygenicFood(game);
                    if(cafe){
                        // Display the outcome for Cafe2Go.
                        game.displayOutcome("Cafe2go.png");
                        std::cout << "You're thinking of Cafe2Go";
                    }
                    else{
                        // If not Cafe2Go, then it must be the Library by elimination.
                        game.displayOutcome("Lib.png");
                        std::cout << "You're thinking of Library";
                    }
                }
            }
        }
    }
}
