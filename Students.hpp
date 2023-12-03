#pragma once
#include<string>
#include<iostream>
#include"Extras.hpp"
#include"game.hpp"

class Students
{
public:
    std::string option;

    bool genderM(Game& game);
    bool birthdayMonth(Game& game);
    bool outstation(Game& game);
    bool initialM(Game& game);
    bool school(Game& game);
    bool majorCS(Game& game);
    bool majorEE(Game& game);
    bool bdayStar(Game& game);
    bool calculusRepeat(Game& game);
    void questionOrder();

};