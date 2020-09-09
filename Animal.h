/*********************************************************************
** Program name: Project 2
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  Animal.hpp class
*********************************************************************/

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
using namespace std;

class Animal {
private:
protected:
	string name;			//Animal type
	int age;
	double cost;			//Cost of all the animals
	int numBabies;			//How many each animal can have 
	double baseFoodCost;	//Base food cost is virtual function
	double payoff;			//profit 

public:
	Animal();				//Default Constructor
	Animal(int a);			//Constructor to pass age
	string getName();
	void setName(string n);
	int getAge();
	void setAge(int a);			//Set age
	double getCost();
	void setCost(double c);
	int getnumBabies();
	void setnumBabies(int b);
	double getbasefoodCost();
	void setbasefoodCost(double bfc);
	double getPayoff();
	virtual void print() = 0;		//Print out Type and Age of animal element
	virtual string printName() = 0;	//To get name in animal inventory
	virtual int printAge() = 0;		//To get age in animal inventory
	~Animal();				//Destructor
};

#endif
