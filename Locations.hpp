#pragma once
#include<string>
#include <iostream>
#include"Extras.hpp"
#include "game.hpp"
#include <ctime>

// Begin definition of the Locations class
class Locations
{
public:
    // Public section of the class, members are accessible from outside the class

    std::string direction, floor, option;
    // Declares three string variables: 'direction', 'floor', and 'option'

    bool piano = false;
    bool newmade = false;
    bool divide = false;
    bool park = false;
    bool reception = false;
    // Declares boolean variables with initial values set to false. These likely represent game states or conditions.

    
    bool Ground(Game& game);
    // Declares a member function named 'Ground' that takes a reference to a Game object and returns a boolean

    bool LowerGround(Game& game);
    // Declares a member function named 'LowerGround' similar to 'Ground'

    bool First(Game& game);
    // Declares a member function named 'First' similar to 'Ground'

    bool Second(Game& game);
    // Declares a member function named 'Second' similar to 'Ground'

    bool Fourth(Game &game);
    // Declares a member function named 'Fourth' similar to 'Ground'

    void ourFloor();
    // Declares a member function named 'ourFloor' that does not return a value

    void updateFloor();
    // Declares a member function named 'updateFloor' that does not return a value

    virtual void questionOrder(){};
    // vPure virtual function
};