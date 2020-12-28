#pragma once
#include <string>
#include <sstream>
#include "SportEquipment.h"

using namespace std;

class GymEquipment : public SportEquipment
{
private:
	string model;
	float shoeSize = 0;
	float height = 0;
	float width = 0;
	float length = 0;
public:
	GymEquipment(string setName, string setModel) : SportEquipment(setName)
	{
		model = setModel;
	}
	GymEquipment(string setName, string setModel, float setHeight, float setWidth, float setLength) : SportEquipment(setName)
	{
		model = setModel;
		height = setHeight;
		width = setWidth;
		length = setLength;
	}
	GymEquipment(string setName, string setModel, float setShoeSize, float setHeight, float setWidth, float setLength) : SportEquipment(setName)
	{
		model = setModel;
		shoeSize = setShoeSize;
		height = setHeight;
		width = setWidth;
		length = setLength;
	}
	string get_place()
	{
		return "���������� ���";
	}

	string get_season()
	{
		return "�����������";
	}
	string get_info()
	{
		ostringstream info;
		info << "��������: " << name << " ������: " << model << " ������ �����: " << shoeSize
			<< " ������: " << height << " ������: " << width << " �����: " << length;
		return info.str();
	}
};

