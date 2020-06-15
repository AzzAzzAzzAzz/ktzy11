#pragma once
#include "House.h"
class Office :public House
{
public:
	void Input();
	void Show();
private:
	int ExtinguisherNum;
	int PhoneNum;


};

