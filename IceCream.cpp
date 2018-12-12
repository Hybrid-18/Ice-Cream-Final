#include "pch.h"
#include "IceCream.h"


IceCream::IceCream()
{
	flavorName = " - ";
	flavorPrice = 0.00;
	flavorIngredients = " - ";
}
IceCream::IceCream(string userName, string userIngredients, float userPrice) {
	index = index + 1;
	flavors[index] = userName;
	prices[index] = userPrice;
	ingredients[index] = userIngredients;
	return;
}
void IceCream::newFlavor() {
	cin.ignore;
	cout << endl;
	cout << "Enter new flavor name: ";
	getline(cin, userName);
	cin.ignore;
	cout << "Enter flavor ingredients";
	getline(cin, userIngredients);
	cout << "Enter flavor price: ";
	cin >> userPrice;
	IceCream flavors[index](string userName, string userIngredients, float userPrice);
	return;

}
void IceCream::changePrice(float userPrice) {
	flavors[index] = userPrice;
	return;
}
void IceCream::changeIngredients(string userIngredients) {
	ingredients[index] = userIngredients;
	return;
}
float IceCream::showPrice() const {
	cout << "Enter flavor name:	"; 
	cin >> userName;
	while (flavors[index] != userName) {
		for (int i = 0; i < index; ++i) {

		}
	}
}
string IceCream::showIngredients() const {
	return flavorIngredients;
}


