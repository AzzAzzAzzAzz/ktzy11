#include "House.h"
#include<iostream>
using namespace std;

void House::Input()
{
	Building::Input();
	cout << "请输入卧室的数量：";
	cin >> BadroomNum;
	cout << "请输入洗澡室的数量：";
	cin >> BathroomNum;
}

void House::Show()
{
	Building::Show();
	cout << "卧室的数量：" << BadroomNum << endl;
	cout << "洗澡室的数量：" << BathroomNum << endl;
}
