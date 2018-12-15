#include "pch.h"
#include "IceCream.h"


IceCream::IceCream()
{
	flavors[index] = " - ";
	prices[index] = 0.00;
	ingredients[index] = " - ";
}
IceCream::IceCream(string userName, string userIngredients, float userPrice) {
	flavors[index] = userName;
	prices[index] = userPrice;
	ingredients[index] = userIngredients;
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
	IceCream flavors1(string userName, string userIngredients, float userPrice);
	return;

}
void IceCream::changePrice(float userPrice) {
	cout << "Enter flavor name: ";
	cin >> userName;
	while (found == false) {
		for (int i = 0; i < index; i++) {
			if (flavors[i] == userName) {
				found = true;
			}
		}
	}
	found = false;
	cout << "Enter a new flavor price: ";
	cin >> userPrice;
	prices[index] = userPrice;
	return;
}
void IceCream::changeIngredients(string userIngredients) {
	cout << "Enter flavor name: ";
	cin >> userName;
	while (found == false) {
		for (int i = 0; i < index; i++) {
			if (flavors[i] == userName) {
				found = true;
			}
		}
	}
	found = false;
	cout << "Enter new ingredient listing for the flavor: ";
	cin.ignore;
	getline(cin, userIngredients);
	ingredients[index] = userIngredients;
	return;
}
void IceCream::addStock() {
	while (found == false) {
		for (int i = 0; i < index; i++) {
			if (flavors[i] == userName) {
				found = true;
			}
		}
	}
	found = false;
	stock[i] = stock[i] + batch;
	return;
}
float IceCream::showPrice() const {
	return prices[index];
}
string IceCream::showIngredients() const {
	return ingredients[index];
}


