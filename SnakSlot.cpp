#include "SnakSlot.h"

#include <iostream>
using namespace std;

SnakSlot::SnakSlot(int q, double v)
{
	slotQuantity = checkP(q);//количество €чеек в слоте 
	slotVolume = checkP(v);//объем €чейки ( по хорошему - нахрен не нужен) 
	slotAvailableCell = slotQuantity;
}
SnakSlot::SnakSlot(int q)
{
	slotQuantity = checkP(q);//количество €чеек в слоте 
	slotAvailableCell = slotQuantity;
}


double SnakSlot::checkP(double a)
{
	if (a != 0)
	{
		//cout << "SnackSlot parameter: "<<a << endl;
		return abs(a);

	}
	else
	{
		cout << " the pararameter must be bigger than zero" << endl;
		return 1;
	}
}
 
void SnakSlot::addSnack(Snack& s)
{
	--slotAvailableCell;//   ¬ычисл€ем оставшиес€ €чейк с в слоте, но также можем назначать отсюда новые стрктуры
	//cout << "available slots: "<<slotAvailableCell << endl;
}
/*
void SnakSlot::testPrintData()
{
	
}
*/
ostream& operator<<(ostream& output, const SnakSlot& m)//  просто проверил - как работает (хорошо работает)
{
	output << "»м€ слота: " << m.slotName << endl
		<< "¬местимость слота: " << m.slotQuantity << endl
		<< "ќбъем слота: " << m.slotVolume << endl;
	return output;
}