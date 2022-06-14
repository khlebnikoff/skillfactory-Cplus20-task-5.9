#include "Snack.h"



Snack::Snack(string name, short price, short weight, short kKal)
{
	snackName = name;
	snackPrice = abs(price);
	snackWeight = abs(weight);
	snackKKal = abs(kKal);
}
Snack::Snack(string name, short price, short weight)
{
	snackName = name;
	snackPrice = abs(price);
	snackWeight = abs(weight);
}
Snack::Snack(string name, short price)
{
	snackName = name;
	snackPrice =abs( price);
}
Snack::Snack(string name)
{
	snackName = name;
}
string Snack::getSnackName() const
{
	return snackName;
}