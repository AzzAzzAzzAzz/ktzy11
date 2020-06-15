#include "Building.h"
#include<iostream>
using namespace std;

void Building::Input()
{
	cout << "请输入楼房的层数：";
	cin >> StoreyNum;
	cout << "请输入房间的个数：";
	cin >> RoomNum;
	cout << "请输入房间的面积：";
	cin >> area;
}

void Building::Show()
{
	cout << "楼房的层数是：" << StoreyNum << endl;
	cout << "房间数：" << RoomNum << endl;
	cout << "房间的面积：" << area << endl;
}
