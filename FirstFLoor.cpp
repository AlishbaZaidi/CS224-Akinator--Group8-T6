
#include <string>
#include <iostream>
#include "FirstFloor.hpp"

// FirstFloor::FirstFloor(){}


bool FirstFloor::eastDirection() 
    {
        std::cout << "Is the location you are thinking in East?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

bool FirstFloor::northDirection() 
    {
        std::cout << "Is the location you are thinking in North?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

bool FirstFloor::smokingArea()
    {
        std::cout << "Are you thinking of a smoking area?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else 
        {
            return false;
        }

    }
    
bool FirstFloor::capacity()
    {
        std::cout << "Is the capacity of the room you are thinking 350+?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
bool FirstFloor::lectureHall()
    {
        std::cout << "Are you thinking of a Lecture Hall?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

bool FirstFloor::multiStory()
    {
        std::cout << "Is your location found on multiple floors?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

bool FirstFloor::onlyFaculty()
    {
        std::cout << "Is this location reserved for faculty?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

void FirstFloor::questionOrder()
    {
        int num1 = NewRandomNumGenerator(2);
        if (num1 == 1)
        {
            bool east = eastDirection();
            if (east)
            {
                bool lec = lectureHall();
                if (lec)
                {
                    bool cap = capacity();
                    if (cap)
                    {
                        std::cout<<"WOHOOOO! Your location is Auditorium";
                    }
                    else
                    {
                        std::cout<<"WOHOOOO! Your location is Tariq Rafi";
                    }
                }
                else
                {
                    int num2 = NewRandomNumGenerator(2);
                    if (num2 == 1)
                    {
                        bool nasha = smokingArea();
                        if (nasha)
                        {std::cout<<"WOHOOOO! Your location is Mehfil";}
                        else {std::cout<<"WOHOOOO! Your location is Library";}
                    }
                    else
                    {
                        bool parhaku = multiStory();
                        if (parhaku)
                        {std::cout<<"WOHOOOO! Your location is Library";}
                        else{std::cout<<"WOHOOOO! Your location is Mehfil";}
                    }
                }
            }
            else  //east false
            {
                int num3 = NewRandomNumGenerator(2);
                    if (num3 == 1)
                    {
                        bool nasha = smokingArea();
                        if (nasha)
                        {std::cout<<"WOHOOOO! Your location is Baithak";}
                        else {std::cout<<"WOHOOOO! Your location is Dean's Pod";}
                    }
                    else
                    {
                        bool dir = northDirection();
                        if (dir)
                        {std::cout<<"WOHOOOO! Your location is Dean's Pod";}
                        else{std::cout<<"WOHOOOO! Your location is Baithak";}
                    }
            }
    }else
    {
        bool nasha = smokingArea();
        if (nasha)
        {
            bool faculty = onlyFaculty();
            if (faculty)
            {std::cout<<"WOHOOOO! Your location is Mehfil";}
            else{std::cout<<"WOHOOOO! Your location is Baithak";}
        }
        else
        {
            bool lec = lectureHall();
            if (lec)
            {
                bool cap = capacity();
                    if (cap)
                    {
                        std::cout<<"WOHOOOO! Your location is Auditorium";
                    }
                    else
                    {
                        std::cout<<"WOHOOOO! Your location is Tariq Rafi";
                    }
            }
            else
            {
                int num4 = NewRandomNumGenerator(2);
                if (num4 == 1)
                {
                    bool parhaku = multiStory();
                    if (parhaku)
                    {std::cout<<"WOHOOOO! Your location is Library";}
                    else{std::cout<<"WOHOOOO! Your location is Dean's Pod";}
                }
                else
                {
                    bool dir = northDirection();
                    if (dir)
                    {std::cout<<"WOHOOOO! Your location is Dean's Pod";}
                    else{std::cout<<"WOHOOOO! Your location is Library";}
                }
            }
        }
    }
}
