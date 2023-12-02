#include <iostream>
#include"Extras.hpp"
#include"Locations.hpp"
#include"FirstFloor.hpp"
#include"LowerGroundFloor.hpp"
#include"SecondFloor.hpp"
#include"game.hpp"
#include"GroundFLoor.hpp"
#include "FourthFloor.hpp"


int main(int argc, char* argv[])
{
    Game game;
    game.run();
    Locations loc;
    loc.ourFloor();
    loc.updateFloor();
    if (loc.floor == "First Floor")
    {
        FirstFloor FL;
        FL.questionOrder();
    }
    else if(loc.floor == "Lower Ground Floor")
    {

        LowerGroundFloor LGF;
        LGF.questionOrder();
    }
    else if(loc.floor == "Ground Floor")
    {    
            GroundFloor GF;
            GF.questionOrder();
    } 
    else if(loc.floor == "Fourth Floor")
    {
        FourthFloor fl;
        fl.questionOrder();
    }
    else if(loc.floor == "Second Floor")
    {
        SecondFloor SF;
        SF.questionOrder();
    }
    return 0;
}
