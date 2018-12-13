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
	string userName;
	string flavors[100];
	int index = 0;
	int i;
	bool found;

	cout << "---- Enter a command ----" << endl;
	cout << endl; 
	cin >> commandWant;

	while (commandWant != Quit) {

		if (commandWant == New) {
			index = index + 1;
			IceCream flavors[index];
			flavors[index].newFlavor(index);
		}
		if (commandWant == Show_Price) {

			cout << "Enter flavor name:	";
			cin >> userName;
			while (found == false) {
				for (int i = 0; i < index; i++) {
					if (flavors[i] == userName) {
						found = true;
					}
				}
			}
			found = false;
			flavors[i].showPrice();

		}
	}
	return;
}

