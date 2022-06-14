#pragma once
#include <string>
using namespace std;

class Snack
{
	string snackName;
	short snackPrice;
	short snackWeight;
	short snackKKal;
public:
	Snack(string name, short price, short weight, short kKal);
	Snack(string name, short price, short weight);
	Snack(string name, short price);
	Snack(string name);
	string getSnackName() const;
};

