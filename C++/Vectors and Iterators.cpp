#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
	vector<string> names;
	vector<string>::iterator changeIter;
	vector<string>::const_iterator readIter; //Not able to change the iterator.
	string playerInput;
	int choice;

	do {
		names.push_back("Codsworth");
		names.push_back("Preston");
		//cout << "\nYour names:\n";
		//for (readIter = names.begin(); readIter != names.end(); readIter++) {
			//cout << *readIter << endl;
		//}
		cout << "\nWhat would you like to do? (1, 2, 3, 4):\n";
		cout << "1. Add a name.\n";
		cout << "2. Change a name.\n";
		cout << "3. Remove a name.\n";
		cout << "4. Show names.\n";
		cout << "5. Quit\n";
		cin >> choice;

		if (choice == 1) {
			cout << "What name would you like to add?:\n";
			cin >> playerInput;
			names.push_back(playerInput);
			cout << "Your names:\n";
			for (readIter = names.begin(); readIter != names.end(); readIter++) {
				cout << *readIter << endl;
				continue;
			}
		}
		if (choice == 2) {
			cout << "What name would you like to change?:\n";
			cin >> playerInput;
			if (playerInput == "Codsworth" || playerInput == "codsworth") {
				cout << "What would you like to change the name to?: \n";
				cin >> playerInput;
				changeIter = names.begin();
				*changeIter = playerInput;
				cout << "Your names:\n";
				for (readIter = names.begin(); readIter != names.end(); ++readIter) {
					cout << *readIter << endl;
					break;
				}
			}
			else if (playerInput == "Preston" || playerInput == "preston") {
				cout << "What would you like to change the name to?:\n";
				cin >> playerInput;
				changeIter = names.begin() + 1;
				*changeIter = playerInput;
				cout << "Your names:\n";
				for (readIter = names.begin(); readIter != names.end(); readIter++) {
					cout << *readIter << endl;
					break;
				}
			}
			else if (playerInput != "preston" || playerInput != "Codsworth" || playerInput != "Preston" || playerInput != "codsworth") {
				cout << "Error. Name not available to change";
			}	
		}
		if (choice == 3) {
			cout << "What name are you wanting to remove?:\n";
			cin >> playerInput; //Using player input to get rid of specified item using only 1 name from string
			if (playerInput == "Codsworth" || playerInput == "codsworth") {
				for (int i = 0; i < names.size(); i++) {
					if (names[i] == "Codsworth") {
						names[i] = names[names.size() - 1];
						names.pop_back();
						cout << "Your names:\n";
						for (readIter = names.begin(); readIter != names.end(); readIter++) {
							cout << *readIter << endl;
						}
					}

				}

			}
		}
			else if (playerInput == "Preston" || playerInput == "preston") {
				for (int i = 0; i < names.size(); i++) {
					if (names[i] == "Preston") {
						names[i] = names[names.size() - 1];
						names.pop_back();
						cout << "\nYour names:\n";
						for (readIter = names.begin(); readIter != names.end(); readIter++) {
							cout << *readIter << endl;
								}
							}
						}
				}
		if (choice == 4) {
			cout << "Your names:\n";
			for (readIter = names.begin(); readIter != names.end(); readIter++) {
					cout << *readIter << endl;
				}
			}
		else if (choice == 5) {
			break;
		}
	} while (playerInput != "Quit");
}
