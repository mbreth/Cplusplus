#include "pch.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;

int numItems = 0;
string myInventory[] = { "10 mm pistol","pipe revolver","nuka dew","assault rifle","laser musket","FatMan","sniper fifle","baton","minigun","grenade" };
// My array of items in the inventory

int main() {
	char inventory;
	string playerName;
	string response1;
	string response2;
	string joinResponse;
	bool joinMinutemen;
	string rifleName;
	string musketName;
	string weaponLoss;
	string fatmanName;

	// Items going in to inventory
	myInventory[numItems++] = "10mm Pistol";
	myInventory[numItems++] = "pipe revolver";
	myInventory[numItems++] = "nuka dew";

	cout << "What is your player name?: ";
	cin >> playerName;

	// Start game sequence
	cout << "\n\nHere our player, " << playerName << ", is wandering the wasteland in search of the Rhombus City. ";
	Sleep(3000);
	cout << "\nAfter several days, you finally find the entrance to Rhombus City. Press 'i' to open inventory: ";
	cin >> inventory;
	while (true) {
		if (inventory != 'i') {
			cout << "\nPlease press 'i' to access inventory before entering Rhombus City: ";
			cin >> inventory;
		}
		else {
			cout << "\n\nYour inventory:\n";
			for (int i = 0; i < numItems; ++i) { // For loop to show items in inventory
				cout << myInventory[i] << endl;
			}
			break;
			
		}
	}
	Sleep(2000);
	// Player conversation with Stranger in game
	cout << "\n\nWhile you are exploring Rhombus City, you meet someone that asks you about the Minutemen";
	cout << "\n\nStranger: Have you ever heard about the Minutemen roaming the Wasteland?(yes or no): ";
	cin >> response1;
	if (response1 == "yes") {
		cout << "\nWell the Minutemen are looking for folks to join up and fight to protect themselves against threats out in the Commonwealth.";
		cout << "\nWould you like to join? (yes or no): ";
		cin >> joinResponse;
		if (joinResponse == "yes" || joinResponse == "sure") {
			cout << "Stranger: FANTASTIC! We could use the help!\n";
			joinMinutemen = true;
		}
		else if (joinResponse == "no") {
			cout << "Stranger: Okay. Sorry to bother you then.\n";
			joinMinutemen = false;
		}
	}
	else if (response1 == "no") {
		cout << "\nStranger: Let me enlighten you a bit.";
		cout << "\nStranger: Would you like to learn about the Minutemen? (yes or no): ";
		cin >> response2;
		if (response2 == "yes") {
			cout << "\nStranger: The Minutemen are a group of civilian militia founded as a result of the efforts to protect themselves from threats out in the Commonwealth";
			cout << "\nInspired by the historical Minutemen of the American Revolution, settlers armed themselves and vowed to defend their land and each other.";
			Sleep(5000);
			cout << "\nWe first gained recognition after successfully defending Rhombus City from the Great Super Mutant attack in 2180";
			cout << "\nCurrently we reside in Fort Independence and we broadcast all of our information on Freedom Radio";
			cout << "\nRight now, Preston Garvey is our leader and we are doing everything we can to take back our land from the Mutants and Raiders.";
			Sleep(7000);
			cout << "\nWould you like to join up? (yes or no): ";
			cin >> joinResponse;
			if (joinResponse == "yes") {
				cout << "Stranger: FANTASTIC! We could use the help!\n";
				joinMinutemen = true;
			}
			else if (joinResponse == "no") {
				cout << "Stranger: Okay. Sorry to bother you then.\n";
				joinMinutemen = false;
			}
		}
		else if (joinResponse == "no") {
			cout << "Stranger: Okay. Sorry to bother you then.\n";
			joinMinutemen = false;
		}
		// Depending on how you respond to the stranger, the game can two different ways...

	} // Game option 1
	Sleep(3000);
	while (joinMinutemen == true) {
		cout << "\nTwo years have passed\n";
		cout << "\nYou set out on an adventure to recover a laser musket stolen from the Minutemen a few weeks ago";
		cout << "\nPreston Garvey: We are going to raid the Raiders camp when they are all asleep. " << playerName << " ,grab the assault rifle over by the gun case. You will need it";
		cout << "\n\nYOU HAVE ACQUIRED THE ASSAULT RIFLE AND 100 ROUNDS OF AMMO\n\n";
		cout << "What are you going to name your rifle? (no spaces please): ";
		cin >> rifleName; // Naming your weapon

		myInventory[numItems++] = "assault rifle (" + rifleName + ")";
		cout << "\nYour inventory:\n";
		for (int i = 0; i < numItems; ++i) { // Another for loop to add an item to the inventory
			cout << myInventory[i] << endl;
		}
		Sleep(2000);

		cout << "\nThe Minutemen set out on their raid of the camp just outside of Rhombus City.";
		cout << "\nThe camp is illuminated by a small fire in the center of the camp";
		cout << "\nPreston Garvey: I will throw a smoke grenade in the camp. That is when we go guns ablazing and take back our weapons.";
		cout << "\n*Preston Garvey hurls a smoke grenade into the raiders camp*\n";
		cout << "Suddenly the roar of assault rifles and laser muskets fill the atmosphere\n";
		Sleep(8000);
		cout << "\nThe battle is over and the Minutemen are victorious!!\n";
		cout << "\n\nYOU HAVE ACQUIRED THE LASER MUSKET AND 25 FUSION CELLS\n\n";
		cout << "\nWhat are you going to name your musket? (no spaces please): ";
		cin >> musketName; // Naming your weapon

		myInventory[numItems++] = "laser musket (" + musketName + ")";

		cout << "\n\nYour inventory:\n";
		for (int i = 0; i < numItems; ++i) { // Another for loop to add items to inventory
			cout << myInventory[i] << endl;
		}

		Sleep(2000);
		cout << "\nPreston Garvey is impressed with your skills and would like to reward you with a better pistol, the laser pistol!";
		cout << "\n\nYour inventory only can allow for TWO pistols. Which one are you going to get rid of? (10mm or revolver): ";
		cin >> weaponLoss;
		// Choosing which weapon to lose or give up
		if (weaponLoss == "revolver") {
			myInventory[1] = "laser pistol";
			for (int i = 0; i < numItems; ++i) { 
				cout << myInventory[i] << endl;
			}
		} // Choosing which weapon to lose or give up
		else if (weaponLoss == "10mm") {
			myInventory[0] = "laser pistol";
			for (int i = 0; i < numItems; ++i) {
				cout << myInventory[i] << endl;
			}
		}
		Sleep(5000);
		cout << "\n\nYou have been roaming around with the Minutemen for a while and have helped out hundreds of people in the Commonwealth";
		cout << "\n\nPreston Garvey has trusted you with his life. You have been his go to man for 3 years now";
		Sleep(5000);
		cout << "\n\nPreston Garvey: " << playerName << ", you have been a huge help in our crusade to take back the Commonwealth for the people";
		cout << "\n\nPreston Garvey: I would like you to have a new piece of technology we have been working on\n\n";

		myInventory[numItems++] = "Fatman";
		for (int i = 0; i < numItems; ++i) {
			cout << myInventory[i] << endl;
		}
		cout << "\n\nYOU HAVE ACQUIRED FATMAN ROCKET LAUNCHER!\n\n";
		cout << "What will you name your rocket launcher?: ";
		cin >> fatmanName; // Naming your weapon

		cout << "Now that you have " << fatmanName << ", you will be able to cross the bridge leading into Nuka-World";
		cout << "\n\nThe reason for having " << fatmanName << ", is because the bridge is guarded by a Deathclaw";
		Sleep(5000);
		cout << "\n\nYou travel to the bridge leading to Nuka-World with the Minutemen.";
		cout << "\nYou hear the terrible roar of the Deathclaw";
		cout << "\nThe area reeks of dead bodies and toxic waste";
		Sleep(8000);
		cout << "\nPreston Garvey: This is it " << playerName << ". You must approach him with EXTREME CAUTION";
		Sleep(5000);
		cout << "\nYou approach the Deathclaw...but he stops you after he lets out an enormous roar";
		Sleep(5000);
		cout << "\nDeathclaw: WHAT DO YOU WANT?!?!!?\n";
		Sleep(5000);
		cout << playerName << ": I just want to cross the bridge into Nuka-World\n";
		Sleep(5000);
		cout << "\n\nDeathclaw: YOU POSSESS SOMETHING THAT I WANT\n";
		Sleep(5000);
		cout << playerName << ": What could I possess that you want??\n";
		Sleep(5000);
		cout << "\nDeathclaw: I WANT YOUR NUKA DEW\n";
		Sleep(5000);
		cout << playerName << ": WHAT?!? This is my favorite special Nuka Dew! I don't want to part with it!\n It is the only one I have seen in 7 years. I don't know where I would find another. What else do you want??";
		Sleep(5000);
		cout << "\n\nThe Deathclaw gives out a mighty roar and starts approaching you...\n\n";
		Sleep(6000);
		cout << "\nYou pull out your " << fatmanName << " and take a shot at the Deathclaw but the Deathclaw catches your rocket nuke and swallows it whole!!\n";
		cout << "\nYou stand there amazed and quickly pull out your Nuka-Dew\n";
		Sleep(5000);
		cout << playerName << ": Fine...I have no choice. Its yours... ";
		Sleep(5000);
		cout << "\nDeathclaw: Wise decision human....you may cross the bridge\n\n";
		// Giving up your most important item to the Deathclaw
		myInventory[2] = "";
		cout << "You cross the bridge into Nuka-World, with a heavy heart.";
		cout << "\nThe Minutemen all split up and scourage the park looking for any food";
		Sleep(5000);
		cout << "\nPreston Garvey: " << playerName << " Come over here! I found something for you..";
		Sleep(5000);
		cout << "\nYou sulk over to Preston...and then you see it";
		Sleep(8000);
		cout << "\nAn entire storage room filled with...NUKA DEW!!!!";
		cout << "\nPreston Garvey: I guess giving up one Nuka Dew for thousands of Nuka Dew was well worth it";
		cout << "\n\nThe Wasteland isn't so bad after all...";
		Sleep(5000);
		cout << "\n\nThe end";
		break;
	} //Game option 2
	while (joinMinutemen == false) {
		cout << "\nAs you leave the stranger, you walk into a bar and are greeted by a synth";
		cout << "\nThe synth approaches you with a gun pointed at you\n";
		Sleep(2000);
		cout << playerName << ": WHOA, take it easy buddy! What do you want from me??";
		Sleep(4000);
		cout << "\n\nSynth: I have never seen you around these parts, you are not to be trusted!!";
		Sleep(4000);
		cout << "\nThe Synth loads his gun and prepares to pull the trigger...";
		Sleep(4000);
		cout << "\n\nBABOOOOM!!\n\n";
		cout << "The sound of a shotgun blows the synth's head off!!\n";
		Sleep(4000);
		cout << "Ralf(Brotherhood of Steel): You okay? Did that Synth hurt you?\n";
		cout << playerName << ": No. Thankfully you took care of it. Thank you";
		Sleep(4000);
		cout << "\nRalf(Brotherhood of Steel): Just doing my job bud. The names Ralf\n";
		Sleep(2000);
		cout << playerName << ": nice to meet you! I am " << playerName << endl;
		Sleep(4000);
		cout << "\nRalf(Brotherhood of Steel): You should come with me. I would like to get to know you better";
		cout << "\nYou travel with Ralf and he takes you to the Brotherhood of Steel HQ";
		Sleep(5000);
		cout << "\n\nYou learn all about the Brotherhood of Steel from Ralf";
		Sleep(4000);
		cout << "\nYou find out that they are a military group that lives underneath the Pentagon";
		cout << "\nThe Brotherhood fights mutants that ravage the land";
		Sleep(4000);
		cout << "\nThe Brotherhood have a lot of influence in the Commonwealth to get the job done, no matter the cost";
		cout << "\nThe Brotherhood have chapters all over the United States and continue to grow all the time";
		Sleep(4000);
		cout << "\nAfter being greatly informed and given a brand new assault rifle, you join the Brotherhood";
		cout << "\nWhat would you like to name your new rifle?: ";
		cin >> rifleName; // Naming your weapon

		myInventory[numItems++] = "assault rifle (" + rifleName + ")"; 
		cout << "\n\nYour inventory:\n";
		for (int i = 0; i < numItems; ++i) {
			cout << myInventory[i] << endl;
		}

		Sleep(4000);
		cout << "\n Two years pass and you have been heavily involved with the Brotherhood and are ready for another mission";
		Sleep(4000);
		cout << "\nRalf: We must go out and acquire a shipment of laser muskets from the Minutemen. Gear up Sergeant " << playerName << endl;
		cout << "\nYou venture out into the Commonwealth and head towards Fort Independence to meet up with the Minutemen\n";
		Sleep(4000);
		cout << "\nStranger: Ah. I see you have joined the Brotherhood. I am glad to see you are doing something for the people\n";
		cout << playerName << ": I just don't think I was confident in your group. I am sorry";
		Sleep(4000);
		cout << "\nStranger: No worries. We can hold our own. We attacked a group of Raiders for these laser muskets last night";
		cout << "\nRalf hands you a laser musket";
		Sleep(4000);
		cout << "\nRalf: Here you go, treat it well";
		Sleep(4000);
		cout << "\nWhat are you going to name your Laser Musket?: ";
		cin >> musketName; // Naming your weapon

		myInventory[numItems++] = "laser musket (" + musketName + ")";

		cout << "\n\nYour inventory:\n";
		for (int i = 0; i < numItems; ++i) {
			cout << myInventory[i] << endl;
		}

		cout << "\nThe Brotherhood go out on a huge attack to make a big push into the city of Washington to drive the mutants to the outskirts";
		cout << "\nDuring the attack, you manage to kill 36 mutants, causing them to retreat out of the city";
		Sleep(5000);
		cout << "\nRalf is impressed with your skills and would like to reward you with a better pistol, the laser pistol!";
		cout << "\n\nYour inventory only can allow for TWO pistols. Which one are you going to get rid of? (10mm or revolver): ";
		cin >> weaponLoss;
		if (weaponLoss == "revolver") {
			myInventory[1] = "laser pistol";
			for (int i = 0; i < numItems; ++i) {
				cout << myInventory[i] << endl;
			}
		}
		else if (weaponLoss == "10mm") {
			myInventory[0] = "laser pistol";
			for (int i = 0; i < numItems; ++i) {
				cout << myInventory[i] << endl;
			}
		}

		Sleep(5000);
		cout << "\n\nYou have been roaming around with the Brotherhood for a while and have eliminated thousands of mutants among the Commonwealth";
		cout << "\n\nRalf has trusted you with his life. You have been his go to man for 3 years now";
		Sleep(5000);
		cout << "\n\nRalf: " << playerName << ", you have been a huge help in our crusade to take back the Commonwealth for the people";
		cout << "\n\nRalf: I would like you to have a new piece of technology we have been working on\n\n";

		myInventory[numItems++] = "Fatman";
		cout << "\nYour inventory:\n";
		for (int i = 0; i < numItems; ++i) {
			cout << myInventory[i] << endl;
		}
		cout << "\n\nYOU HAVE ACQUIRED FATMAN ROCKET LAUNCHER!\n\n";
		cout << "What will you name your rocket launcher?: ";
		cin >> fatmanName; // Naming your weapon

		cout << "\nNow that you have " << fatmanName << ", you will be able to cross the bridge leading into Nuka-World";
		cout << "\n\nThe reason for having " << fatmanName << ", is because the bridge is guarded by a Deathclaw";
		Sleep(5000);
		cout << "\n\nYou travel to the bridge leading to Nuka-World with the Brotherhood.";
		cout << "\nYou hear the terrible roar of the Deathclaw";
		cout << "\nThe area reeks of dead bodies and toxic waste";
		Sleep(8000);
		cout << "\nRalf: This is it " << playerName << ". You must approach him with EXTREME CAUTION";
		Sleep(5000);
		cout << "\nYou approach the Deathclaw...but he stops you after he lets out an enormous roar";
		Sleep(5000);
		cout << "\nDeathclaw: WHAT DO YOU WANT?!?!!?\n";
		Sleep(5000);
		cout << playerName << ": I just want to cross the bridge into Nuka-World\n";
		Sleep(5000);
		cout << "\n\nDeathclaw: YOU POSSESS SOMETHING THAT I WANT\n";
		Sleep(5000);
		cout << playerName << ": What could I possess that you want??\n";
		Sleep(5000);
		cout << "\nDeathclaw: I WANT YOUR NUKA DEW\n";
		Sleep(5000);
		cout << playerName << ": WHAT?!? This is my favorite special Nuka Dew! I don't want to part with it!\n It is the only one I have seen in 7 years. I don't know where I would find another. What else do you want??";
		Sleep(5000);
		cout << "\n\nThe Deathclaw gives out a mighty roar and starts approaching you...\n\n";
		Sleep(6000);
		cout << "\nYou pull out your " << fatmanName << " and take a shot at the Deathclaw but the Deathclaw catches your rocket nuke and swallows it whole!!\n";
		cout << "\nYou stand there amazed and quickly pull out your Nuka-Dew\n";
		Sleep(5000);
		cout << playerName << ": Fine...I have no choice. Its yours... ";
		Sleep(5000);
		cout << "\nDeathclaw: Wise decision human....you may cross the bridge\n\n";
		// Giving up favorite item to Deathclaw
		myInventory[2] = "";
		cout << "You cross the bridge into Nuka-World, with a heavy heart.";
		cout << "\nThe Brotherhood all split up and scourage the park looking for any food";
		Sleep(5000);
		cout << "\nRalf: " << playerName << " Come over here! I found something for you..";
		Sleep(5000);
		cout << "\nYou sulk over to Ralf...and then you see it";
		Sleep(8000);
		cout << "\nAn entire storage room filled with...NUKA DEW!!!!";
		cout << "\nRalf: I guess giving up one Nuka Dew for thousands of Nuka Dew was well worth it";
		cout << "\n\nThe Wasteland isn't so bad after all...";
		Sleep(5000);
		cout << "\n\nThe end";
		break;
	}
	return 0;
}
