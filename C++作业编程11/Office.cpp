#include "Office.h"
#include<iostream>
using namespace std;

void Office::Input()
{
	House::Input();
	cout << "�������������������";
	cin >> ExtinguisherNum;
	cout << "������绰��������";
	cin >> PhoneNum;
}

void Office::Show()
{
	House::Show();
	cout << "�������������" << ExtinguisherNum << endl;
	cout << "�绰��������" << PhoneNum << endl;
}
