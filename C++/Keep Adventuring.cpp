#include "pch.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <chrono>
#include <Windows.h>
using namespace std;

// Functions
void story();
void adventure();
void yesNo();
// Global Constants
char choice;
int health = 30; // health
int treasure = 0; // Treasure

// Main 
int main() {
	// Using my functions
	story();
	yesNo();
	while (choice != 'n' && health > 0 || health < 0) {
		adventure();
	}
    cout << "\nYour adventure is over, and you head home with " << health << " health and " << treasure << " treasure\n";
}

// This is to give me a different number of treasure to find
int diceRoll(int sides) {
	int dice = rand() % sides + 1;
	return dice;
}

// This is to give me a different number of health to use
int lifeRoll(int life) {
	int HP = rand() % life + 1;
	return HP;
}

// The very first line of the story
void story() {
	cout << "Your health is at " << health << endl;
}

// Where the adventure game is at
void adventure() {
	cout << "\nAdventure time!\n";
	srand(time(0));
	// diceRoll(6); Commented out instead of deleting
	int Tres = diceRoll(6);
	int hP = lifeRoll(10);
	cout << "You lose " << hP << " hp on your adventure and find " << Tres << " piece(s) of treasure.\n";
	treasure += Tres;
	health -= hP;
	cout << "The amount of treasure you have is: \n";
	cout << treasure;
	yesNo();	
}

// Asking to continue the adventure or not
void yesNo() {
	cout << "\nWould you like to take an adventure?\n";
	cout << "(y/n) >> ";
	cin >> choice;
	while (choice == 'n') {
		break;
	}
}
