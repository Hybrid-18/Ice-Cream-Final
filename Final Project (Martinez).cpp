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
void changeSeason(string userSeason, vector <string> seasonalFlavor, vector <double> seasonalPrice, vector <string> seasonalIngredients) {
	if (userSeason == "Summer") {
		seasonalFlavor.at(1) = "Watermelon";
		seasonalPrice.at(1) = 1;
		seasonalIngredients.at(1) = "Stuff";
		seasonalFlavor.at(2) = "Red-White-Blue";
		seasonalPrice.at(2) = 1;
		seasonalIngredients.at(2) = "Rasberry, blueberry, vanilla ice cream";
		seasonalFlavor.at(3) = "";
		seasonalPrice.at(3) = 1;
		seasonalIngredients.at(3) = "";
		seasonalFlavor.at(4) = "";
		seasonalPrice.at(4) = 1;
		seasonalIngredients.at(4) = "";
		seasonalFlavor.at(5) = "";
		seasonalPrice.at(5) = 1;
		seasonalIngredients.at(5) = "";
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
//figure out rest of seasonal flavors
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
	double userPrice;
	string userIngredients;
	string userSeason;
	int index; //only gets changed when a flavor and its info is added
	int i; //using it to seach through vectors
	bool found;
	vector<string> seasonalFlavor; //I put seasonal flavors into their own vector, makes swapping them out easier (at least i think it will)
	vector<double> seasonalPrice;
	vector<string> seasonalIngredients;
	const int seasonIndex = 5;
	vector<IceCream> Icecream;
	const int MAX = 100; //100 possible objects
	userName = "Vanilla";
	userPrice = 1.50;
	userIngredients = "Vanilla beans";
	index = 1;
	IceCream Icecream.at(index)(userName, userIngredients, userPrice, index); //all errors coming from these 3 overload construct calls
	userName = "Chocolate";
	userPrice = 1.50;
	userIngredients = "Coco powder";
	index = index + 1;
	IceCream Icecream.at(index)(userName, userIngredients, userPrice, index);
	userName = "Strawberry";
	userPrice = 1.50;
	userIngredients = "Frozen strawberries";
	index = index + 1;
	IceCream Icecream.at(index)(userName, userPrice, userIngredients, index);
	
	userSeason = "Summer";
	changeSeason(userSeason, seasonalFlavor, seasonalPrice, seasonalIngredients);


	cout << "---- Enter a command ----" << endl;
	cout << endl; 
	cin >> commandWant;

	while (commandWant != Quit) {

		if (commandWant == New) {
			index = index + 1;
			Icecream.at(index).newFlavor();
		}
		if (commandWant == Season) {
			cout << "What would you like to change the season to? ";
			cin >> userSeason;
			changeSeason(userSeason, seasonalFlavor, seasonalPrice, seasonalIngredients);
		}
		if (commandWant == Batch) {
			Icecream.at(index).addStock();
		}
		if (commandWant == Show_Price) {
			Icecream.at(index).showPrice(); 
		}
		if (commandWant == Show_Ingredients) {
			Icecream.at(index).showIngredients();
		}
		if (commandWant == Change_Price) {
			Icecream.at(index).showPrice();
		}
		if (commandWant == Change_Ingredients) {
			Icecream.at(index).showPrice();
		}
		if (commandWant == Change_Name) {
			Icecream.at(index).showPrice();
		}

		cout << endl;
		cout << "---- Enter a command ----" << endl;
		cout << endl;
		cin >> commandWant;

	}
	return 0;
}

