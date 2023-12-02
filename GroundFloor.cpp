#include <string>
#include <iostream>
#include "GroundFloor.hpp"

class GroundFloor : public Locations
{
public:
    std::string option;
    
    // GroundFloor() = default;

    bool GroundFloor::westDirection(){
        std::cout << "Is the location you are thinking in West?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }        
    };

    bool GroundFloor::northDirection(){
        std::cout << "Is the location you are thinking in North?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    };

    bool GroundFloor::centralDirection(){
        std::cout << "Is the location you are thinking a cnetral location?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    };

    bool GroundFloor::courtyard(){
        std::cout << "Is the location you are thinking a courtyard?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    };

    bool GroundFloor::classroom(){
        std::cout << "Is the location you are thinking used as classroom?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    };

    bool GroundFloor::multiStory(){
        std::cout << "Is your location found on multiple floors?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    };

    bool GroundFloor::famousPerson(){
        std::cout << "Is the location you're thinking of named after a famous personality?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    };

    bool GroundFloor::airCourt(){
        std::cout << "Does the location you're thinking has some an invisible force in its name which is essential for life, known for my dance with the leaves, gentle as a whisper yet capable of tempestuous fury, without whom birds would walk and sails would remain motionless?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool GroundFloor::waterCourt(){
        std::cout << "Are you thinking of a location named after a transparent, tasteless, and odorless substance, vital for all known life forms, which covers approximately 71 percent of Earth's surface and can exist in three states: solid, liquid, and gas?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool GroundFloor::fireCourt(){
        std::cout << "Are you considering a location whose name includes a phenomenon known for combustion, characterized by heat, light, and flames, utilized for warmth, cooking, and various technological activities, but also posing a risk of destruction if not controlled?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool GroundFloor::earthCourt(){
        std::cout << "Are you referring to a location whose first name is the same as the third planet from the Sun, a hub of diverse life forms, encompassing extensive oceans and continents, notable for its gravity that keeps everything anchored?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool GroundFloor::comfortZone(){
        std::cout << "Are you thinking of a relaxed space meant for socializing, studying with comfortable seating?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool GroundFloor::hygenicFood(){
        std::cout << "Are you thinking of a location where you get hygienically prepared meals?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool GroundFloor::lechturHall(){
        std::cout << "Are you thinking of a lecture hall?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool GroundFloor::multipleOffices(){
        std::cout << "Does your location contain several offices within it?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool GroundFloor::eventsKarao(){
        std::cout << "Is your chosen location a place where discussions about budget constraints for events are frequently heard?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool GroundFloor::wellness(){
        std::cout << "Is your location dedicated to student health and well-being?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool GroundFloor::careerOffice(){
        std::cout << "Does the location you have in mind play a key role in supporting your future?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }


    void GroundFloor::questionOrder(){
        bool west = westDirection();
        if(west){
            int num1 = NewRandomNumGenerator(2);
            if(num1){
                bool court = courtyard();
                if(court){
                    bool air = airCourt();
                    if(air){
                        std::cout<<"You're thinking of Air Courtyard";
                    }
                    else{
                        bool earth = earthCourt();
                        if(earth){
                            std::cout<<"You're thinking of Earth Courtyard";
                        }
                        else{
                            int num2 = NewRandomNumGenerator(2);
                            if(num2){
                                bool water = waterCourt();
                                if(water){
                                    std::cout<<"You're thinking of Water Courtyard";
                                }
                                else{
                                    std::cout<<"You're thinking of Fire Courtyard";
                                }
                            }
                            else{
                                bool fire = fireCourt();
                                if(fire){
                                    std::cout<<"You're thinking of Fire Courtyard";
                                }
                                else{
                                    std::cout<<"You're thinking of Water Courtyard";
                                }
                            }
                        }
                    }
                }
                else{
                    std::cout<<"You're thinking of Wellness Center";
                }
            }
            else{
                bool well = wellness();
                if(well){
                    std::cout<<"You're thinking of Wellness Center";
                }
                else{
                    bool fire = fireCourt();
                    if(fireCourt){
                        std::cout<<"You're thinking of Fire Courtyard";
                    }
                    else{
                        bool water = waterCourt();
                        if(water){
                            std::cout<<"You're thinking of Water Courtyard";
                        }
                        else{
                            int num3 = NewRandomNumGenerator(2);
                            if(num3){
                                bool air = airCourt();
                                if(air){
                                    std::cout<<"You're thinking of Air Courtyard";
                                }
                                else{
                                    std::cout<<"You're thinking of Earth Courtyard";
                                }
                            }
                            else{
                                bool earth = earthCourt();
                                if(earth){
                                    std::cout<<"You're thinking of Earth Courtyard";
                                }
                                else{
                                    std::cout<<"You're thinking of Air Courtyard";
                                }
                            }
                        }
                    }
                }
            }
        }
        else{
            bool north = northDirection();
            if(north){
                int num3 = NewRandomNumGenerator(2);
                if(num3){
                    bool career = careerOffice();
                    if(career){
                        std::cout<<"You're thinking of Office of Career and Services";
                    }
                    else{
                        std::cout<<"You're thinking of Student Center";
                    }
                }
                else{
                    bool studentcen = multipleOffices();
                    if(studentcen){
                        std::cout<<"You're thinking of Student Center";
                    }
                    else{
                        std::cout<<"You're thinking of Office of Career and Services";
                    }
                }
            }
            else{
                bool central = centralDirection();
                if(central){
                    bool classRoom = classroom();
                    if(classRoom){
                        bool hall = lechturHall();
                        if(hall){
                            std::cout<<"It's Soorty Hall";
                        }
                        else{
                            bool perosnality = famousPerson();
                            if(perosnality){
                                std::cout<<"You're thinking of Arif Habib Classroom";
                            }
                            else{
                                std::cout<<"The location you're thinking is Multipurpose Room";
                            }
                        }

                    }
                    else{
                        int num4 = NewRandomNumGenerator(2);
                        if(num4){
                            bool lounge = comfortZone();
                            if(lounge){
                                std::cout<<"You're thinking of Student Lounge";
                            }
                            else{
                                std::cout<<"You're thinking of Student Life";
                            }
                        }
                        else{
                            bool life = eventsKarao();
                            if(life){
                                std::cout<<"You're thinking of Student Life";
                            }
                            else{
                                std::cout<<"You're thinking of Student Lounge";
                            }
                        }
                    }
                }
                else{
                    int num5 = NewRandomNumGenerator(2);
                    if(num5){
                        bool multi = multiStory();
                        if(multi){
                            std::cout<<"You're thinking of Library";
                        }
                        else{
                            std::cout<<"You're thinking of Cafe2Go";
                        }
                    }
                    else{
                        bool cafe = hygenicFood();
                        if(cafe){
                            std::cout<<"You're thinking of Cafe2Go";
                        }
                        else{
                            std::cout<<"You're thinking of Library";
                        }
                    }
                }
            }
        }
    }

};
