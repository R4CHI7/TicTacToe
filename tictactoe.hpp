#ifndef TIC_TAC_TOE_HPP
#define TIC_TAC_TOE_HPP

#include <vector>

class TicTacToe
{
private:
	char board[9];
	char turn;
	int aiLevel;

public:
	TicTacToe(char, int);
	~TicTacToe();
	void drawBoard();
	void aiTurn();
	void playerTurn();
	int minimax(char player);
	int gameFinish();
	void play();
};

#endif