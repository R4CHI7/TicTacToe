#ifndef TIC_TAC_TOE_HPP
#define TIC_TAC_TOE_HPP

#include <vector>

class TicTacToe
{
private:
	char board[9];
	char turn;

public:
	TicTacToe(char);
	~TicTacToe();
	void drawBoard();
	void aiTurn();
	void playerTurn();
	int minimax();
	int gameFinish();
	void play();
};

#endif