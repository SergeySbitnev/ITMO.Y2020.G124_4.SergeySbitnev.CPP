#pragma once
#include <iostream>
#include <string>
#include "SportEquipment.h"

class SeasonalSportsEquipment : public SportEquipment
{
protected:
	string season;
	SeasonalSportsEquipment(string setName, string setSeason) : SportEquipment(setName)
	{
		season = setSeason;
	}
public:

	string get_place()
	{
		return "улица";
	}

	string get_season()
	{
		return season;
	}
};