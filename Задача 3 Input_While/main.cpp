#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i = 0;
	cout << "Введите число максимума: ";
	int WhileNumber{};
	cin >> WhileNumber;
	cout << "Введите число, которое будет запрещено в написании: ";
	int BreakNumber{};
	cin >> BreakNumber;
	while (i < WhileNumber)
	{
		cout << "Введите число ";
		cin >> i;

		if (i == BreakNumber)
			break;
		else
			cout << "Продолжаем цикл" << endl;
	}

	return 0;
}