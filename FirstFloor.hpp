#pragma once // Ensure that the header file is included only once during compilation

// Include necessary libraries and header files
#include <string>
#include <iostream>
#include "Locations.hpp"
#include "Extras.hpp"

// Define the FirstFloor class, inheriting from the Locations class
class FirstFloor : public Locations
{
public:
 // Declare a public member variable to store user input
    std::string option;

    // Functions to inquire about different aspects of the first floor
    bool eastDirection(Game& game);
    bool northDirection(Game& game);
    bool smokingArea(Game& game);
    bool capacity(Game& game);
    bool lectureHall(Game& game);
    bool multiStory(Game& game);
    bool onlyFaculty(Game& game);

    // Function to determine the order of questions and display outcomes
    void questionOrder();
};
