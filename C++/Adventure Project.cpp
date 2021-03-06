#include "pch.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int main() {
	cout << "\tCrawl out through the Fallout\n";

	string playerName;  //String
	int weapon;	    //Int

	cout << "\nWhat is your player name?: ";
	cin >> playerName;  //First player input

	cout << playerName << " has awoken from a cryogenic slumber...\n\n" << endl;
	Sleep(5000);  //Using sleep
	cout << "You emerge from your vault, and start to wander the desolate land that is tarnished with radiation.\n";
	Sleep(5000);  //Using sleep
	cout << "\nYou vaguely recognize your surroundings but you have no recollection what has happened to you.\n";
	Sleep(5000);  //Using sleep
	cout << "\nYou start to move about the wasteland until you spot the familiarity of your old home... \n\n";
	Sleep(10000);  //Using sleep
	cout << playerName << " starts to rummage through the house looking for food, water and a weapon..." << endl;
	Sleep(3000);  //Using sleep
	cout << "You spot a pipewrench, a baseball bat and a shovel...";
	Sleep(3000);  //Using sleep
	cout << "Which weapon are you going to take?\n\n";
	cout << "1 - pipewrench\n";
	cout << "2 - baseball bat\n";
	cout << "3 - shovel\n";
	cin >> weapon;   //Second player input

	switch (weapon) {  //Using switch to select a weapon
	case 1:
		cout << "You have acquired the pipewrench!\n";
		break;
	case 2:
		cout << "You have acquired the baseball bat!\n";
		break;
	case 3:
		cout << "You have acquired the shovel!\n";
		break;
	default:
		cout << "You have not picked up a weapon yet!";
	}

	cout << "You start to feel scared, lost and lonely while you are searching through your old home.\n";
	Sleep(5000);  //Using sleep
	cout << "\nThe picture of your wife and son lay on the ground covered in dirt and mud.\n";
	Sleep(5000);  //Using sleep
	cout << "Suddenly, you do not feel alone anymore...";
	Sleep(7000);  //Using sleep
	cout << "THE FRONT DOOR OF YOUR HOUSE IS KICKED IN BY A WASTELAND RAIDER!!!\n";
	Sleep(4000);  //Using sleep
	cout << "\nYou know what you have to do!\n";
	cout << "\nYou must fight!!!\n\n";

	int health;
	int raiderHealth;
	raiderHealth = 10;   
	health = 10;    //Health set to 10
	int battleDamage1;
	int battleDamage2;
	int battleDamage3;
	int battleDamage4;
	char choice;

	while (health > 0) { //Turn based battle commences
		srand(static_cast<unsigned int>(time(0))); //Seed Random Number Generator
		int randomNumber1 = rand();
		int randomNumber2 = rand();
		int randomNumber3 = rand();
		int randomNumber4 = rand();
		int My_attack = (randomNumber1 % 4); //Get attack number between 0 and 4
		int My_block = (randomNumber2 % 4); //Get block number between 0 and 4
		int R_attack = (randomNumber3 % 4); //Get attack number between 0 and 4
		int R_block = (randomNumber4 % 4); //Get block number between 0 and 4
		cout << "What will you do?\n";
		cout << "\nPress 'a' to attack or 'b' to block: ";
		cin >> choice;

		if (choice == 'a') {
			if (My_attack < R_block) {
				cout << "The raider blocked your attack causing " << R_block - My_attack << " damage to you!" << endl;
				battleDamage3 = R_block - My_attack;
				health -= battleDamage3;
				cout << "Your health is at " << health << endl;
			} if (My_attack > R_block) {
				cout << "You attacked the raider for " << My_attack - R_block << " damage" << endl;;
				battleDamage1 = My_attack - R_block;
				raiderHealth -= battleDamage1;
				cout << "The raiders health is at " << raiderHealth << endl;
			}
			else if (My_attack == R_block) {
				cout << "\nNo damage dealt!\n";
			}
		} if (raiderHealth <= 0) {
			cout << "\nYou have killed the raider!";
			cout << "\nYou have " << health << " left" << endl;
			break;
		}
		else if (choice == 'b') {
			if (My_block < R_attack) {
				cout << "The raider broke your block causing " << R_attack - My_block << " damage" << endl;;
				battleDamage2 = R_attack - My_block;
				health -= battleDamage2;
				cout << "Your health is at " << health << endl;
			} if (My_block > R_attack) {
				cout << "You successfully blocked the raiders attack causing " << My_block - R_attack << " damage to the raider!" << endl;
				battleDamage4 = My_block - R_attack;
				raiderHealth -= battleDamage4;
				cout << "The raiders health is at " << raiderHealth << endl;
			}
			else if (My_block == R_block) {
				cout << "\nNo damage dealt!";
			}
		}if (health <= 0) {
			cout << "\nYou have died!\n\n";  //Player has died
			return 0;
		}

	}
	cout << "\nYou have survived your first battle in the wasteland.\n";
	cout << "\nCongratulations warrior.\n\n";  //Showing that the player survived
	return 0;
}
