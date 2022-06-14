#include "VendingMachine.h"
VendingMachine::VendingMachine(int count, string name, string location)
{
	int slotCount = count;
	string machineName = name;
	string machineLocation = location;
	machineAvailableSlots = slotCount;
}
VendingMachine::VendingMachine(int count, string name)
{
	int slotCount = count;
	string machineName = name;
	machineAvailableSlots = slotCount;
}
VendingMachine::VendingMachine(int count)
{
	int slotCount = count;
	machineAvailableSlots = slotCount;
}
int VendingMachine::addSlot(SnakSlot s)// заправляем лоток в аппарат 
{
	--machineAvailableSlots;// вариант вычисления свободный слотов - 1 без геттеров.
	return slotCount-machineAvailableSlots;

}
int VendingMachine::getEmptySlotsCount()
{
	return --machineAvailableSlots; 
}
	