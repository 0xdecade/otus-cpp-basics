#include <iostream>
#include "argument.h"
#include "high_scores.h"
#include "game.h"

int main(int argc, char **argv)
{
    int max_value = 100;
    std::string username = "";

    checkArgs(argc, argv, max_value);

    unsigned int secretNumber = getRandomNumber(max_value);

    std::cout << "Hi! Enter your name, please:" << std::endl;
    std::cin >> username;

    gameLoop(attempts, guess, secretNumber, username);
    return 0;
}
