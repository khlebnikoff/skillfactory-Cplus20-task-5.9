#include <iostream>
#include <string>
#include "Snack.h"
#include "SnakSlot.h"
#include "VendingMachine.h"
using namespace std;

int slotCount;
int setSlotcount()
{
	cout << "введите количество слотов для снэков в вашей машине : ";
	cin >> slotCount;
	return slotCount;
}





int main() 

{
	setlocale(LC_ALL, "");// Включаем поддержку всех языков
	slotCount = setSlotcount();
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnakSlot* slot = new SnakSlot(10/*количество батончиков, которые помещаются в слот*/);
	slot->addSnack(*bounty); //Добавляем батончик в слот * добавил звездочку, т.к.структура динамическая.
	slot->addSnack(*snickers);// по идее мы имеем массив со значениями всех членов структуры snack. но в задании этого нет
	VendingMachine* machine = new VendingMachine(slotCount /*Количество слотов для снеков*/);
	machine->addSlot(*slot); // Помещаем слот обратно в аппарат

    cout << machine->getEmptySlotsCount(); // Должно выводить количество пустых слотов для снеков
	delete machine;
	//cout << *slot;// просто проврил - как работает.

	delete slot;
	delete snickers;
	delete bounty;
}