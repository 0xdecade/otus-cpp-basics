#include <iostream>
#include <vector>
#include "high_scores.h"

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
        level = levels[selectedLevel - 1];
}

void checkArgs(int &argc, char **argv, int &max_value)
{
    std::string param;

    if (argc >= 4)
    {
        std::cout << "Wrong usage! Only one argument can be set at a time!" << std::endl;
        exit(1);
    }

    if (argc == 2)
    {
        param = argv[1];

        if (param == "-table")
        {
            showHighScores();
            exit(0);
        }
    }

    if (argc == 3)
    {
        int paramValue = std::stoi(argv[2]);
        if (param == "-max")
            setMax(paramValue, max_value);
        if (param == "-level")
            setLevel(paramValue, max_value);
    }
    else
    {
        std::cout << "Wrong usage! The argument " << param << " requires some value!" << std::endl;
        exit(1);
    }
}
