#include <iostream>

#include <cstdlib>
#include <ctime>

unsigned int getRandomNumber(int max)
{
	std::srand(std::time(nullptr));
	return std::rand() % max;
}
