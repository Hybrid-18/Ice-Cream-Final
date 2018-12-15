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
void changeSeason(string userSeason, string seasonalFlavor[5], double seasonalPrice[5], string seasonalIngredients[5]) {
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
	string userSeason;
	string Icecream[100]; //array for the objects maybe? 
	string flavors[100];
	double prices[100];
	string ingredients[100];
	int index; //only gets changed when a flavor and its info is added
	int i; //using it to seach through arrays 
	bool found;
	string seasonalFlavor[5]; //I put seasonal flavors into their own array, makes swapping them out easier (at least i think it will)
	double seasonalPrice[5];
	string seasonalIngredients[5];

	index = 1;
	IceCream Icecream[index];
	flavors[index] = "Vanilla";
	prices[index] = 1.50;
	ingredients[index] = "Vanilla beans";
	index = index + 1;
	flavors[index] = "Chocolate";
	prices[index] = 1.50;
	ingredients[index] = "Coco powder";
	index = index + 1;
	flavors[index] = "Strawberry";
	prices[index] = 1.50;
	ingredients[index] = "Frozen strawberries";
	
	userSeason = "Summer";
	changeSeason(userSeason, seasonalFlavor, seasonalPrice, seasonalIngredients);


	cout << "---- Enter a command ----" << endl;
	cout << endl; 
	cin >> commandWant;

	while (commandWant != Quit) {

		if (commandWant == New) {
			index = index + 1;
			IceCream Icecream[4];
			Icecream[index].newFlavor();
		}
		if (commandWant == Season) {
			cout << "What would you like to change the season to? ";
			cin >> userSeason;
			changeSeason(userSeason, seasonalFlavor, seasonalPrice, seasonalIngredients);
		}
		if (commandWant == Batch) {
			cout << "Enter a flavor to add stock to: ";
			cin.ignore; 
			getline(cin, userName);
			//specify how much to add, call function
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
			Icecream[index].showPrice(); //error because an object isn't being created in this loop, name an object an it'll be fixed 

		}
		if (commandWant == Show_Ingredients) {
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
			Icecream[index].showIngredients(); //same as last comment
		}
		cout << endl;
		cout << "---- Enter a command ----" << endl;
		cout << endl;
		cin >> commandWant;

	}

	return;
}

