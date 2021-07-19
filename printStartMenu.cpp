#pragma once

#include "globals.h"
#include <iostream>

#define vsAI 1
#define vsPerson 2

int gameMode;
int gameModeUserChoice;
bool validChoice;

void printStartMenu() {
	validChoice = false;
	std::cout << "Welcome to Tic Tac Toe!\nWould you like to play vs AI or vs another person?\nType '1' to play against AI, or '2' to play against someone else.\n";
	std::cin >> gameModeUserChoice;

	while (!validChoice) {
		if (gameModeUserChoice == vsAI) {
			std::cout << "\nInitializing AI game...\n";
			validChoice = true;
			return;

		} else if (gameModeUserChoice == vsPerson) {
			std::cout << "\nInitializing 2-player game...\n";
			validChoice = true;
			return;

		} else {
			std::cout << "\nInvalid choice. Please try again:\n";
			std::cin >> gameModeUserChoice;
		}
	}

	return;
}