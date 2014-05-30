Tic Tac Toe
===========

This is an attempt at making an Artificially Intelligent Tic Tac Toe game which can enable a user to play against a computer.

Compiling and Running
---------------------

To build, issue

`make`

This will produce and executable in the directory. Run by issuing

`./tic-tac-toe`

The program expects 2 arguments (1 is optional). These are:
1. First move.
  * **p**: player moves first
  * **c**: computer moves first
2. The AI Level.
  * Level 1: A dumb Computer, fills in the first empty position
  * Level 2: Little smart, randomly selects and empty position
  * Level 3: Minimax applied to search for the best position.

If not given, level 2 is assumed.

Contributing
------------

To contribute:
1. Fork the repo
2. Clone the repo
3. Hack hack hack!
4. Commit and push
5. Send a pull request :)