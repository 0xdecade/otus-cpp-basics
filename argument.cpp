#include <iostream>

void setMax(int value, int &max)
{
    max = value;
    std::cout
        << "You have overridden the maximum guessable number by "
        << value
        << std::endl
        << "Good luck!"
        << std::endl;
}
