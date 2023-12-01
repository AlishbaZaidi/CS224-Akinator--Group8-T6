#pragma once
#include<string>
#include<iostream>
#include"Locations.hpp"
#include"Extras.hpp"

class LowerGroundFloor : public Locations
{
public:
    std::string option;

    bool eastDirection();
    bool centralDirection();
    bool maleRestricted();
    bool cockroach();
    bool groupStudy();
    bool famousName();
    bool openArea();
    bool events();
    bool stage();
    void questionOrder();
};