all: TicTacToe

TicTacToe: game.o tictactoe.o
	g++ game.o tictactoe.o -o tic-tac-toe

game.o: game.cpp
	g++ -c game.cpp

tictactoe.o: tictactoe.cpp
	g++ -c tictactoe.cpp