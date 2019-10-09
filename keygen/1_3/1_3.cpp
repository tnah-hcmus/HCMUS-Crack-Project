// Keygen_1_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include <string>
#include <iostream>
using namespace std;


int hopLe(string s)
{
	for (int i = 0; i<s.length(); i++)
	{
		if (s[i] < 'A' || (s[i] > 'Z' && s[i] < 'a') || s[i] > 'z')
			return 0;
	}
	return 1;
}

int main()
{
	string name;
	cout << "Name: " ;
	cin >> name;
	while (hopLe(name) == 0)
	{
		cout << "Chuoi khong hop le! Hay nhap lai!" << endl;
		cout << "Name: ";
		cin >> name;
	}

	for (int i = 0; i < name.length(); i++)
		if (name[i] >= 'a' && name[i] <= 'z')
			name[i] = name[i] - 32;
	int tong = 0;
	for (int i = 0; i < name.length(); i++)
	{
		tong += (int)name[i];
	}
	tong = tong ^ 22136;
	tong = tong ^ 4660;
	cout << "Serial: " << tong << endl; 
	system("pause");
	return 0;
}

