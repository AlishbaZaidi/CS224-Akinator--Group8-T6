#pragma once
#include<string>
#include<iostream>
#include"Locations.hpp"
#include"Extras.hpp"
// #include"game.hpp"

// Declares a class named LowerGroundFloor that inherits from the Locations class

class LowerGroundFloor : public Locations
{
public:
    // Public members of the class can be accessed from outside the class

    std::string option;
    // Declares a string variable named 'option', probably to store the user's choice

    // The following are declarations of member functions. Each function takes a reference
    // to a Game object as its parameter and returns a boolean value. They are likely
    // intended to handle different aspects or scenarios within the lower ground floor of the game.

    bool eastDirection(Game& game);
    // Function to determine if the player's desired direction is east

    bool centralDirection(Game& game);
    // Function to check if the player is thinking of a central location

    bool maleRestricted(Game& game);
    // Function to ascertain if the location is restricted to males

    bool cockroach(Game& game);
    // Function to determine if the location has cockroaches

    bool groupStudy(Game& game);
    // Function to find out if the location is a group study area

    bool famousName(Game& game);
    // Function to check if the location is named after a famous person

    bool openArea(Game& game);
    // Function to determine if the location is an open area

    bool events(Game& game);
    // Function to find out if events take place in the location

    bool stage(Game& game);
    // Function to check if there is a stage at the location

    void questionOrder();
    // Function to define the order in which questions are asked
};