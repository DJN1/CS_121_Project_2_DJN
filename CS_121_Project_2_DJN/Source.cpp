/*
File: Source.cpp
Name: David Niederweis
Date: 09/27/2019
Course: CS121-03 - Computer Science I
Description: Program to calculate weight of object on diffierent planets.
*/

// includes for main functionaility, strings, and I/O manipulation
#include <iostream>
#include <string>
#include <iomanip>

// set namespace
using namespace std;

// function declarations
void printPlanets();
void calcWeight(string, float, string);

// main method
int main()
{
	// set precision to print 2 decimals for floats
	cout << setprecision(2) << fixed;

	// variable
	string choice;

	// loop while the program is running
	while (true)
	{
		// prompt user to whether they want to calculate the weight of an object
		cout << endl << "Would you like to calculate the weight of an object on a planet?(yes/no): ";
		cin >> choice; // get user choice from cin
		// if user selects yes
		if (choice == "yes")
		{
			string unit;
			float weight; // float to store original weight on earth from user
			string planet; // string to store planet selected by user
			cout << "Please enter the unit for weight: ";
			cin >> unit;
			cout << "Please type the weight of the object on earth in " << unit << ": ";
			cin >> weight; // store user input in weight
			cout << "Please type the name of a planet from the following list for which you would like to calculate the weight on:" << endl << endl;
			printPlanets(); // call to print list of planets
			cout << "Your choice: ";
			cin >> planet; // store planet chosen by user
			calcWeight(planet, weight, unit); // call to calculate weight for given weight on given planet
		}
		// if user selects no, quit program
		else if (choice == "no")
		{
			break;
		}
		// if user enters unknown text, inform user and loop again
		else
		{
			cout << "Could not understand the choice you made." << endl;
		}
	}
	return 0;
}

// prints all the planets
void printPlanets()
{
	cout << "Mercury" << endl << "Venus" << endl << "Earth" << endl;
	cout << "Moon" << endl << "Mars" << endl << "Jupiter" << endl;
	cout << "Saturn" << endl << "Uranus" << endl << "Neptune" << endl;
	cout << "Pluto" << endl << endl;
}

// calculates the weight of an object for given weight on given planet
void calcWeight(string planet, float weight, string unit)
{
	// print new line for better looking output
	cout << endl;
	// planet is pluto, print weight * weight_factor for mercury
	if (planet == "Mercury")
	{
		cout << "Weight of object on Mercury: " << weight * 0.42 << " " << unit << endl;
	}
	// if planet is Venus, print weight on venus
	else if (planet == "Venus")
	{
		cout << "Weight of object on Venus: " << weight * 0.89 << " " << unit << endl;
	}
	// if planet is earth, print weight
	else if (planet == "Earth")
	{
		cout << "Weight of object on Earth: " << weight << " " << unit << endl;
	}
	// if planet is moon, print weight on moon
	else if (planet == "Moon")
	{
		cout << "Weight of object on Moon: " << weight * 0.16 << " " << unit << endl;
	}
	// if planet is mars, print weight on mars
	else if (planet == "Mars")
	{
		cout << "Weight of object on Mars: " << weight * 0.35 << " " << unit << endl;
	}
	// if planet is jupiter, print weight on jupiter
	else if (planet == "Jupiter")
	{
		cout << "Weight of object on Jupiter: " << weight * 2.53 << " " << unit << endl;
	}
	// if planet is saturn, print weight on saturn
	else if (planet == "Saturn")
	{
		cout << "Weight of object on Saturn: " << weight * 1.06 << " " << unit << endl;
	}
	// i fplanet is uranus, print weight on uranus
	else if (planet == "Uranus")
	{
		cout << "Weight of object on Uranus: " << weight * 0.89 << " " << unit << endl;
	}
	// if planet is neptune, print weight on neptune
	else if (planet == "Neptune")
	{
		cout << "Weight of object on Neptune: " << weight * 1.17 << " " << unit << endl;
	}
	// if planet is pluto, print weight on pluto
	else if (planet == "Pluto")
	{
		cout << "Weight of object on Pluto: " << weight * 0.08 << " " << unit << endl;
	}
	// else if no planet is matched, restart prompt
	else
	{
		cout << "Failed to find planet." << endl;
	}
}