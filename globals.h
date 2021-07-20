#pragma once

// ******************** Constants/Global Variables *************************
#define X	1
#define O	-1
#define Empty 0

#define boardSize 3

// Used to determine which mode to initiate
// 1 for player vs AI, 2 for player vs player
extern int gameMode;

// ******************** Classes *************************
// Forward declaration of class gameState, defined in gameState.h
class GameState;

// ******************** Function Prototypes *************************
// Prototype of playMove function:
// Un-comment this when getting ready to code
// void playMove(GameState&)

// Prints starting menu that allows users to select to play vs AI or another person
void printStartMenu();

// Prints the board:
void printBoard();