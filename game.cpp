#include "tictactoe.hpp"

#include <iostream>
#include <cstring>

void printUsage(const char *name)
{
	std::cout << "\nUSAGE:";
	std::cout << "\n" << name << " <first_turn>(p/c)";
	std::cout << "\n\tfirst_turn: p means player moves first";
	std::cout << "\n\tfirst_turn: c means computer moves first";
}

int main(int argc, char const *argv[])
{
	TicTacToe *gameObj;
	if(argc != 2 || (argv[1][0] != 'p' && argv[1][0] != 'c'))
	{
		printUsage(argv[0]);
		return 1;
	}

	gameObj = new TicTacToe(argv[1][0]);
	gameObj->play();
	return 0;
}