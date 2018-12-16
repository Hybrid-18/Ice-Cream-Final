#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class IceCream
{
public:
	
	IceCream();// default constructor
	IceCream(string userName, string userIngredients, float userPrice, int index); //overload constructor
	void newFlavor();
	void changePrice(float userPrice);
	void changeIngredients(string userIngredients);
	void addStock();
	float showPrice();
	string showIngredients();
private:
	vector <string> flavors;
	vector <string> ingredients;
	vector <float> prices;
	vector <int> stock[100];
	int batch;
	int i;
	string season;
	string userName;	
	string userIngredients;
	int index = 0; //only gets changed when a flavor and it's information is added
	float userPrice;
	bool found = false; 
};

//have different seasons, program gives you an option to set a season, which will yield unique seasonal flavors
//POS system, allow user to enter amount of scoops (single, double, pint) that will be mulitplied with price
//keep track of how much of a flavor you have
//if shop is out of a flavor and it is selected during ring up, POS will alert
//preset flavors, like vanilla, chocolate, strawberry, 

