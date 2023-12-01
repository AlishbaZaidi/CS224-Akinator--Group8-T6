#include <string>
#include <iostream>
#include "LowerGroundFloor.hpp"

bool LowerGroundFloor::eastDirection() 
    {
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
    }

bool LowerGroundFloor::centralDirection() 
    {
        std::cout << "Is the location you are thinking a central location?" << "\n";
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

bool LowerGroundFloor::maleRestricted()
{
        std::cout << "Is the location you are thinking restricted for males?" << "\n";
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

bool LowerGroundFloor::cockroach()
{
        std::cout << "Are cockroaches and lizards found at your desired location?" << "\n";
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

bool LowerGroundFloor::groupStudy()
{
        std::cout << "Is that place an isolated learning spot?" << "\n";
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

bool LowerGroundFloor::famousName()
{
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
    }

bool LowerGroundFloor::openArea()
{
        std::cout << "Is the location you're of at open area?" << "\n";
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

bool LowerGroundFloor::events()
{
        std::cout << "Do events take place at your desired location?" << "\n";
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

bool LowerGroundFloor::stage()
{
        std::cout << "Can a stage be found on your location?" << "\n";
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

void LowerGroundFloor::questionOrder()
{
    bool east = eastDirection();
    if(east){
        bool music = famousName();
        if(music){
            std::cout<<"WOO_HOO!!! Your desired location is Music Room";
        }
        else{
            bool cockroaches = cockroach();
            if(cockroaches){
                std::cout<<"WOO-HOO!! You're thinking of Tapal Cafeteria";
            }
            else{
                bool dhaba = openArea();
                if(dhaba){
                    std::cout<<"Dhaba souch rahey hou na hehe";
                }
                else{
                    std::cout<<"Easy hougaya bhai! Aap tou Dukaan ki baat kar rahey!";
                }
            }
        }
    }
    else{
        bool central = centralDirection();
        if(central){
            bool eventPlace = events();
            if(eventPlace){
                bool stages = stage();
                if(stages){
                    std::cout<<"WOO-HOO!! You're thinking of Amphitheatre";
                }
                else{
                    std::cout<<"WOO-HOO!! You're thinking of Courts";
                }
            }
            else{
                std::cout<<"WOO-HOO! It's Gym";
            }
        }
        else{
            bool fLounge = maleRestricted();
            if(fLounge){
                std::cout<<"WOO-HOO! Khawateen Lounge";
            }
            else{
                bool study = groupStudy();
                if(study){
                    std::cout<<"WOO-HOO!! You're thinking of Learn Courtyard";
                }
                else{
                    std::cout<<"WOO-HOO!! You're thinking of the Parking areas";
                }
            }
        }
    }
}
