// Final Project (Martinez).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "IceCream.h"

void commandFunction() {
	cout << "---- Commands ----" << endl;
	cout << "New - Enter a new flavor" << endl;
	cout << "Season - Change the seasonal flavors" << endl;
	cout << "POS - Run POS function" << endl;
	cout << "Change_Name - Change flavor name" << endl;
	cout << "Change_Price - Change flavor price" << endl;
	cout << "Change_Ingredients - Change flavor ingredients" << endl;
	cout << "Batch - Add to a flavor's stock" << endl;
	cout << "Show_Price - Show a flavor's price" << endl;
	cout << "Show_Ingredients - Show a flavor's ingredients" << endl;
	cout << "Quit - End the program session" << endl;
	cout << endl;
	return;
}
int main()
{
	string commandWant;
	string New = "New";
	string Season = "Season";
	string POS = "POS";
	string Change_Name = "Change_Name";
	string Change_Price = "Change_Price";
	string Change_Ingredients = "Change_Ingredients";
	string Batch = "Batch";
	string Show_Price = "Show_Price";
	string Show_Ingredients = "Show_Ingredients";
	string Quit = "Quit";
	cout << "---- Enter a command ----" << endl;
	cout << endl; 
	cin >> commandWant;
	for (int i = 0; i < 100; ++i) {
		
	}
	if (commandWant == POS) {
	}
}

