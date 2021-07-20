#pragma once

#include "globals.h"

class GameState {
private:
	int selectedRow;			// Game board row coordinate selected
	int selectedColumn;			// Game board column coordinates selected
	bool moveValid;				// Whether a player move is valid or not
	bool gameOver;				// Game over as a result of the last played turn
	int winCode;				// Wincodes - for book keeping purposes
	bool turn;					// Whether it's X or O's turn to go
	int gameBoard[boardSize][boardSize];

public:
	// Constructor: initializes selectedRow/Column to 0, moveValid to true, gameOver to false, winCode to 0, turn to true (X player moves first)
	// gameBoard locations will be empty
	GameState();

	// Returns selected row
	int getSelectedRow();

	// Returns selected column
	int getSelectedColumn();

	// Set selected row to a specific value within bounds
	void setSelectedRow(int value);

	// Set selected column to a specific value within bounds
	void setSelectedColumn(int value);

	// See if move is valid
	bool getMoveValid();

	// Updated moveValid variable
	void setMoveValid(bool value);

	// Get gameOver value
	bool getGameOver();

	// Update gameOver value
	void setGameOver(bool value);

	// Get wincode value (for bookkeeping)
	int getWinCode();
	
	// Set wincode value (for bookkeeping)
	void setWinCode(int value);

	// Get value of turn
	bool getTurn();

	// Set value of turn
	void setTurn(bool value);

	// Get game board value at row and col
	int getGameBoard(int row, int col);

	// Set game board value at row and col
	void setGameBoard(int row, int col, int value);
};