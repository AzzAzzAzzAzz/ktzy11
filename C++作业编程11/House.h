#pragma once
#include "Building.h"
class House :
	public Building
{
public:
	void Input();
	void Show();
private:
	int BadroomNum;
	int BathroomNum;
};

