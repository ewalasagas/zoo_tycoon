/*********************************************************************
** Program name: Project 2
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  Zebra.hpp class
*********************************************************************/

#ifndef ZEBRA_H
#define ZEBRA_H

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

class Zebra : public Animal {
private:
protected:
public:
	Zebra();
	Zebra(int a);
	void setName(std::string n);
	std::string getName();
	double getCost();
	double getbasefoodCost(double x);
	double getPayoff(int x);
	void print();
	std::string printName();		//Name check for baby
	int printAge();
	~Zebra();

};

#endif
