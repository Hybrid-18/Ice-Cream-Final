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
void changeSeason(string seasonalFlavor[5], double seasonalPrice[5], string seasonalIngredients[5]) {
	cout << "Set a season: " << endl;
	cin >> userSeason;
	if (userSeason == "Summer") {
		seasonalFlavor[1] = "Watermelon";
		seasonalPrice[1] = 1;
		seasonalIngredients[1] = "Stuff";
		seasonalFlavor[2] = "Red-White-Blue";
		seasonalPrice[2] = 1;
		seasonalIngredients[2] = "Rasberry, blueberry, vanilla ice cream";
		seasonalFlavor[3] = "";
		seasonalPrice[3] = 1;
		seasonalIngredients[3] = "";
		seasonalFlavor[4] = "";
		seasonalPrice[4] = 1;
		seasonalIngredients[4] = "";
		seasonalFlavor[5] = "";
		seasonalPrice[5] = 1;
		seasonalIngredients[5] = "";
		return;
	}
	if (userSeason == "Fall") {
		seasonalFlavor[1] = "Pumpkin";
		seasonalPrice[1] = 1;
		seasonalIngredients[1] = "Stuff";
		seasonalFlavor[2] = "Candy Apple";
		seasonalPrice[2] = 1;
		seasonalIngredients[2] = "";
		seasonalFlavor[3] = "Cranberry";
		seasonalPrice[3] = 1;
		seasonalIngredients[3] = "";
		seasonalFlavor[4] = "Apple Pie";
		seasonalPrice[4] = 1;
		seasonalIngredients[4] = "";
		seasonalFlavor[5] = "";
		seasonalPrice[5] = 1;
		seasonalIngredients[5] = "";
		return;
	}
	if (userSeason == "Winter") {
		seasonalFlavor[1] = "Peppermint";
		seasonalPrice[1] = 1;
		seasonalIngredients[1] = "Stuff";
		seasonalFlavor[2] = "Egg-Nogg";
		seasonalPrice[2] = 1;
		seasonalIngredients[2] = "";
		seasonalFlavor[3] = "Gingerbread";
		seasonalPrice[3] = 1;
		seasonalIngredients[3] = "";
		seasonalFlavor[4] = "";
		seasonalPrice[4] = 1;
		seasonalIngredients[4] = "";
		seasonalFlavor[5] = "";
		seasonalPrice[5] = 1;
		seasonalIngredients[5] = "";
		return;
	}
	if (userSeason == "Spring") {
		seasonalFlavor[1] = "Orange Sherbert";
		seasonalPrice[1] = 1;
		seasonalIngredients[1] = "Stuff";
		seasonalFlavor[2] = "Lime Sherbert";
		seasonalPrice[2] = 1;
		seasonalIngredients[2] = "";
		seasonalFlavor[3] = "Lemon Sherbert";
		seasonalPrice[3] = 1;
		seasonalIngredients[3] = "";
		seasonalFlavor[4] = "";
		seasonalPrice[4] = 1;
		seasonalIngredients[4] = "";
		seasonalFlavor[5] = "";
		seasonalPrice[5] = 1;
		seasonalIngredients[5] = "";
		return;

	}
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
	string seasonalFlavor[5];
	double seasonalPrice[5];
	string seasonalFlavors[5];

	cout << "---- Enter a command ----" << endl;
	cout << endl; 
	cin >> commandWant;

	while (commandWant != Quit) {

		if (commandWant == New) {
			index = index + 1;
			IceCream flavors[index];
			flavors[index].newFlavor(index);
		}
		if (commandWant == Season) {
			changeSeason(seasonalFlavor[5], seasonalPrice[5], seasonalIngredients[5]);
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
		cout << endl;
		cout << "---- Enter a command ----" << endl;
		cout << endl;
		cin >> commandWant;

	}

	return;
}

