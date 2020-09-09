/*********************************************************************
** Program name: Porject 2
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  Penguin.cpp
*********************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
#include "Penguin.h"
using namespace std;

Penguin::Penguin()
{	}

Penguin::Penguin(int a) : Animal(a)
{	}

void Penguin::setName(std::string n)
{
	n = name;
}

string Penguin::getName()
{
	name = "Penguin";
	return name;
}

double Penguin::getCost()
{
	cost = 1000.00;
	return cost;
}

double Penguin::getbasefoodCost(double x)
{
	return x;
}

double Penguin::getPayoff(int x)
{
	payoff = x * (cost * 0.1);
	return payoff;
}

void Penguin::print()
{
	std::cout << " Type: " << this->getName() << endl;
	std::cout << "  Age: " << this->getAge() << endl;
}

string Penguin::printName()		//Name check for baby
{
	cout << this->getName() << endl;
	return this->getName();
}

int Penguin::printAge()
{
	std::cout << this->getAge() << endl;
	return this->getAge();
}

Penguin::~Penguin() 
{	}


