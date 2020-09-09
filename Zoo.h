/*********************************************************************
** Program name: Project 2
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  Zoo.hpp class
*********************************************************************/

#ifndef ZOO_H
#define ZOO_H

#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
#include "Animal.h"
using namespace std;

class Zoo {
private:
protected:
	std::vector<Animal*> inventory;
public:
	Zoo();
	void addAnimal(std::vector<Animal*> inventory);	//Adding an animal to inventory
	void displayAnimal();		//Display all animals
	void animalAge();	//Increase animal inventory age
	int randomNumber();		//Generate random number 
	int numTigerBaby(string checkBaby);	//Case 3: Return number of tiger babies
	int numPenginBaby(string checkBaby);	//Case 3: Return number of penguin babies
	int numTurtleBaby(string checkBaby);	//Case 3: Return number of turtle babies
	int numZebraBaby(string checkBaby);	//Case 3: Return number of zebra babies
	std::string findAdult(int x);	//Random event - case 3 to add a baby animal
	std::string animalSick(int x);	//Random event - case 1 to remove animal
	void removeAnimal(int x);	//Random event - case 1 to remove animal
	void checkinventorySize();		//Check cage size and let user know increase
	void writeEventTxt(int caseNum);	//Write to a file dependent on what event
	void openEventTxt();		//Read the same file
	~Zoo();			//Destructor
};

#endif
