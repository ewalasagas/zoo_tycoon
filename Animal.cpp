/*********************************************************************
** Program name: Project 2
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  Animal.cpp
*********************************************************************/
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

Animal::Animal(int a)
{
	age = a;
}

string Animal::getName()
{
	return name;
}

void Animal::setName(string n)
{
	name = n;
}

int Animal::getAge()
{
	return age;
}

void Animal::setAge(int a)
{
	a++;
	age = a;
}

double Animal::getCost()
{
	return cost;
}

void Animal::setCost(double c)
{
	cost = c;
}


int Animal::getnumBabies()
{
	return numBabies;
}

void Animal::setnumBabies(int b)
{
	numBabies = b;
}

double Animal::getbasefoodCost()
{
	return Animal::baseFoodCost;
}

void Animal::setbasefoodCost(double bfc)
{
	bfc = baseFoodCost;
}

double Animal::getPayoff()
{
	return payoff;
}

Animal::~Animal()
{	}

Animal::Animal()
{	}
