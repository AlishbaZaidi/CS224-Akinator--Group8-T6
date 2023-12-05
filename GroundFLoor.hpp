// This line is a header guard to prevent multiple inclusions of this header file.
#pragma once

// Including necessary header files.
#include<string>  // For using the std::string type
#include<iostream> // For input and output operations
#include"Locations.hpp" // Including the Locations base class header
#include"Extras.hpp"    // Including additional necessary declarations

// Declaration of the GroundFloor class which inherits publicly from the Locations class
class GroundFloor : public Locations
{
public:
    // Member variable 'option' of type std::string to store the player's choice
    std::string option;
    
    // The following lines declare member functions of the GroundFloor class.
    // Each function takes a reference to a Game object and returns a boolean value.

    // Function to determine if the player's location is in the west direction
    bool westDirection(Game& game);

    // Function to determine if the player's location is in the north direction
    bool northDirection(Game& game);

    // Function to determine if the player's location is central
    bool centralDirection(Game& game);

    // Function to check if the player is thinking of a courtyard
    bool courtyard(Game& game);

    // Function to check if the player is thinking of a classroom
    bool classroom(Game& game);

    // Function to determine if the player's location is a multi-story building
    bool multiStory(Game& game);

    // Function to check if the location is named after a famous person
    bool famousPerson(Game& game);

    // Function to determine if the player is thinking of the Air Court
    bool airCourt(Game& game);

    // Function to determine if the player is thinking of the Water Court
    bool waterCourt(Game& game);

    // Function to determine if the player is thinking of the Fire Court
    bool fireCourt(Game& game);

    // Function to determine if the player is thinking of the Earth Court
    bool earthCourt(Game& game);

    // Function to check if the player is thinking of a comfort zone (like a lounge)
    bool comfortZone(Game& game);

    // Function to check if the location is known for hygienic food
    bool hygenicFood(Game& game);

    // Function to determine if the player is thinking of a lecture hall
    bool lectureHall(Game& game);

    // Function to check if the location contains multiple offices
    bool multipleOffices(Game& game);

    // Function to determine if the location is used for event discussions
    bool eventsKarao(Game& game);

    // Function to check if the location is dedicated to wellness
    bool wellness(Game& game);

    // Function to determine if the location is a career office
    bool careerOffice(Game& game);

    // Function to determine the order of questions asked to the player
    void questionOrder();
};