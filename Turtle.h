/*********************************************************************
** Program name: Project 2
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  Turtle.h class
*********************************************************************/

#ifndef TURTLE_H
#define TURTLE_H

#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
#include "Animal.h"
using namespace std;

class Turtle : public Animal {
private:
protected:
public:
	Turtle();
	Turtle(int a);
	void setName(std::string n);
	std::string getName();
	double getCost();
	double getbasefoodCost(double x);
	double getPayoff(int x);
	void print();
	std::string printName();		//Name check for baby
	int printAge();
	~Turtle();

};

#endif