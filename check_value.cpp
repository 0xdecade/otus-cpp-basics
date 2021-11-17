#include <iostream>

bool checkValue(int targetValue, int currentValue)
{
	bool result = false;
	if (targetValue > currentValue)
	{
		std::cout << "greater than " << currentValue << std::endl;
	}
	else if (targetValue < currentValue)
	{
		std::cout << "less than " << currentValue << std::endl;
	}
	else
	{
		result = true;
	}
	return result;
}