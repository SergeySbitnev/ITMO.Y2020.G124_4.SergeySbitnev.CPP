#pragma once
#include <string>
#include <sstream>
#include "SeasonalSportsEquipment.h"

class WinterSportEquipment : public SeasonalSportsEquipment
{
private:
	string model;
	float shoeSize = 0;
	float height = 0;
	float width = 0;
	float length = 0;

public:
	WinterSportEquipment(string setName, string setModel) : SeasonalSportsEquipment(setName, "����")
	{
		model = setModel;

	}
	WinterSportEquipment(string setName, string setModel, float setHeight, float setWidth, float setLength) : SeasonalSportsEquipment(setName, "����")
	{
		model = setModel;
		height = setHeight;
		width = setWidth;
		length = setLength;
	}
	WinterSportEquipment(string setName, string setModel, float setShoeSize, float setHeight, float setWidth, float setLength) : SeasonalSportsEquipment(setName, "����")
	{
		model = setModel;
		shoeSize = setShoeSize;
		height = setHeight;
		width = setWidth;
		length = setLength;
	}
	string get_info()
	{
		ostringstream info;
		info << "��������: " << name << " ������: " << model << " ������ �����: " << shoeSize
			<< " ������: " << height << " ������: " << width << " �����: " << length;
		return info.str();
	}

};