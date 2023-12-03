#pragma once
#include <string>
#include <iostream>
#include "Extras.hpp"
#include "game.hpp"

class Students
{
public:
    std::string option;

    // Function to inquire about gender
    bool genderM(Game& game);

    // Function to inquire about birthday month
    bool birthdayMonth(Game& game);

    // Function to inquire about outstation status
    bool outstation(Game& game);

    // Function to inquire about initial of the name
    bool initialM(Game& game);

    // Function to inquire about school attendance
    bool school(Game& game);

    // Function to inquire about major in Computer Science
    bool majorCS(Game& game);

    // Function to inquire about major in Electrical Engineering
    bool majorEE(Game& game);

    // Function to inquire about being born on a star sign
    bool bdayStar(Game& game);

    // Function to inquire about repeating calculus
    bool calculusRepeat(Game& game);

    // Function for the order of questions
    void questionOrder();
};
