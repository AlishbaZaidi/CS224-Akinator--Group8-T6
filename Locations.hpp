#pragma once
#include<string>
#include <iostream>
#include"Extras.hpp"
#include "game.hpp"
#include <ctime>

class Locations
{
private:
    // I am so lonely
public:
    std::string direction, floor, option;
    bool piano = false;
    bool newmade = false;
    bool divide = false;
    bool park = false;
    bool reception = false;

    // Locations() = default;

    bool Ground(Game& game);
    bool LowerGround(Game& game);
    bool First(Game& game);
    bool Second(Game& game);
    void ourFloor();
    void updateFloor();
};