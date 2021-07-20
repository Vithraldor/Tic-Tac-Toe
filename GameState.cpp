#include "globals.h"
#include "GameState.h"

// Return the selected row (in the range 0..boardSize-1)
int GameState::getSelectedRow() {
	return GameState::selectedRow;
}

// Return the selected column (in the range 0..boardSize-1)
int GameState::getSelectedColumn() {
	return GameState::selectedColumn;
}

// Set the selected row to value in the range (in the range 0..boardSize-1)
// An out of range value is ignored and the function just returns
void GameState::setSelectedRow(int value) {
	GameState::selectedRow = value;
	return;
}

// Set the selected column in the range (in the range 0..boardSize-1)
// An out of range value is ignored and the function just returns
void GameState::setSelectedColumn(int value) {
	GameState::selectedColumn = value;
	return;
}

// Get the moveValid value
bool GameState::getMoveValid() {
	return GameState::moveValid;
}

// Set the moveValid variable to value
void GameState::setMoveValid(bool value) {
	GameState::moveValid = value;
}

// Get the gameOver value
bool GameState::getGameOver() {
	return GameState::gameOver;
}

// Set the gameOver variable to value
void GameState::setGameOver(bool value) {
	GameState::gameOver = value;
	return;
}

// Get the winCode [0..8]
int GameState::getWinCode() {
	return GameState::winCode;
}

// Set the winCode to value in the range (0..8)
// An out of range value is ignored and the function just returns
// Basically just checks if any of the winCode conditions are fulfilled
// Intake value = X or O
void GameState::setWinCode(int value) {

	if (GameState::gameBoard[0][0] == value && GameState::gameBoard[0][1] == value && GameState::gameBoard[0][2] == value) {
		GameState::winCode = 1;
	}

	if (GameState::gameBoard[1][0] == value && GameState::gameBoard[1][1] == value && GameState::gameBoard[1][2] == value) {
		GameState::winCode = 2;
	}

	if (GameState::gameBoard[2][0] == value && GameState::gameBoard[2][1] == value && GameState::gameBoard[2][2] == value) {
		GameState::winCode = 3;
	}

	if (GameState::gameBoard[0][0] == value && GameState::gameBoard[1][0] == value && GameState::gameBoard[2][0] == value) {
		GameState::winCode = 4;
	}

	if (GameState::gameBoard[0][1] == value && GameState::gameBoard[1][1] == value && GameState::gameBoard[2][1] == value) {
		GameState::winCode = 5;
	}

	if (GameState::gameBoard[0][2] == value && GameState::gameBoard[1][2] == value && GameState::gameBoard[2][2] == value) {
		GameState::winCode = 6;
	}

	if (GameState::gameBoard[0][0] == value && GameState::gameBoard[1][1] == value && GameState::gameBoard[2][2] == value) {
		GameState::winCode = 7;
	}

	if (GameState::gameBoard[2][0] == value && GameState::gameBoard[1][1] == value && GameState::gameBoard[0][2] == value) {
		GameState::winCode = 8;
	}
}

// Get the value of turn
bool GameState::getTurn() {
	return GameState::turn;
}

// Set the value of turn
void GameState::setTurn(bool value) {
	if (GameState::turn == true) {
		GameState::turn = value;
	}
	else {
		GameState::turn = value;
	}

	return;
}

// Get the game board value at the board location at row and col
// X = 1, O = -1, Empty = 0
// This method checks that row, col are in range/valid
// and if not it returns Empty
// This is used for printing the game board
int GameState::getGameBoard(int row, int col) {
	if (row < boardSize && col < boardSize && row >= 0 && col >= 0) {
		return GameState::gameBoard[row][col];
	}
	else {
		return Empty;
	}
}

// Set the game board value at the board location at row and col to value
// This method checks that row, col and value are in range/valid and if not it
// just returns
void GameState::setGameBoard(int row, int col, int value) {
	if (row < boardSize && col < boardSize && row >= 0 && col >= 0) {
		GameState::gameBoard[row][col] = value;
	}
	return;
}