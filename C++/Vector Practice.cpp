#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	vector<string> inventory;
	vector<string>::iterator changeIter;
	vector<string>::const_iterator readIter;
	string playerInput;

	inventory.push_back("pistol");
	inventory.push_back("health_potion");

	cout << "Your items:\n";
	for (readIter = inventory.begin(); readIter != inventory.end();readIter++) {
		cout << *readIter << endl;
	}
	cout << "\nYou approach the vendor to buy a shotgun\n";
	inventory.push_back("shotgun");
	cout << "\nYour items:\n";
	for (readIter = inventory.begin(); readIter != inventory.end(); readIter++) {
		cout << *readIter << endl;
	}
	cout << "\nBut now you want to get rid of your pistol:\n";
	cin >> playerInput;
	if (playerInput == "pistol") {
		changeIter = inventory.begin();
		inventory.erase(changeIter);
		cout << "\nYour items:\n";
		for (readIter = inventory.begin(); readIter != inventory.end(); readIter++) {
			cout << *readIter << endl;
		}
	}
	cout << "\nYour health is low as hell. You drink your health_potion";
	changeIter = inventory.begin();
	inventory.erase(changeIter);
	cout << "\nYour items:\n";
	for (readIter = inventory.begin(); readIter != inventory.end(); readIter++) {
		cout << *readIter << endl;
	}
	cout << "\nYou use your shotgun and kill 4 enemies and you acquire 3 items\n";
	inventory.push_back("adhesive");
	inventory.push_back("health_potion");
	inventory.push_back("mana_potion");
	cout << "\nYour items:\n";
	for (readIter = inventory.begin(); readIter != inventory.end(); readIter++) {
		cout << *readIter << endl;
	}
	cout << "\nBut you find out that the mana_potion is empty, so you throw it away\n";
	inventory.pop_back();
	cout << "\nYour items:\n";
	for (readIter = inventory.begin(); readIter != inventory.end(); readIter++) {
		cout << *readIter << endl;
	}
	cout << "\nYou find out that you have a tear on your pants, so you use the adhesive to fix it\n";
	changeIter = inventory.begin() + 1;
	inventory.erase(changeIter);
	cout << "\nYour items:\n";
	for (readIter = inventory.begin(); readIter != inventory.end(); readIter++) {
		cout << *readIter << endl;
	}
}
