#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n{};

	cout << "Введите население вселенной: ";
	cin >> n;

	if (n % 2 == 0)
		cout << "Выжило: " << n / 2 << endl;
	else
		cout << "Выжило: " << n / 2 + 1 << endl;

	return 0;
}