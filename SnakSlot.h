#pragma once
#include <string>
#include "Snack.h"

using namespace std;

class SnakSlot
{
	int slotQuantity;
	double slotVolume;
	string slotName;
	int slotAvailableCell;



public:
	SnakSlot(int q, double v);
	SnakSlot(int q);
	double checkP(double a);
	void addSnack(Snack& s);//вычисляем здесь количество свободных ячеек с в слоте и назначаем массив структур (классов)
	//void testPrintData();
	//simpte test cout
	friend ostream& operator<<(ostream& output, const SnakSlot& m);
};

