#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i = 0;
	cout << "������� ����� ���������: ";
	int WhileNumber{};
	cin >> WhileNumber;
	cout << "������� �����, ������� ����� ��������� � ���������: ";
	int BreakNumber{};
	cin >> BreakNumber;
	while (i < WhileNumber)
	{
		cout << "������� ����� ";
		cin >> i;

		if (i == BreakNumber)
			break;
		else
			cout << "���������� ����" << endl;
	}

	return 0;
}