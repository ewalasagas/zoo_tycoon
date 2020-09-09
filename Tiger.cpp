/*********************************************************************
** Program name: Project 2
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  Tiger.cpp
*********************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
#include "Animal.h"
#include "Tiger.h"
using namespace std;

Tiger::Tiger() {}

Tiger::Tiger(int a) : Animal(a)
{	}

void Tiger::setName(std::string n)
	{
		n = name;
	}
string Tiger::getName()
	{
		name = "Tiger";
		return name;
	}

double Tiger::getCost()
	{
		cost = 10000.00;
		return cost;
	}

double Tiger::getbasefoodCost(double x)
	{
		baseFoodCost = x * 5;
		return baseFoodCost;
	}


double Tiger::getPayoff(int x)
	{
		payoff = x * (cost * 0.2);
		return payoff;
	}

void Tiger::print()
	{
		std::cout << " Type: " << this->getName() << endl;
		std::cout << "  Age: " << this->getAge() << endl;
	}

string Tiger::printName() //Name check for baby		
	{
		return this->getName();
	}

int Tiger::printAge() //Age check for baby
	{
		return this->getAge();
	}

Tiger::~Tiger() {};		//destructor

