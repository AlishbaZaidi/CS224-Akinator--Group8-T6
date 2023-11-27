#pragma once
#include<string>
#include <iostream>
#include"Extras.hpp"
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

    bool Ground();
    bool LowerGround();
    bool First();
    bool Second();
    void ourFloor();
    void updateFloor();
};