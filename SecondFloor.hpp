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

    bool northDirection();
    bool leadersPlace();
    bool marketingPlace();
    bool collabPlace();
    void questionOrder();

};