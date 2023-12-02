#include <string>
#include <iostream>
#include "GroundFloor.hpp"



bool GroundFloor::westDirection(Game& game)
{
    //std::cout << "Is the location you are thinking in West?" << "\n";
    //std::cin >> option;
    game.loadImage("QWest.png");
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
    //std::cout << "Is your location found on multiple floors?" << "\n";
    //std::cin >> option;
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


void GroundFloor::questionOrder()
{
    Game game;
    bool west = westDirection(game);
    if(west){
        int num1 = NewRandomNumGenerator(2);
        if(num1){
            bool court = courtyard(game);
            if(court){
                bool air = airCourt(game);
                if(air){
                    game.displayOutcome("Air.png");
                    std::cout<<"You're thinking of Air Courtyard";
                }
                else{
                    bool earth = earthCourt(game);
                    if(earth){
                        game.displayOutcome("Earth.png");
                        std::cout<<"You're thinking of Earth Courtyard";
                    }
                    else{
                        int num2 = NewRandomNumGenerator(2);
                        if(num2){
                            bool water = waterCourt(game);
                            if(water){
                                game.displayOutcome("Water.png");
                                std::cout<<"You're thinking of Water Courtyard";
                            }
                            else{
                                game.displayOutcome("Fire.png");
                                std::cout<<"You're thinking of Fire Courtyard";
                            }
                        }
                        else{
                            bool fire = fireCourt(game);
                            if(fire){
                                game.displayOutcome("Fire.png");
                                std::cout<<"You're thinking of Fire Courtyard";
                            }
                            else{
                                game.displayOutcome("Water.png");
                                std::cout<<"You're thinking of Water Courtyard";
                            }
                        }
                    }
                }
            }
            else{
                game.displayOutcome("Wellness.png");
                std::cout<<"You're thinking of Wellness Center";
            }
        }
        else{
            bool well = wellness(game);
            if(well){
                game.displayOutcome("Wellness.png");
                std::cout<<"You're thinking of Wellness Center";
            }
            else{
                bool fire = fireCourt(game);
                if(fire){
                    game.displayOutcome("Fire.png");
                    std::cout<<"You're thinking of Fire Courtyard";
                }
                else{
                    bool water = waterCourt(game);
                    if(water){
                        game.displayOutcome("Fire.png");
                        std::cout<<"You're thinking of Water Courtyard";
                    }
                    else{
                        int num3 = NewRandomNumGenerator(2);
                        if(num3){
                            bool air = airCourt(game);
                            if(air){
                                game.displayOutcome("Air.png");
                                std::cout<<"You're thinking of Air Courtyard";
                            }
                            else{
                                game.displayOutcome("Earth.png");
                                std::cout<<"You're thinking of Earth Courtyard";
                            }
                        }
                        else{
                            bool earth = earthCourt(game);
                            if(earth){
                                game.displayOutcome("Earth.png");
                                std::cout<<"You're thinking of Earth Courtyard";
                            }
                            else{
                                game.displayOutcome("Air.png");
                                std::cout<<"You're thinking of Air Courtyard";
                            }
                        }
                    }
                }
            }
        }
    }
    else{
        bool north = northDirection(game);
        if(north){
            int num3 = NewRandomNumGenerator(2);
            if(num3){
                bool career = careerOffice(game);
                if(career){
                    game.displayOutcome("OCS.png");
                    std::cout<<"You're thinking of Office of Career and Services";
                }
                else{
                    game.displayOutcome("StudentCentre.png");
                    std::cout<<"You're thinking of Student Center";
                }
            }
            else{
                bool studentcen = multipleOffices(game);
                if(studentcen){
                    game.displayOutcome("StudentCentre.png");
                    std::cout<<"You're thinking of Student Center";
                }
                else{
                    game.displayOutcome("OCS.png");
                    std::cout<<"You're thinking of Office of Career and Services";
                }
            }
        }
        else{
            bool central = centralDirection(game);
            if(central){
                bool classRoom = classroom(game);
                if(classRoom){
                    bool hall = lectureHall(game);
                    if(hall){
                        game.displayOutcome("Soorty.png");
                        std::cout<<"It's Soorty Hall";
                    }
                    else{
                        bool perosnality = famousPerson(game);
                        if(perosnality){
                            game.displayOutcome("ArifHabib.png");
                            std::cout<<"You're thinking of Arif Habib Classroom";
                        }
                        else{
                            game.displayOutcome("MPR.png");
                            std::cout<<"The location you're thinking is Multipurpose Room";
                        }
                    }

                }
                else{
                    int num4 = NewRandomNumGenerator(2);
                    if(num4){
                        bool lounge = comfortZone(game);
                        if(lounge){
                            game.displayOutcome("Studentlounge.png");
                            std::cout<<"You're thinking of Student Lounge";
                        }
                        else{
                            game.displayOutcome("SL.png");
                            std::cout<<"You're thinking of Student Life";
                        }
                    }
                    else{
                        bool life = eventsKarao(game);
                        if(life){
                            game.displayOutcome("SL.png");
                            std::cout<<"You're thinking of Student Life";
                        }
                        else{
                            game.displayOutcome("Studentlounge.png");
                            std::cout<<"You're thinking of Student Lounge";
                        }
                    }
                }
            }
            else{
                int num5 = NewRandomNumGenerator(2);
                if(num5){
                    bool multi = multiStory(game);
                    if(multi){
                        game.displayOutcome("Lib.png");
                        std::cout<<"You're thinking of Library";
                    }
                    else{
                        game.displayOutcome("Cafe2go.png");
                        std::cout<<"You're thinking of Cafe2Go";
                    }
                }
                else{
                    bool cafe = hygenicFood(game);
                    if(cafe){
                        game.displayOutcome("Cafe2go.png");
                        std::cout<<"You're thinking of Cafe2Go";
                    }
                    else{
                        game.displayOutcome("Lib.png");
                        std::cout<<"You're thinking of Library";
                    }
                }
            }
        }
    }
}

