#include "header.h"
#include <iostream>
using namespace std;

int main()
{
	char c, r;
	char str[200];
	cout << "Give char C: ";
	cin >> c;
	cout << "Give char R: ";
	cin >> r;
	cout << "Give string S, that have less than 200 chars: ";
	cin.getline(str,200); //��� gets_s(str); �� � �� ����� � ��� �������
	cout << deleteCharComb(str, c, r);
}