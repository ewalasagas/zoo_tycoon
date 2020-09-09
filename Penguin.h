/*********************************************************************
** Program name: Project 2
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  Penguin.hpp class
*********************************************************************/

#ifndef PENGUIN_H
#define PENGUIN_H

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
#include "Animal.h"
using namespace std;

class Penguin : public Animal {
private:
protected:
public:
	Penguin();
	Penguin(int a);
	void setName(std::string n);
	std::string getName();
	double getCost();
	double getbasefoodCost(double x);
	double getPayoff(int x);
	void setnumBabies();
	void print();
	string printName();		//Name check for baby
	int printAge();
	~Penguin();
};
#endif 