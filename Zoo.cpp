/*********************************************************************
** Program name: Project 2
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  Zoo.cpp class
*********************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
#include "Zoo.h"
#include "Animal.h"
using namespace std;

void Zoo::addAnimal(std::vector<Animal*> inventory)	//Adding an animal to inventory
{
	for (int i = 0; i < inventory.size(); i++)
		this->inventory.push_back(inventory[i]);
}

void Zoo::displayAnimal()		//Display all animals
{
	for (int i = 0; i < inventory.size(); i++)
	{
		inventory[i]->print();
	}
}

void Zoo::animalAge()	//Increase animal inventory age
{
	for (int i = 0; i < inventory.size(); i++)
	{

		inventory[i]->setAge(inventory[i]->getAge());
	}
}

int Zoo::randomNumber()		//Generate random number 
{
	int x;
	x = rand() % inventory.size() + 1;
	return x;
}

int Zoo::numTigerBaby(std::string checkBaby)	//Case 3: Return number of tiger babies
{
	int Tiger_babies = 0;
	for (int i = 0; i < inventory.size(); i++)
	{
		if (inventory[i]->getAge() < 3)
		{
			if (inventory[i]->printName() == "Tiger")
			{
				Tiger_babies++;
			}
		}
	}
	return Tiger_babies;
}

int Zoo::numPenginBaby(std::string checkBaby)	//Case 3: Return number of penguin babies
{
	int Penguin_babies = 0;
	for (int i = 0; i < inventory.size(); i++)
	{
		if (inventory[i]->getAge() < 3)
		{
			if (inventory[i]->printName() == "Penguin")
			{
				Penguin_babies++;
			}
		}
	}
	if (Penguin_babies > 5)
	{
		cout << "Unfotunately, you can only have 5 Penguin babies at the zoo." << endl;
	}
	return Penguin_babies;
}

int Zoo::numTurtleBaby(std::string checkBaby)	//Case 3: Return number of turtle babies
{
	int Turtle_babies = 0;
	int Zebra_babies = 0;
	std::string notready = " ";

	for (int i = 0; i < inventory.size(); i++)
	{
		if (inventory[i]->getAge() < 3)
		{
			if (inventory[i]->printName() == "Turtle")
			{
				Turtle_babies++;
			}
		}
	}

	if (Turtle_babies > 10)
	{
		cout << "Unfortunately, you can only have 10 Turtle babies at the zoo." << endl;
	}
	return Turtle_babies;
}

int Zoo::numZebraBaby(std::string checkBaby)	//Case 3: Return number of zebra babies
{
	int Zebra_babies = 0;

	for (int i = 0; i < inventory.size(); i++)
	{
		if (inventory[i]->getAge() < 3)
		{
			if (inventory[i]->printName() == "Zebra")
			{
				Zebra_babies++;
			}
		}
	}

	if (Zebra_babies == 3)
	{
		cout << "Unfortunately, you can only have 3 Zebra babies at the zoo." << endl;
	}
	return Zebra_babies;
}

std::string Zoo::findAdult(int x)		//Random event - case 3 to add a baby animal
{
	int a;
	std::string name;
	std::string nameEmpty = " ";
	a = inventory[x]->printAge();
	name = inventory[x]->printName();
	if (a < 3)
	{
		std::cout << name << " is playing with toys!" << endl;
		return nameEmpty;
	}
	else
	{
		std::cout << name << " is ready to give birth!" << endl;
		return name;
	}
}

std::string Zoo::animalSick(int x)	//Random event - case 1 to remove animal
{
	std::string name;
	name = inventory[x]->printName();
	return name;
}

void Zoo::removeAnimal(int x)		//Random event - case 1 to remove animal
{
	inventory.erase(inventory.begin() + x);
}

void Zoo::checkinventorySize()		//Check cage size and let user know increase
{
	if (inventory.size() == 10)
	{
		std::cout << "Animal capacity has reached 10." << endl;
		std::cout << "Increasing animal capacity." << endl;
	}
}

void Zoo::writeEventTxt(int caseNum)
{
	ofstream myfile;
	myfile.open("Project2.txt", ios::out | ios::trunc); //clear file each time open
	if (!myfile)
	{
		std::cout << "Error opening file. Program aborting.\n";
	}
	else
		myfile.is_open();
	if (caseNum == 1)
	{
		myfile << "Unfortunately, the removed animal needs special attention." << endl;
		myfile << "Therefore, the animal will not be return to the zoo." << endl;
		std::cout << endl;
	}
	else if (caseNum == 2)
	{
		myfile << "The tigers really gave the crowd a show! " << endl;
		std::cout << endl;
	}
	else if (caseNum == 3)
	{
		myfile << "Babies need special care!" << endl;
		myfile << "You can hear the babies call their mommys. " << endl;
		std::cout << endl;
	}
	else if (caseNum == 4)
	{
		myfile << "Why don't you take the rest of the day off. " << endl;
		std::cout << endl;
	}
	myfile.close();
}

void Zoo::openEventTxt()	//Open the same file and read 
{
	std::string input;
	ifstream myfile("Project2.txt", ios::in);
	if (myfile.is_open())
	{
		while (getline(myfile, input))
		{
			std::cout << input << '\n';
		}
		myfile.close();
	}
	else
		std::cout << "Error opening file. Program aborting.\n";
}

Zoo::~Zoo()
{	}

Zoo::Zoo()
{	}
