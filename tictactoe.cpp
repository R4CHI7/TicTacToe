#include "tictactoe.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>						// For srand

TicTacToe::TicTacToe(char t, int ai)
{
	for (int i = 0; i < 9; ++i)
		board[i] = ' ';
	turn = t;
	aiLevel = ai;
}

TicTacToe::~TicTacToe()
{
	std::cout << "Nice playing with you.. Goodbye!\n";
}

void TicTacToe::drawBoard()
{
	for (int i = 0; i < 25; ++i)
		std::cout << "\n";
	std::cout << " " << board[0] << " | " << board[1] << " | " << board[2] << "\n";
	std::cout << "-----------" << "\n";
	std::cout << " " << board[3] << " | " << board[4] << " | " << board[5] << "\n";
	std::cout << "-----------" << "\n";
	std::cout << " " << board[6] << " | " << board[7] << " | " << board[8] << "\n";
}

int TicTacToe::minimax()
{

}

void TicTacToe::aiTurn()
{
	int i;
	if(aiLevel == 1)
	{
		for (i = 0; i < 9; ++i)
		{
			if(board[i] == ' ')
				break;
		}
		board[i] = 'X';
	}

	else if(aiLevel == 2)
	{
		while(true)
		{
			srand(time(NULL));
			int index = rand() % 9;
			if(board[index] == ' ')
			{
				board[index] = 'X';
				break;
			}
		}
	}
	drawBoard();
}

void TicTacToe::playerTurn()
{
	int x, y, index;
	std::cout << "\nEnter your move's position in the format <X Y> (1 <= X <= 3, 1 <= Y <= 3): ";
	std::cin >> x >> y;
	if(x < 1 || x > 3 || y < 1 || y > 3)
	{
		std::cout << "\nPlease, enter a valid move!";
		playerTurn();
	}
	index = 3*(x-1) + (y-1);
	if(board[index] != ' ')
	{
		std::cout << "\nThis space is occupied! Try again.";
		playerTurn();
	}

	board[index] = 'O';
	drawBoard();
}

int TicTacToe::gameFinish()
{
	int wins[8][3] = {{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
	int i;
	for(i = 0; i < 8; ++i) {
		if(board[wins[i][0]] != ' ' &&
			board[wins[i][0]] == board[wins[i][1]] &&
			board[wins[i][0]] == board[wins[i][2]])
			{
				if(board[wins[i][2]] == 'O')
					return 0;
				else
					return 1;
			}
	}
	return -1;
}

void TicTacToe::play()
{
	int winner;
	drawBoard();
	for (int i = 0; i < 9; ++i)
	{
		if(turn == 'p')
		{
			turn = 'c';
			playerTurn();
		}

		else
		{
			turn = 'p';
			aiTurn();
		}

		winner = gameFinish();
		if(winner != -1)
			break;
	}

	if(winner == -1)
	{
		std::cout << "\nGame Draw!";
	}

	else if(winner == 0)
	{
		std::cout << "\nCongrats! You Win!";
	}

	else
	{
		std::cout << "\nBoo! You lost to the computer!";
	}

}