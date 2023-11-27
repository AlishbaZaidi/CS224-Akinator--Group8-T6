#pragma once
#include<string>
#include<iostream>
#include"Locations.hpp"
#include"Extras.hpp"

class FirstFloor : public Locations
{
public:
    std::string option;
    
    // FirstFloor() = default;

    bool eastDirection();
    bool northDirection();
    bool smokingArea();
    bool capacity();
    bool lectureHall();
    bool multiStory();
    bool onlyFaculty();
    void questionOrder();

};