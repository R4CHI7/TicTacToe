all: TicTacToe

TicTacToe: game.o tictactoe.o
	@echo "Building Executable"
	@g++ game.o tictactoe.o -o tic-tac-toe

game.o: game.cpp
	@echo "Compiling game.cpp"
	@g++ -c game.cpp

tictactoe.o: tictactoe.cpp
	@echo "Compiling tictactoe.cpp"
	@g++ -c tictactoe.cpp

clean:
	@echo "Cleaning.."
	@rm -f *.o tic-tac-toe