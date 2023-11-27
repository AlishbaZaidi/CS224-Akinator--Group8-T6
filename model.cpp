// #include<string>
// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// class ModelLocations
// {
// private:
// public:
//     std::string direction, floor, option;
//     bool piano= false;
//     bool newmade= false;
//     bool divide= false;
//     bool park= false;

//     ModelLocations() = default;

//     bool reception() { return false; }
//     bool parking()
//     {
//         std::cout << "Is there parking on this floor?" << "\n";
//         std::cin >> option;
//         if (option == "yes")
//         {
//             park = true;
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     bool pianoroom()
//     {
//         std::cout << "Is the piano room on the same floor?" << "\n";
//         std::cin >> option;
//         if (option == "yes")
//         {
//             piano = true;
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     bool newconstructed() { return false; }
//     bool divisions() { return false; }
// };

// class FirstFloor : public ModelLocations
// {
// public:
//     bool library = false;
//     bool audi = false;
//     bool tariqRafi = false;
//     bool CPE = false;
//     bool deansPod = false;
//     std::string option;

//     bool direction()
//     {
//         std::cout << "Is your location in the north direction?" << "\n";
//         std::cin >> option;
//         if (option == "yes")
//         {
//             deansPod = true;
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }

//     bool lectureHalls()
//     {
//         std::string input;
//         std::cout << "Is this a lecture hall?" << "\n";
//         std::cin >> option;
//         if (option == "yes")
//         {
//             audi = true;
//             tariqRafi = true;
//             std::cout << "If the capacity is 350 or more?" << "\n";
//             std::cin >> input;
//             if (input == "yes")
//             {
//                 //std::cout << "Your desired location is Auditorium" << "\n";
//                 tariqRafi = false;
//             }
//             else
//             {
//                 audi = false;
//                 //std::cout << "Your desired location is Tariq Rafi" << "\n";
//             }
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
// };

// class LowerGroundFLoor : public ModelLocations
// {
// public:
//     bool tapal = false;
//     bool gym = false;
//     bool amphi = false;
//     bool musicRoom = false;
// };

// class randomquestionforLocation
// {
// private:

// public:
//     randomquestionforLocation() = default;

//     bool isInArray(int value, const int* arr)
//     {
//         for (int i = 0; i < 2; ++i)
//         {
//             if (arr[i] == value)
//             {
//                 return true;
//             }
//         }
//         return false;
//     }

//     std::string randomnumgeneratorforLocation(ModelLocations& area)
//     {
//         int arr[2] = { -1, -1 };
//         bool returntype = false;

//         while (!returntype)
//         {
//             int randomInt;

//             do
//             {
//                 randomInt = std::rand() % 2;
//             } while (isInArray(randomInt, arr));

//             if (randomInt == 0 && !isInArray(randomInt, arr))
//             {
//                 returntype = area.parking();
//             }
//             else
//             {
//                 returntype = area.pianoroom();
//             }

//             for (int i = 0; i < 2; ++i)
//             {
//                 if (arr[i] == -1)
//                 {
//                     arr[i] = randomInt;
//                     break;
//                 }
//             }
//         }

//         if (area.piano)
//         {
//             return "First Floor";
//         }
//         else if (area.newmade)
//         {
//             return "Fourth Floor";
//         }
//         else if (area.divide)
//         {
//             return "Second Floor";
//         }
//         else if (area.park)
//         {
//             return "Lower Ground Floor";
//         }
//         else
//         {
//             return "Ground Floor";
//         }
//     }
// };

// class randomquestionforFirstFloor
// {
// private:
// public:
//     randomquestionforFirstFloor() = default;

//     bool isInArray(int value, const int* arr)
//     {
//         for (int i = 0; i < 2; ++i)
//         {
//             if (arr[i] == value)
//             {
//                 return true;
//             }
//         }
//         return false;
//     }

//     std::string randomnumgeneratorforFirstFloor(FirstFloor& area)
//     {
//         int arr[2] = { -1, -1 };
//         bool returntype = false;

//         while (!returntype)
//         {
//             int randomInt;

//             do
//             {
//                 randomInt = std::rand() % 2;
//             } while (isInArray(randomInt, arr));

//             if (randomInt == 0 && !isInArray(randomInt, arr))
//             {
//                 returntype = area.direction();
//             }
//             else
//             {
//                 returntype = area.lectureHalls();
//             }

//             for (int i = 0; i < 2; ++i)
//             {
//                 if (arr[i] == -1)
//                 {
//                     arr[i] = randomInt;
//                     break;
//                 }
//             }

//             if (area.audi==true)
//             {
//                 return "WOOO_HOOO! It's Auditorium";
//             }
//             else if(area.tariqRafi==true)
//             {
//                 return "WOOO_HOOO! It's Tariq Rafi";
//             }
//             else if(area.deansPod==true)
//             {
//                 return "WOOO_HOOO! It's Dean's Pod";
//             }
//         }
//         return "Location not determined";
//     }
// };

// int main(int argc, char const* argv[])
// {
//     std::srand(static_cast<unsigned int>(std::time(nullptr)));

//     randomquestionforLocation location;
//     ModelLocations loc;
//     std::string nextClass = location.randomnumgeneratorforLocation(loc);
//     if (nextClass == "Lower Ground Floor")
//     {
//         std::cout << "HAK-IS-KING" << "\n";
//         // LowerGroundFLoor lgfloor;
//     }
//     else if (nextClass == "First Floor")
//     {
//         randomquestionforFirstFloor firstfloor;
//         FirstFloor fFloor;
//         std::string ourLocation = firstfloor.randomnumgeneratorforFirstFloor(fFloor);
//         std::cout << ourLocation;
//     }
//     return 0;
// }
