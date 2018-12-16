#include "pch.h"
#include "IceCream.h"


IceCream::IceCream()
{
	flavors.at(index) = " - ";
	prices.at(index) = 0.00;
	ingredients.at(index) = " - ";
}
IceCream::IceCream(string userName, string userIngredients, float userPrice, int index) {
	flavors.at(index) = userName;
	prices.at(index) = userPrice;
	ingredients.at(index) = userIngredients;
	return;
}
void IceCream::newFlavor() {

	index = index + 1;
	cin.ignore;
	cout << endl;
	cout << "Enter new flavor name: ";
	getline(cin, userName);
	cin.ignore;
	cout << "Enter flavor ingredients";
	getline(cin, userIngredients);
	cout << "Enter flavor price: ";
	cin >> userPrice;
	IceCream Icecream.at(index)(string userName, string userIngredients, float userPrice);
	return;

}
void IceCream::changePrice(float userPrice) {
	cout << "Enter flavor name: ";
	cin >> userName;
	while (found == false) {
		for (int i = 0; i < index; i++) {
			if (flavors.at(i) == userName) {
				found = true;
			}
		}
		if (i == index and found == false) {
			cout << "That flavor doesn't exist, enter a new flavor name: ";
			cin >> userName;
		}
	}
	found = false;
	cout << "Enter a new flavor price: ";
	cin >> userPrice;
	prices.at(i) = userPrice;
	return;
}
void IceCream::changeIngredients(string userIngredients) {
	cout << "---- Changing Ingredients ----" << endl;
	cout << endl;
	cout << "Enter flavor name: ";
	cin >> userName;
	while (found == false) {
		for (int i = 0; i < index; i++) {
			if (flavors.at(i) == userName) {
				found = true;
			}
		}
		if (i == index and found == false) {
			cout << "That flavor doesn't exist, enter a new flavor name: ";
			cin >> userName;
		}
	}
	found = false;
	cout << "Enter new ingredient listing for the flavor: ";
	cin.ignore;
	getline(cin, userIngredients);
	ingredients.at(i) = userIngredients;
	return;
}
void IceCream::addStock() {
	cout << "Which flavor would you like to add stock to? ";
	cin >> userName;
	while (found == false) {
		for (int i = 0; i < index; i++) {
			if (flavors.at(i) == userName) {
				found = true;
			}
		}
		if (i == index and found == false) {
			cout << "That flavor doesn't exist, enter a new flavor name: ";
			cin >> userName;
		}
	}
	found = false;
	cout << "How many batches would you like to add (1 batch = 12 servings): " << endl;
	cin >> batch;
	batch = batch * 12;
	stock->at(i) = stock->at(i) + batch;
	cout << "You have added " << batch << "servings to the flavor: " << flavors[i] << endl;
	return;
}
float IceCream::showPrice() {
	cout << "Enter a flavor name: ";
	cin >> userName;
	while (found == false) {
		for (int i = 0; i < index; i++) {
			if (flavors.at(i) == userName) {
				found = true;
			}
		}
		if (i == index and found == false) {
			cout << "That flavor doesn't exist, enter a new flavor name: ";
			cin >> userName;
		}
	}
	found = false;
	return prices.at(i);
}
string IceCream::showIngredients() {
	cout << "Enter a flavor name: ";
	cin >> userName;
	while (found == false) {
		for (int i = 0; i < index; i++) {
			if (flavors.at(i) == userName) {
				found = true;
			}
		}
		if (i == index and found == false) {
			cout << "That flavor doesn't exist, enter a new flavor name: ";
			cin >> userName;
		}
	}
	found = false;
	return ingredients.at(i);
}


