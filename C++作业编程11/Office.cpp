#include "Office.h"
#include<iostream>
using namespace std;

void Office::Input()
{
	House::Input();
	cout << "请输入灭火器的数量：";
	cin >> ExtinguisherNum;
	cout << "请输入电话的数量：";
	cin >> PhoneNum;
}

void Office::Show()
{
	House::Show();
	cout << "灭火器的数量：" << ExtinguisherNum << endl;
	cout << "电话的数量：" << PhoneNum << endl;
}
