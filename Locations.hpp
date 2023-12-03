#pragma once
#include <string>
#include <iostream>
#include "Extras.hpp"
#include "game.hpp"
#include <ctime>

class Locations {
private:
    // Private data members (if any)

public:
    std::string direction, floor, option;
    bool piano = false;
    bool newmade = false;
    bool divide = false;
    bool park = false;
    bool reception = false;

    // Public member functions
    // Locations() = default; 

    // Function to handle events on the Ground floor
    bool Ground(Game& game);

    // Function to handle events on the Lower Ground floor
    bool LowerGround(Game& game);

    // Function to handle events on the First floor
    bool First(Game& game);

    // Function to handle events on the Second floor
    bool Second(Game& game);

    // Function to handle events on the Fourth floor
    bool Fourth(Game& game);

    // Function to display the current floor
    void ourFloor();

    // Function to update the current floor based on user choices
    void updateFloor();
};
