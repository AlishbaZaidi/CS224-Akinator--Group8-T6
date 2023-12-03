// Ensure that the header file is included only once during compilation
#pragma once

// Include necessary libraries and header files
#include <string>
#include <iostream>
#include "Locations.hpp"
#include "Extras.hpp"

// Define the FourthFloor class, inheriting from the Locations class
class FourthFloor : public Locations {
public:
    // Declare a public member variable to store user input
    std::string option;

    // Declare functions to inquire about specific characteristics of a location
    bool blueTheme(Game& game);
    bool hangOut(Game& game);
    bool openArea(Game& game);
    bool cafe(Game& game);

    // Declare a function to determine the order of questions and display outcomes
    void questionOrder();
};
