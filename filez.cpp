#include "filez.h"
#include "ship.h"


void WriteToFile(string givenString) {
	//open (or create) the file
	ofstream file("file.txt", ios::app);		//ios::app to append to end of file (update/put new entry at end instead of overwrite)

	//confirm that the file is open
	if (!file.is_open()) {
		cout << "Could not open file.\n";
		return;
	}
	//write text to the open file
	file << givenString;
	//close the file (which saves it to disk)
	file.close();

}

void ReadFromFile() {
	string fileContents;		//this is where we store the text in the file
	//open the file
	ifstream file("file.txt");

	//check that its open
	if (!file.is_open()) {
		cout << "Could not open file.\n";
	}
	//cout everything in the file
	while (getline(file, fileContents)) {
		cout << fileContents << "\n";
	}
	//close the file
	file.close();

}

void WriteShipToFile(ship givenShip) {
	cout << "Writing " << givenShip.name << " to file.\n"; 

	ofstream file("shipfile.txt", ios::app);

	if (!file.is_open()) {
		cout << "Could not open file.\n";
		return;
	}
	
	file << givenShip.name;	 
	file << ".\n";
	file << givenShip.fuel; 
	file << " fuel.\n";
	switch (givenShip.type) {
	case FIGHTER: file << "fighter.\n";
		break;
	case FRIGATE: file << "frigate.\n";
		break;
	case FREIGHTER: file << "freighter.\n";
		break;
	case CRUISER: file << "cruiser.\n";
		break;
	default: file << "unknown.\n";
		break;
	}
	//idk why the << isn't working??? it's working on the other function. I think it's bc it's not a string or smthn but also what else am i supposed to use?
	//I'm trying to make a like variable(?) if givenShip that includes the given ship's name, fuel, and type
	// I don't remember how to do that though and I have to go to work until midnight in five minutes
	//I need to somehow get the name fuel and type of a given ship into this file to be saved
	// ship.name ship.fuel shipType
	file.close();

}

void ReadFromShipFile() {
	string fileContents;		

	ifstream file("shipfile.txt");

	if (!file.is_open()) {
		cout << "Could not open file.\n";
	}
	
	while (getline(file, fileContents)) {
		cout << fileContents << "\n";
	}
	
	file.close();

}