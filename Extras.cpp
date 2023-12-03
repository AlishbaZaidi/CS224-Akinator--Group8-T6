#include"Extras.hpp"

// Function to generate a new random number within a given range
int NewRandomNumGenerator (int range)
{
    // Generate a random number modulo the range and add 1 for [1, range]
    int num = (std::rand() % range)+1;
    // Return the generated number
    return num;
}

// Function to check if a value is present in an array
bool newisInArray(int value, const int* arr, int size)

    // Iterate over the array to find the value
    {
        for (int i = 0; i < size; ++i)
        {
            if (arr[i] == value)
            {
                return true;
            }
        }
        return false;
    }
