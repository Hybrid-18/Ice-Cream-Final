#pragma once
#include <iostream>
#include <string>
using namespace std;

class IceCream
{

public:
	IceCream();
	IceCream(string userName, string userIngredients, float userPrice);
	void newFlavor();
	void changePrice(float userPrice);
	void changeIngredients(string userIngredients);
	float showPrice() const;
	string showIngredients() const;
private:
	string flavors[100];
	string ingredients[100];
	float prices[100];
	string season;
	string flavorName;
	string flavorIngredients;
	float flavorPrice;
	int index = 0;
	string userName;
	
	string userName;
	string userIngredients;
	float userPrice;
};

//have different seasons, program gives you an option to set a season, which will yield unique seasonal flavors
//POS system, allow user to enter amount of scoops (single, double, pint) that will be mulitplied with price
//keep track of how much of a flavor you have
//if shop is out of a flavor and it is selected during ring up, POS will alert
//preset flavors, like vanilla, chocolate, strawberry, 

