#include <iostream>
#include"Extras.hpp"
#include"Locations.hpp"
#include"FirstFloor.hpp"
#include"LowerGroundFloor.hpp"
#include"SecondFloor.hpp"
// #include"GroundFLoor.hpp"


int main()
{
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
    else if(loc.floor == "Second Floor"){
        SecondFloor SF;
        SF.questionOrder();
    }
    // else if(loc.floor == "Ground Floor")
    // {

    // } 
    // else if(loc.floor == "Fourth Floor")
    // {

    
    return 0;
}
