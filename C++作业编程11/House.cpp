#include "House.h"
#include<iostream>
using namespace std;

void House::Input()
{
	Building::Input();
	cout << "���������ҵ�������";
	cin >> BadroomNum;
	cout << "������ϴ���ҵ�������";
	cin >> BathroomNum;
}

void House::Show()
{
	Building::Show();
	cout << "���ҵ�������" << BadroomNum << endl;
	cout << "ϴ���ҵ�������" << BathroomNum << endl;
}
