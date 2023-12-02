#include <string>
#include <iostream>
#include "GroundFloor.hpp"

class GroundFloor : public Locations
{
public:
    std::string option;
    
    // GroundFloor() = default;

    bool GroundFloor::westDirection(){
        std::cout << "Is the location you are thinking in East?" << "\n";
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
        std::cout << "Is the location you are thinking in East?" << "\n";
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
        std::cout << "Is the location you are thinking in East?" << "\n";
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
        std::cout << "Is the location you are thinking in East?" << "\n";
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
        std::cout << "Is the location you are thinking in East?" << "\n";
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
        std::cout << "Is the location you are thinking in East?" << "\n";
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
        std::cout << "Is the location you are thinking in East?" << "\n";
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
