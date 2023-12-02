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
    bool airCourt();
    bool waterCourt();
    bool fireCourt();
    bool earthCourt();
    bool comfortZone();
    bool hygenicFood();
    bool lechturaHall();
    bool multipleOffices();
    bool eventsKarao();
    bool wellness();
    bool careerOffice();
    void questionOrder();

};
