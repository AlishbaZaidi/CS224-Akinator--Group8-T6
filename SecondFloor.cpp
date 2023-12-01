#include <string>
#include <iostream>
#include "SecondFloor.hpp"

// SecondFloor() = default;

bool SecondFloor :: northDirection(){
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

bool SecondFloor :: leadersPlace(){
    std::cout << "Is this area primarily used for high-level executive decision-making?" << "\n";
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

bool SecondFloor :: marketingPlace(){
    std::cout << "Is this area dedicated to marketing, communication, and information technology operations?" << "\n";
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

bool SecondFloor :: collabPlace(){
    std::cout << "Is this area designed for creative collaboration and innovative thinking?" << "\n";
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

void SecondFloor :: questionOrder(){
    bool north = northDirection();
    if(north){
        bool pod = leadersPlace();
        if(pod){
            std::cout<<"President Pod it is!";
        }
        else{
            int num1 = NewRandomNumGenerator(2);
            if(num1 == 1){
                bool collab = collabPlace();
                if(collab){
                    std::cout<<"WOHOOOO!!! It's Playground";
                } 
                else{
                    std::cout<<"It seems like it's Marcomm/IT Dept";
                }
            }
            else{
                bool market = marketingPlace();
                if(market){
                    std::cout<<"It seems like it's Marcomm/IT Dept";
                }
                else{
                    std::cout<<"WOHOOOO!!! It's Playground";
                }
            }
        }
    }
    else{
        std::cout<<"WOOHOOOOO!!! You are thinking of SFCL";
    }
};