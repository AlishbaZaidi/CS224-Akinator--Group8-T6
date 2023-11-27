#pragma once
#include<iostream>



bool newisInArray(int value, const int* arr, int size)
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

int NewRandomNumGenerator (int range)
{
    int num = (std::rand() % range)+1;
    return num;
}