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

    void GroundFloor::questionOrder(){

    };

};
