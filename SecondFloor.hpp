#pragma once
#include<string>
#include<iostream>
#include"Locations.hpp"
#include"Extras.hpp"

class SecondFloor : public Locations
// Declares a class named SecondFloor that inherits from the Locations class
{
public:
    // Public members of the class can be accessed from outside the class

    std::string option;
    // Declares a string variable named 'option', probably to store the user's choice or response

    // The following are declarations of member functions. Each function takes a reference
    // to a Game object as its parameter and returns a boolean value. They are likely
    // intended to handle different aspects or scenarios within the second floor of the game.

    bool northDirection(Game& game);
    // Function to determine if the player's desired direction is north

    bool leadersPlace(Game& game);
    // Function to check if the area is used for high-level executive decision-making

    bool marketingPlace(Game& game);
    // Function to ascertain if the area is dedicated to marketing and IT operations

    bool collabPlace(Game& game);
    // Function to determine if the area is designed for creative collaboration

    void questionOrder();
    // Function to define the order in which questions are asked
};