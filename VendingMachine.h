#pragma once
#include <string>
#include "SnakSlot.h"
using namespace std;
class VendingMachine
{
	int slotCount;
	string machineName;
	string machineLocation;
	int machineAvailableSlots;
public:
	VendingMachine(int count, string name, string location);
	VendingMachine(int count, string name);
	VendingMachine(int count);
	int addSlot(SnakSlot s);
	int getEmptySlotsCount();
	
};

