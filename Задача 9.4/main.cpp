#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int birthday1[3]{}, birthday2[3]{};

	string birthdate[3] = { "\nгод: ", "\nмес€ц: ", "\nдень: " };

	cout << "¬ведите дату рождени€ 1 человека: ";
	for (int i{}; i < 3; i++)
	{
		cout << birthdate[i];
		cin >> birthday1[i];
	}
	cout << "\n¬ведите дату рождени€ 2 человека: ";
	for (int i{}; i < 3; i++)
	{
		cout << birthdate[i];
		cin >> birthday2[i];
	}
	
	cout << "—вер€ем..." << endl;
	Sleep(1000);
	if (birthday1[0] > birthday2[0] || (birthday1[0] == birthday1[0]) && (birthday1[1] > birthday2[1]) || (birthday1[0] == birthday1[0]) && (birthday1[1] == birthday2[1]) && (birthday1[2] > birthday2[2]))
		cout << "¬торой человек старше первого" << endl;
	else if (birthday1[0] == birthday2[0] && birthday1[1] == birthday2[1] && birthday1[2] == birthday2[2])
		cout << "»х возраст равен" << endl;
	else
		cout << "ѕервый человек старше" << endl;

	return 0;
}