#include "pch.h"
#include <iostream>
#include <string>	
#include <iomanip>

using namespace std;

void POS() {

	cout << "$-------  Change  -------$" << endl;
	changeGive = userMoney - taxCost;
	cout << changeGive << endl;
	cout << "--------------------------" << endl;

	cout << endl;
	cout << endl;

	cout << "Denominations ..." << endl;

	cout << endl;

	hundreds = changeGive / 100;
	cout << left << setw(16) << "$100 bills: " << hundreds << endl;
	changePool = changeGive - (hundreds * 100);
	twentys = changePool / 20;
	cout << left << setw(16) << "$20 bills: " << twentys << endl;
	changePool = changePool - (twentys * 20);
	tens = changePool / 10;
	cout << left << setw(16) << "$10 bills: " << tens << endl;
	changePool = changePool - (tens * 10);
	fives = changePool / 5;
	cout << left << setw(16) << "$5 bills: " << fives << endl;
	changePool = changePool - (fives * 5);
	ones = changePool / 1;
	cout << left << setw(16) << "$1 bills: " << ones << endl;
	changePool = changePool - (ones * 1);
	quarters = changePool / .25;
	cout << left << setw(16) << "Quarters: " << left << setw(16) << quarters << endl;
	changePool = changePool - (quarters * .25);
	dimes = changePool / .10;
	cout << left << setw(16) << "Dimes: " << dimes << endl;
	changePool = changePool - (dimes * .10);
	nickels = changePool / .05;
	cout << left << setw(16) << "Nickels: " << nickels << endl;
	changePool = changePool - (nickels * .05);
	pennies = changePool / .01;
	cout << left << setw(16) << "Pennies: " << pennies << endl;
	changePool = changePool - (pennies * 0.01);

}
