#pragma once
#include<string>
#include<iostream>
#include"Locations.hpp"
#include"Extras.hpp"

class FourthFloor : public Locations
{
public:
    std::string option;

    bool blueTheme(Game& game);
    bool hangOut(Game& game);
    bool openArea(Game& game);
    bool cafe(Game& game);
    void questionOrder();

};