#pragma once
#include <string>
using namespace std;

class SportEquipment
{
protected:
	string name;
	SportEquipment(string setName) : name(setName) {}

public:
	virtual string get_place() = 0;
	virtual string get_season() = 0;

	string get_name()
	{
		return name;
	}
};