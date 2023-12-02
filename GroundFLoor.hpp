#pragma once
#include<string>
#include<iostream>
#include"Locations.hpp"
#include"Extras.hpp"

class GroundFloor : public Locations
{
public:
    std::string option;
    
    // GroundFloor() = default;

    bool westDirection();
    bool northDirection();
    bool centralDirection();
    bool courtyard();
    bool classroom();
    bool multiStory();
    bool famousPerson();
    void questionOrder();

};
