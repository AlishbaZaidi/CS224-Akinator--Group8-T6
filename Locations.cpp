#include<string>
#include <iostream>
#include <cstdlib>
#include <ctime>

class locations
{
private:
    /* data */
public:
    locations(/* args */);
    ~locations();
    bool reception(){return false;}
    bool parking()
    {
        std::cout<<"is there a parking on this floor?" <<"\n";
        std::cin >> option;
        if (option == "yes"){piano = true; return true;}else{return false;}
    }
    bool pianoroom()
    {
        std::cout<<"does piano room is on the same floor?" <<"\n";
        std::cin >> option;
        if (option == "yes"){park = true; return true;}else{return false;}
    }
    bool newconstructed(){return false;}
    bool divisions(){return false;}

protected:
    std::string direction, floor, option;
    bool piano, newmade, divide, park;
};

class randomquestion
{
private:
    /* data */
public:
    randomquestion();
    ~randomquestion();

    bool isInArray(int value, const int* arr) 
    {
        for (int i = 0; i < 5; ++i) {
            if (arr[i] == value) {
                return true;
            }
        }
        return false;
    }

    std::string randomnumgenerateor()
    {
        locations area;
        int arr[2] = {};
        bool returntype = false;


        while(returntype == false){
            std::srand(static_cast<unsigned int>(std::time(nullptr)));
            int randomInt;

            do {
                randomInt = std::rand() % 2;
            } while (isInArray(randomInt, arr));

            for (int i = 0; i < 2; ++i) {
                if (arr[i] == 0) {
                    arr[i] = randomInt;
                    break;
                }
            }
        
            if (randomInt == 0)
            {
                returntype = area.parking();
            }else
            {
                returntype = area.pianoroom();
            }
        }
        return "Hak";
    }

};

int main(int argc, char const *argv[])
{
    //make a while loop here and make it using the base condition true
    randomquestion num;
    num.randomnumgenerateor();
    
    return 0;
}




//!hehehhehehe