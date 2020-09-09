/*********************************************************************
** Program name: Project 2
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 - Turtle.cpp
*********************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
#include "Animal.h"
#include "Turtle.h"
using namespace std;

Turtle::Turtle() {}

Turtle::Turtle(int a) : Animal(a)
{	}

void Turtle::setName(std::string n)
{
	n = name;
}

string Turtle::getName()
{
	name = "Turtle";
	return name;
}

double Turtle::getCost()
{
	cost = 100.00;
	return cost;
}

double Turtle::getbasefoodCost(double x)
{
	baseFoodCost = x / 2;
	return baseFoodCost;
}

double Turtle::getPayoff(int x)
{
	payoff = x * (cost * 0.1);
	return payoff;
}

void Turtle::print()
{
	std::cout << " Type: " << this->getName() << endl;
	std::cout << "  Age: " << this->getAge() << endl;
}

string 	Turtle::printName()		//Name check for baby
{
	return this->getName();
}

int Turtle::printAge()
{
	return this->getAge();
}

Turtle::~Turtle() 
{	}

