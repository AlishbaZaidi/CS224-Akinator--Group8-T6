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

    bool westDirection(Game& game);
    bool northDirection(Game& game);
    bool centralDirection(Game& game);
    bool courtyard(Game& game);
    bool classroom(Game& game);
    bool multiStory(Game& game);
    bool famousPerson(Game& game);
    bool airCourt(Game& game);
    bool waterCourt(Game& game);
    bool fireCourt(Game& game);
    bool earthCourt(Game& game);
    bool comfortZone(Game& game);
    bool hygenicFood(Game& game);
    bool lectureHall(Game& game);
    bool multipleOffices(Game& game);
    bool eventsKarao(Game& game);
    bool wellness(Game& game);
    bool careerOffice(Game& game);
    void questionOrder();

};