#pragma once
#include<string>
#include<iostream>
#include"Locations.hpp"
#include"Extras.hpp"
// #include"game.hpp"

class LowerGroundFloor : public Locations
{
public:
    std::string option;

    bool eastDirection(Game& game);
    bool centralDirection(Game& game);
    bool maleRestricted(Game& game);
    bool cockroach(Game& game);
    bool groupStudy(Game& game);
    bool famousName(Game& game);
    bool openArea(Game& game);
    bool events(Game& game);
    bool stage(Game& game);
    void questionOrder();
};