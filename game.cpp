#include <iostream>
#include "game.h"
#include "random_value.h"
#include "check_value.h"
#include "high_scores.h"

void gameLoop(unsigned int &secretNumber, std::string &username)
{
    unsigned int attempts = 0;
    unsigned int guess;

    while (true)
    {
        ++attempts;
        std::cout << "Enter your guess:";
        std::cin >> guess;
        if (std::cin.fail())
        {
            std::cout << "Bad value!" << std::endl;
            exit(1);
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
}
