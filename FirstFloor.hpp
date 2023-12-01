#pragma once
#include<string>
#include<iostream>
#include"Locations.hpp"
#include"Extras.hpp"

class FirstFloor : public Locations
{
public:
    std::string option;

    bool eastDirection(Game& game);
    bool northDirection(Game& game);
    bool smokingArea(Game& game);
    bool capacity(Game& game);
    bool lectureHall(Game& game);
    bool multiStory(Game& game);
    bool onlyFaculty(Game& game);
    void questionOrder();

};