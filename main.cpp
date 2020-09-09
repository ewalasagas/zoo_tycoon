/*********************************************************************
** Program name: Project 2
** Author: Elaine Alasagas
** Date: 2/4/2019
** Description: CS162_400_WINTER2019 -  main.cpp - zoo tycoon game 
*********************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <limits>
#include <cmath>
#include <algorithm>
#include <fstream>
#include "Tiger.h"
#include "Penguin.h"
#include "Turtle.h"
#include "Zebra.h"
#include "Animal.h"
#include "Zoo.h"
using namespace std;

int main()
{
	Tiger *t = new Tiger();		//intializing classes
	Penguin *p = new Penguin();
	Turtle *tu = new Turtle();
	Zebra *zu = new Zebra();
	Zoo *zoo = new Zoo();

	char startGame;		//Ask user to start game or not
	int gameChoice;		//Switch case for user menu to buy an animal
	double money;		//Total money to start and end with
	double food;		//How much the food cost - set by the user
	char confirm;		//Y/N user input to buy an animal 
	char yesorno;		//Y/N user input to return to the menu to buy an animal
	char endday;		//yes or no to start next day
	int age;			//Age of animals
	int buyLimit;		//Asks user if they want to buy 1 or 2
	double sum;

	int numTiger = 0;	//Initializing count variables
	int numPen = 0;
	int numTurt = 0;
	int numZebra = 0;

	std::cout << "--------Zoo Animal Tycoon Game--------" << endl;
	std::cout << endl;


	//User direction
	std::cout << "Welcome to the zoo tycoon game! At the start of the" << endl;
	std::cout << "game, you will enter your starting cash and how much" << endl;
	std::cout << "the food wil cost to feed the animals per day. The " << endl;
	std::cout << "goal of the game is to make the as much money as you" << endl;
	std::cout << "can at the zoo.  If your remaining balance is 0 or less" << endl;
	std::cout << "the game is over." << endl;
	std::cout << endl;
	std::cout << "At the start of the game, you get 3 animals that are one " << endl;
	std::cout << "years old.Animals over 3 years old can have a child (this " << endl;
	std::cout << "randomly happens at the zoo. There are random events each " << endl;
	std::cout << "day that will effect your animal inventory. Best of luck! " << endl;
	std::cout << endl;
	std::cout << endl;

while (true)
{
	std::cout << "Enter starting cash over over $10,000" << endl;
	std::cout << "Starting cash: ";
	if (std::cin >> money && (money > 10000.0))		//input validation starting cash
	{
		break;
	}
	else
	{
		std::cout << "Not a valid entry." << std::endl;
		std::cin.clear();
		std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}

while (true)
{
	std::cout << "Enter base food cost: ";
	if (std::cin >> food && (food > 0.0))		//input validation starting cash
	{
		break;
	}
	else
	{
		std::cout << "Not a valid entry." << std::endl;
		std::cin.clear();
		std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}
while (true)
{
	std::cout << "Would you like to start the game? (Y/N)" << endl;
	std::cin >> startGame;
	if (startGame == 'Y' || startGame == 'y')
	{
		break;
	}
	else if (startGame == 'N' || startGame == 'n')
	{
		std::cout << "Game ends.  Thanks for playing!" << endl;
		terminate();
	}
	else
		std::cout << "Not a valid entry.  Please enter Y or N" << endl;
	std::cout << endl;
}


std::cout << "Welcome to the game! You have the following: " << endl;
std::cout << "Start: " << endl;

	vector<Animal*> animals;	//Initailize array
	animals.push_back(new Tiger(1));
	numTiger++;
	animals.push_back(new Penguin(1));
	numPen++;
	animals.push_back(new Turtle(1));
	numTurt++;
	zoo->addAnimal(animals);	//Function to add them to inventory
	zoo->displayAnimal();		//Display animal inventory

	sum = (t->getCost() + p->getCost() + tu->getCost());
	money = money - (t->getCost() + p->getCost() + tu->getCost());		//Sum cost of each animal in inventory
std::cout << "This cost you: $" << sum << endl;

std::cout << "You have $" << money << " left. ";

while (true)
	do {
		do //for loop menu
		{
			while (true)
			{
			std::cout << "What animal would you like to buy?" << endl;
			std::cout << "(1) Tiger" << endl;
			std::cout << "(2) Penguin " << endl;
			std::cout << "(3) Turtle " << endl;
			std::cout << "(4) Zebra " << endl;
			std::cout << "(5) See inventory " << endl;
			std::cout << "(6) End the day " << endl;
			std::cout << "(7) Quit " << endl;
			std::cout << "Choice: ";
			if (std::cin >> gameChoice && (gameChoice > 0 && gameChoice < 8))
			{
				break;
			}
			else
			{
				std::cout << "Please enter a number between 1-7 " << std::endl;
				std::cin.clear();
				std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
			}

			switch (gameChoice)
			{
			case 1:
				//Tiger animal choice
				std::cout << "Tiger cost: " << t->getCost() << endl;
				std::cout << "Food cost: " << t->getbasefoodCost(food) << endl;
				while (true)
				{
					std::cout << "How many would you like to buy, 1 or 2?  " << endl;
					if (std::cin >> buyLimit && (buyLimit == 1 || buyLimit == 2))
					{
						break;
					}
					else
					{
						std::cout << "Please enter a valid choice between 1 and 2" << std::endl;
						std::cin.clear();
						std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
					}
				}

				if (buyLimit == 1)
				{
						money = money - t->getCost();
						std::cout << "Total left: $" << money << endl;
						numTiger++;
						age = 3;
						vector<Animal*> tigers;	//Initailize array
						tigers.push_back(new Tiger(age));
						zoo->checkinventorySize();	//Check if zoo capacity reached over 10
						zoo->addAnimal(tigers);
						break;
				}
				else if (buyLimit == 2)
				{
						money = money - (t->getCost() + t->getCost());
						std::cout << "Total left: $" << money << endl;
						numTiger++;
						numTiger++;
						age = 3;
						vector<Animal*> tigers2;	//Initailize array
						tigers2.push_back(new Tiger(age));
						tigers2.push_back(new Tiger(age));
						zoo->addAnimal(tigers2);
						//zoo->checkinventorySize();	//Check if zoo capacity reached over 10
						break;
				}
				break;


				case 2:
					//Penguin animal choice
					std::cout << "Penguin cost: " << p->getCost() << endl;
					std::cout << "Food cost: " << p->getbasefoodCost(food) << endl;
					while (true)
					{
						std::cout << "How many would you like to buy, 1 or 2?  " << endl;
						if (std::cin >> buyLimit && (buyLimit == 1 || buyLimit == 2))
						{
							break;
						}
						else
						{
							std::cout << "Please enter a valid choice between 1 and 2" << std::endl;
							std::cin.clear();
							std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
						}
					}
					if (buyLimit == 1)
					{
							money = money - p->getCost();
							std::cout << "Total left: $" << money << endl;
							numPen++;
							age = 3;
							vector<Animal*> penguin;	//Initailize array
							penguin.push_back(new Penguin(age));
							zoo->addAnimal(penguin);
							zoo->checkinventorySize();	//Check if zoo capacity reached over 10
							break;
					}
					else if (buyLimit == 1)
					{
							money = money - (p->getCost() + p->getCost());
							std::cout << "Total left: $" << money << endl;
							numPen++;
							numPen++;
							age = 3;
							vector<Animal*> penguin2;	//Initailize array
							penguin2.push_back(new Penguin(age));
							penguin2.push_back(new Penguin(age));
							zoo->addAnimal(penguin2);
							zoo->checkinventorySize();	//Check if zoo capacity reached over 10
							break;
					}
					break;

				case 3:
					//Turtle animal choice
					std::cout << "Turtle cost: " << tu->getCost() << endl;
					std::cout << "Food cost: " << tu->getbasefoodCost(food) << endl;
					while (true)
					{
						std::cout << "How many would you like to buy, 1 or 2?  " << endl;
						if (std::cin >> buyLimit && (buyLimit == 1 || buyLimit == 2))
						{
							break;
						}
						else
						{
							std::cout << "Please enter a valid choice between 1 and 2" << std::endl;
							std::cin.clear();
							std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
						}
					}
					if (buyLimit == 1)
					{
							money = money - tu->getCost();
							std::cout << "Total left: $" << money << endl;
							numTurt++;
							age = 3;
							vector<Animal*> turtles;	//Initailize array
							turtles.push_back(new Turtle(age));
							zoo->addAnimal(turtles);
							zoo->checkinventorySize();	//Check if zoo capacity reached over 10
							break;
					}
					else if (buyLimit == 2)
					{
							money = money - (tu->getCost() + tu->getCost());
							std::cout << "Total left: $" << money << endl;
							numTurt++;
							numTurt++;
							age = 3;
							vector<Animal*> turtles2;	//Initailize array
							turtles2.push_back(new Turtle(age));
							turtles2.push_back(new Turtle(age));
							zoo->addAnimal(turtles2);
							zoo->checkinventorySize();	//Check if zoo capacity reached over 10
							break;
					}
					break;

				case 4:
					//Zebra animal choice
					std::cout << "Zebra cost: " << zu->getCost() << endl;
					std::cout << "Food cost: " << zu->getbasefoodCost(food) << endl;
					while (true)
					{
						std::cout << "How many would you like to buy, 1 or 2?  " << endl;
						if (std::cin >> buyLimit && (buyLimit == 1 || buyLimit == 2))
						{
							break;
						}
						else
						{
							std::cout << "Please enter a valid choice between 1 and 2" << std::endl;
							std::cin.clear();
							std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
						}
					}
					if (buyLimit == 1)
					{
							money = money - zu->getCost();
							std::cout << "Total left: $" << money << endl;
							numZebra++;
							age = 3;
							vector<Animal*> zeb;	//Initailize array
							zeb.push_back(new Zebra(age));
							zoo->addAnimal(zeb);
							zoo->checkinventorySize();	//Check if zoo capacity reached over 10
							break;
					}
					else if (buyLimit == 2)
					{
							money = money - (zu->getCost() + zu->getCost());
							std::cout << "Total left: $" << money << endl;
							numZebra++;
							numZebra++;
							age = 3;
							vector<Animal*> zeb2;	//Initailize array
							zeb2.push_back(new Zebra(age));
							zeb2.push_back(new Zebra(age));
							zoo->addAnimal(zeb2);
							zoo->checkinventorySize();	//Check if zoo capacity reached over 10
							break;
					}
					break;

				case 5:
					std::cout << "Your current zoo inventory: " << endl;
					zoo->displayAnimal();

					break;

				case 6:
					//Move onto the random event/end of day
					std::cout << "Move to end of day " << endl;
					break;

				case 7:
					std::cout << "Thanks for playing! " << endl;
					terminate();
				}
				zoo->animalAge();	//increase age by 1 for next day age
				std::cout << "Return to main menu? (Y/N)" << std::endl;
				std::cin >> yesorno;
			} while (yesorno == 'Y' || yesorno == 'y');
			
			int rand_event;		//Returns integer for random event
			rand_event = zoo->randomNumber();

			string checkAge;	//Case 3: check if thre is capacity in zoo for baby
			string babyName;	//Case 3: string to hold pregnant animal name
			string sickAnimal;	//Case 1: string to hold sick animal name
			int bonus;			//Case 2: for total of tigers
			double x;			//Case 2: for the number of tigers multiplied by bonus cost of each tiger

			vector<Animal*> babyadd;	//Case 3: Initailize array for added baby 
			switch (rand_event)
			{
			case 1:
				//Sick animal removed from zoo event
				std::cout << "A sickness occurs to an animal in the zoo!" << endl;
				sickAnimal = zoo->animalSick(rand_event);

				if (sickAnimal == "Tiger")
				{
					numTiger--;
				}
				else if (sickAnimal == "Penguin")
				{
					numPen--;
				}
				else if (sickAnimal == "Turtle")
				{
					numTurt--;
				}
				else if (sickAnimal == "Zebra")
				{
					numZebra--;
				}
				std::cout << "Num Tiger: " << numTiger << endl;
				std::cout << "Num Penguin: " << numPen << endl;
				std::cout << "Num Turtle: " << numTurt << endl;
				std::cout << "Num Zebra: " << numZebra << endl;

				std::cout << sickAnimal << " is removed from the zoo. " << endl;
				zoo->removeAnimal(rand_event);
				zoo->displayAnimal();

				break;


			case 2:
				//All tigers have a bonus event
				std::cout << "A boom in zoo attendance occurs!" << endl;
				bonus = rand() % (500 - 250) + 1 + 250;
				if (numTiger * bonus < 0)
				{
					x = bonus;
				}
				else
				{
					x = numTiger * bonus;
				}

				money = money + x;

				std::cout << "All Tigers earn $" << bonus << " each!" << endl;
				std::cout << "You earned a total of $" << x << " from all tigers." << endl;
				std::cout << "You have $" << money << " leftover." << endl;

				break;

			case 3:		
				//Add baby to inventory
				babyName = zoo->findAdult(rand_event);

				if (zoo->numTigerBaby(babyName) >= 1)
				{
					std::cout << "Unfotunately, you can only have 1 Tiger baby at the zoo." << endl;
					babyName = " ";
				}
				else if (zoo->numPenginBaby(babyName)== 5 &&
					zoo->numTurtleBaby(babyName) == 10 &&
					zoo->numZebraBaby(babyName) == 3)
				{
					babyName = " ";
				}
				else 
				{
					if (babyName == "Tiger")
					{
						babyadd.push_back(new Tiger(0));
						zoo->addAnimal(babyadd);
						std::cout << "Welcome baby " << babyName << " to the zoo!" << endl;
						numTiger++;
					}
					else if (babyName == "Penguin")
					{
						babyadd.push_back(new Penguin(0));
						zoo->addAnimal(babyadd);
						std::cout << "Welcome baby " << babyName << " to the zoo!" << endl;
						numPen++;
					}
					else if (babyName == "Turtle")
					{
						babyadd.push_back(new Turtle(0));
						zoo->addAnimal(babyadd);
						std::cout << "Welcome baby " << babyName << " to the zoo!" << endl;
						numTurt++;
					}
					else if (babyName == "Zebra")
					{
						babyadd.push_back(new Zebra(0));
						zoo->addAnimal(babyadd);
						std::cout << "Welcome baby " << babyName << " to the zoo!" << endl;
						numTurt++;
					}
					else if (babyName == " ")
					{
						std::cout << "All the babies are sleeping!" << endl;
					}
				}
				zoo->checkinventorySize();	//Check if zoo capacity reached over 10
				break;

			case 4:
				//does nothing
				std::cout << "Looks like its time to close the zoo." << endl;
				std::cout << "All the animals are sleeping." << endl;

				break;
			}

			//Write to a file and print
			zoo->writeEventTxt(rand_event);
			zoo->openEventTxt();
			std::cout << "----------End of day----------" << endl;
			double TigerFed = 0;
			double PenguinFed = 0; 
			double TurtleFed = 0;
			double ZebraFed = 0;		//Get cost to feed animals 
			double loss = 0;		//Sum of all these costs
			
			//Checking if profit is negative and re-initializing to 0
			double profit = 0;
			double profitTiger = 0;
			double profitPenguin = 0;
			double profitTurtle = 0;
			double profitZebra = 0;

			//Checking if numbers are negative and re-initializing to 0
			if (numTiger <= 0) //cost of food for tiger
			{
				TigerFed = 0;
				profitTiger = 0;
			}
			else
				TigerFed = numTiger * t->getbasefoodCost(food);
				profitTiger = t->getPayoff(numTiger);

			if (numPen <= 0) //cost of food for penguin
			{
				PenguinFed = 0;
				profitPenguin = 0;
			}
			else
				PenguinFed = numPen * p->getbasefoodCost(food);
				profitPenguin = p->getPayoff(numPen);

			if (numTurt <= 0) //cost of food for turtle
			{
				TurtleFed = 0;
				profitTurtle = 0;
			}
			else
				TurtleFed = numTurt * tu->getbasefoodCost(food);
				profitTurtle = tu->getPayoff(numTurt);

			if (numZebra <= 0) //cost of food for zebra
			{
				ZebraFed = 0;
				profitZebra = 0;
			}
			else
				ZebraFed = numZebra * zu->getbasefoodCost(food);
				profitZebra = zu->getPayoff(numZebra);

			loss = TigerFed + PenguinFed + TurtleFed + ZebraFed; //Total cost to feed animals for the day
			std::cout << "Total cost of feed: $" << setw(6) << loss << endl;
			profit = profitTiger + profitPenguin + profitTurtle + profitZebra; 	//calculate profit payoff
			std::cout << "Profit for day: $" << setw(6) << profit << endl;
			money = money + profit;
			money = money - loss;
			std::cout << "End of day total: $" << setw(6) << money << endl;
			std::cout << endl;

		while (true)
			{
			std::cout << "You have $" << money << " left. ";
			std::cout << "Would you like to move to the next day? (Y/N)" << endl;
			std::cin >> endday;
			if (endday == 'Y' || endday == 'y')
			{

				//Check if negative value of number then reinitialize to 0
				if (numTiger <= 0)
				{
					numTiger = 0;
				}
				else numTiger;

				if (numPen <= 0)
				{
					numPen = 0;
				}
				else numPen;

				if (numTurt <= 0)
				{
					numTurt = 0;
				}
				else numTurt;

				if (numZebra <= 0)
				{
					numZebra = 0;
				}
				else numZebra;
				break;
			}
			else if (endday == 'N' || endday == 'n')
			{
				std::cout << "Thanks for playing! " << endl;
				terminate();
			}
			else
				std::cout << "Not a valid entry.  Please enter Y or N" << endl;
			std::cout << endl;
			std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
		} while (endday == 'Y' || endday == 'y');
		std::cout << "End program" << endl;
	return 0;
}