#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
  int inv;
  string playerInput;
  vector<string> inventory;
  vector<string>::iterator changeIter;
  inventory.push_back("Dragon"), inv++;
  inventory.push_back("Lizard"), inv++;
  inventory.push_back("Snake"), inv++;
  cout << "Add an item to the list:\n";
  cin >> playerInput;
  inventory.push_back(playerInput), inv++;
  cout << "\nThese are your things:\n";
  for (int i = 0; i < inv; i++) {
    cout << inventory[i] << endl;
  }
  cout << "\nLets remove the lizard from your things.\n";
  changeIter = inventory.begin() + 1;
  inventory.erase(changeIter);
  cout << "\nYou should have no lizard in this area.\n";
  for (int i = 0; i < inv; i++) {
    cout << inventory[i] << endl;
  }
  cout << "\nAdd an item to the list above Snake:\n"; 
  cin >> playerInput;
  changeIter = inventory.begin() + 1;
  cout << "\nHere is the list:\n";
  inventory.insert(changeIter, playerInput);
  for (int i = 0;i < inv;i++) {
    cout << inventory[i] << endl;
  }
}
