#include "Food.h"
#include<iostream>

const char* TodayMeal(char c)
{
    if (c == 'A' || c == 'a')
        return "Apple";
    else if (c == 'B' || c == 'b')
        return "Bakery";
    else return "pizza";

}
void drink()
{
    std::cout << " In drink we provide you coke and sprite " << std::endl;
}