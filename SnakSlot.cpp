#include "SnakSlot.h"

#include <iostream>
using namespace std;

SnakSlot::SnakSlot(int q, double v)
{
	slotQuantity = checkP(q);//���������� ����� � ����� 
	slotVolume = checkP(v);//����� ������ ( �� �������� - ������ �� �����) 
	slotAvailableCell = slotQuantity;
}
SnakSlot::SnakSlot(int q)
{
	slotQuantity = checkP(q);//���������� ����� � ����� 
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
	--slotAvailableCell;//   ��������� ���������� ����� � � �����, �� ����� ����� ��������� ������ ����� ��������
	//cout << "available slots: "<<slotAvailableCell << endl;
}
/*
void SnakSlot::testPrintData()
{
	
}
*/
ostream& operator<<(ostream& output, const SnakSlot& m)//  ������ �������� - ��� �������� (������ ��������)
{
	output << "��� �����: " << m.slotName << endl
		<< "����������� �����: " << m.slotQuantity << endl
		<< "����� �����: " << m.slotVolume << endl;
	return output;
}