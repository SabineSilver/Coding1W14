// mainWeek14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//reading from and writing to files

#include <iostream>
#include <string> 
#include <fstream>
#include "filez.h"
#include "ship.h"
using namespace std;


int main()
{
	cout << "Let's write some new files.\n";

	
	ReadFromFile(); 
	WriteToFile("\nWake up"); 

	ship minnow;
	minnow.type = FRIGATE;
	minnow.status();

	WriteShipToFile(minnow);
	ReadFromShipFile();

	return 0;
}

/*
	files we'll use today
	maniWeek14.cpp			<--entry point for the rest of the programm 
	filez.h
	filez.cpp
	ship.h
	ship.cpp

	the header file just has the includes and function declarations 
	the source file (.cpp) will have the function definitions. 

*/