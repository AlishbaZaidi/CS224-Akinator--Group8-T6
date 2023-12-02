#pragma once
#include<string>
#include<iostream>
#include"Locations.hpp"
#include"Extras.hpp"

class SecondFloor : public Locations
{
public:
    std::string option;
    
    // SecondFloor() = default;

    bool northDirection(Game& game);
    bool leadersPlace(Game& game);
    bool marketingPlace(Game& game);
    bool collabPlace(Game& game);
    void questionOrder();

};