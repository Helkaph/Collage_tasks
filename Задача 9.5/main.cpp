#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n{};

	cout << "������� ��������� ���������: ";
	cin >> n;

	if (n % 2 == 0)
		cout << "������: " << n / 2 << endl;
	else
		cout << "������: " << n / 2 + 1 << endl;

	return 0;
}