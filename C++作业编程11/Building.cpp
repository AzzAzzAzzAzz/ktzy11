#include "Building.h"
#include<iostream>
using namespace std;

void Building::Input()
{
	cout << "������¥���Ĳ�����";
	cin >> StoreyNum;
	cout << "�����뷿��ĸ�����";
	cin >> RoomNum;
	cout << "�����뷿��������";
	cin >> area;
}

void Building::Show()
{
	cout << "¥���Ĳ����ǣ�" << StoreyNum << endl;
	cout << "��������" << RoomNum << endl;
	cout << "����������" << area << endl;
}
