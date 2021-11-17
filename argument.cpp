#include <iostream>
#include <vector>

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

void setLevel(int selectedLevel, int &level)
{
    std::vector<int> levels{10, 50, 100};
    if (selectedLevel > 0 && selectedLevel <= levels.size())
    {
        level = levels[selectedLevel - 1];
    }
}