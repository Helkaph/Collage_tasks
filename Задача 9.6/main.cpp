#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned int UserTicket{};

	cout << "Введите номер места: ";
	cin >> UserTicket;

	if (UserTicket >= 1 && UserTicket <= 4)
		cout << "Ваше купе: 1" << endl;
	else if (UserTicket > 4 && UserTicket <=8)
		cout << "Ваше купе: 2" << endl;
	else if (UserTicket > 8 && UserTicket <= 12)
		cout << "Ваше купе: 3" << endl;
	else if (UserTicket > 12 && UserTicket <= 16)
		cout << "Ваше купе: 4" << endl;
	else if (UserTicket > 16 && UserTicket <= 20)
		cout << "Ваше купе: 5" << endl;
	else if (UserTicket > 20 && UserTicket <= 24)
		cout << "Ваше купе: 6" << endl;
	else if (UserTicket > 24 && UserTicket <= 28)
		cout << "Ваше купе: 7" << endl;
	else if (UserTicket > 28 && UserTicket <= 32)
		cout << "Ваше купе: 8" << endl;
	else if (UserTicket > 32 && UserTicket <= 36)
		cout << "Ваше купе: 9" << endl;
	else
		cout << "Данный номер билета не имеет места в вагоне" << endl;

	return 0;
}