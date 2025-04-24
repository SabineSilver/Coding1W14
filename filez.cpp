#include "filez.h"

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
