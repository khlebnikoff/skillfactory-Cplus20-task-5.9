#include <iostream>
#include <string>
#include "Snack.h"
#include "SnakSlot.h"
#include "VendingMachine.h"
using namespace std;

int slotCount;
int setSlotcount()
{
	cout << "������� ���������� ������ ��� ������ � ����� ������ : ";
	cin >> slotCount;
	return slotCount;
}





int main() 

{
	setlocale(LC_ALL, "");// �������� ��������� ���� ������
	slotCount = setSlotcount();
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnakSlot* slot = new SnakSlot(10/*���������� ����������, ������� ���������� � ����*/);
	slot->addSnack(*bounty); //��������� �������� � ���� * ������� ���������, �.�.��������� ������������.
	slot->addSnack(*snickers);// �� ���� �� ����� ������ �� ���������� ���� ������ ��������� snack. �� � ������� ����� ���
	VendingMachine* machine = new VendingMachine(slotCount /*���������� ������ ��� ������*/);
	machine->addSlot(*slot); // �������� ���� ������� � �������

    cout << machine->getEmptySlotsCount(); // ������ �������� ���������� ������ ������ ��� ������
	delete machine;
	//cout << *slot;// ������ ������� - ��� ��������.

	delete slot;
	delete snickers;
	delete bounty;
}