#include <iostream>
#include "random_value.h"
#include "check_value.h"
#include "high_scores.h"

int main(int argc, char **argv)
{
    int max_value = 100;

    std::string username = "";
    unsigned int attempts = 0;
    unsigned int secretNumber = getRandomNumber(max_value);
    unsigned int guess;

    std::cout << "Hi! Enter your name, please:" << std::endl;
    std::cin >> username;

    while (true)
    {
        ++attempts;
        std::cout << "Enter your guess:";
        std::cin >> guess;
        if (std::cin.fail())
        {
            std::cout << "Bad value!" << std::endl;
            return 1;
        }
        if (checkValue(secretNumber, guess))
        {
            std::cout << "you win! attempts = " << attempts << std::endl;
            std::cout << std::endl;
            saveResult(username, attempts);
            showHighScores();
            break;
        }
    }

    return 0;
}
