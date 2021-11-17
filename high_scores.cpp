#include <iostream>
#include <fstream>
#include <string>

const std::string highScoresFilename{"high_scores.txt"};

void showHighScores()
{
	std::ifstream in_file{highScoresFilename};
	if (!in_file.is_open())
	{
		std::cout << "Failed to open file for read: " << highScoresFilename << "!" << std::endl;
		return;
	}

	std::cout << "High scores table:" << std::endl;

	std::string username;
	int high_score = 0;
	while (true)
	{
		// Read the username first
		in_file >> username;
		// Read the high score next
		in_file >> high_score;
		// Ignore the end of line symbol
		in_file.ignore();

		if (in_file.fail())
		{
			break;
		}

		// Print the information to the screen
		std::cout << username << '\t' << high_score << std::endl;
	}
}

void saveResult(std::string userName, unsigned int attempts)
{
	std::ofstream outFile{highScoresFilename, std::ios_base::app};
	if (!outFile.is_open())
	{
		std::cout << "Failed to open file for write: " << highScoresFilename << "!" << std::endl;
		return;
	}

	outFile << userName << ' ';
	outFile << attempts;
	outFile << std::endl;
}
