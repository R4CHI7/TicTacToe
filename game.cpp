#include "tictactoe.hpp"

#include <iostream>
#include <cstring>

void printUsage(const char *name)
{
	std::cout << "\nUSAGE:";
	std::cout << "\n" << name << " <first_turn>(p/c) [ai_level](1/2/3)";
	std::cout << "\n\tfirst_turn: p means player moves first";
	std::cout << "\n\tfirst_turn: c means computer moves first";
	std::cout << "\n\tai_level: 1 means a very dumb computer";
	std::cout << "\n\tai_level: 2 means a bit intelligent (default)";
	std::cout << "\n\tai_level: 3 means you better watch out!";
	std::cout << "\n\nPlayer's symbol will be O and Computer's symbol will be X";
}

int main(int argc, char const *argv[])
{
	TicTacToe *gameObj;
	int ai;
	if(argc < 2 || argc > 4 || (argv[1][0] != 'p' && argv[1][0] != 'c') || argv[1][1] != '\0')
	{
		printUsage(argv[0]);
		return 1;
	}

	if(argc == 2)
		ai = 2;
	else
		ai = argv[2][0] - '0';

	if(ai > 3)
		ai = 3;

	gameObj = new TicTacToe(argv[1][0], ai);
	gameObj->play();
	delete gameObj;
	return 0;
}