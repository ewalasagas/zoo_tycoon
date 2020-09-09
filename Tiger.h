/*********************************************************************
** Program name: Project 2
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  Tiger.hpp class
*********************************************************************/

#ifndef TIGER_H
#define TIGER_H

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

class Tiger : public Animal {
public:
	Tiger();
	Tiger(int a);
	void setName(std::string n);
	std::string getName();
	double getCost();
	double getbasefoodCost(double x);
	double getPayoff(int x);
	void print();
	std::string printName();	//Name check for baby
	int printAge();

	~Tiger();
};

#endif