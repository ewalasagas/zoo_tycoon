/*********************************************************************
** Program name: Project 2
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  Zebra.cpp
*********************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
#include "Animal.h"
#include "Zebra.h"
using namespace std;

Zebra::Zebra()
{	}

Zebra::Zebra(int a) : Animal(a)
{	}

void Zebra::setName(std::string n)
{
	n = name;
}

string Zebra::getName()
{
	name = "Zebra";
	return name;
}

double Zebra::getCost()
{
	double cost = 5000.00;
	return cost;
}


double Zebra::getbasefoodCost(double x)
{
	baseFoodCost = x * 3;
	return baseFoodCost;
}


double Zebra::getPayoff(int x)
{
	payoff = x * (cost * 0.1);
	return payoff;
}

void Zebra::print()
{
	cout << " Type: " << this->getName() << endl;
	cout << "  Age: " << this->getAge() << endl;
}

string Zebra::printName()		//Name check for baby
{
	return this->getName();
}

int Zebra::printAge()
{
	return this->getAge();
}

Zebra::~Zebra()
{	}

