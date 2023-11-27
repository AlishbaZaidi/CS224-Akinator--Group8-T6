#include<string>
#include <iostream>
#include "Locations.hpp"
// #include"Extras.cpp"
// #include"main.cpp"
// #include <ctime>

// Locations::Locations(){}

bool Locations::Ground() 
    {
        std::cout << "Is there reception on this floor?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            reception = true;
            return true;
        }
        else
        {
            return false;
        }
    }
bool Locations::LowerGround()
    {
        std::cout << "Is there parking on this floor?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            park = true;
            return true;
        }
        else
        {
            return false;
        }
    }
bool Locations::First()
    {
        std::cout << "Is the piano room on the same floor?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            piano = true;
            return true;
        }
        else
        {
            return false;
        }
    }
bool Locations::Second() 
    {
        std::cout << "Does this floor have two divisions?" << "\n";
        std::cin >> option;
        if (option == "yes")
        {
            divide = true;
            return true;
        }
        else
        {
            return false;
        } 
    }

void Locations::ourFloor()
    {
        bool returntype = false;
        int arr[4] = {0, 0, 0, 0};
        while (!returntype)
        {
            int number = NewRandomNumGenerator(4);
            while (newisInArray(number, arr, 4))
            {
                number = NewRandomNumGenerator(4);
            }
            for (int i = 0; i < 4; i++)
            {
                if (arr[i] == 0)
                {
                    arr[i] = number;
                    break; 
                }
            }
            if (number = 1)
            {
                returntype = this->Ground();
            }
            else if (number = 2)
            {
                returntype = this->LowerGround();
            }
            else if (number = 3)
            {
                returntype = this->First();
            }
            else if (number = 4)
            {
                returntype = this->Second();
            }
            else
            {
                newmade = true;
                returntype = newmade;
            }
        }
    }

void Locations::updateFloor()
    {
        if (piano == true)
        {
            floor = "First Floor";
        }
        else if (park == true)
        {
            floor = "Lower Ground Floor";
        }
        else if (reception == true)
        {
            floor = "Ground Floor";
        }
        else if (divide == true)
        {
            floor = "Second Floor";
        }
        else
        {
            floor = "Fourth Floor";
        }
    }
