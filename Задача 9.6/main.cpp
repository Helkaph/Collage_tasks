#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned int UserTicket{};

	cout << "������� ����� �����: ";
	cin >> UserTicket;

	if (UserTicket >= 1 && UserTicket <= 4)
		cout << "���� ����: 1" << endl;
	else if (UserTicket > 4 && UserTicket <=8)
		cout << "���� ����: 2" << endl;
	else if (UserTicket > 8 && UserTicket <= 12)
		cout << "���� ����: 3" << endl;
	else if (UserTicket > 12 && UserTicket <= 16)
		cout << "���� ����: 4" << endl;
	else if (UserTicket > 16 && UserTicket <= 20)
		cout << "���� ����: 5" << endl;
	else if (UserTicket > 20 && UserTicket <= 24)
		cout << "���� ����: 6" << endl;
	else if (UserTicket > 24 && UserTicket <= 28)
		cout << "���� ����: 7" << endl;
	else if (UserTicket > 28 && UserTicket <= 32)
		cout << "���� ����: 8" << endl;
	else if (UserTicket > 32 && UserTicket <= 36)
		cout << "���� ����: 9" << endl;
	else
		cout << "������ ����� ������ �� ����� ����� � ������" << endl;

	return 0;
}