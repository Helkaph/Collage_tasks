#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int level{};
	string login{};
	string password{};
	while (login.length() == 0)
	{
		cout << "�����: ";
		cin >> login;
	}
	while (password.length() == 0)
	{
		cout << "������: ";
		cin >> password;
	}

	if (login == "admin" && password == "123")
		level = 10;
	else if (login == "Ivan" && password == "321")
		level = 5;
	else if (login == "Owl" && password == "Passed")
		level = 9;
	else if (login == "Bone" && password == "Pun")
		level = 1;
	else if (login == "Seneka" && password == "Nero")
		level = 2;
	else if (login == "Persona" && password == "Shadow")
		level = 99;

	cout << "\t\t\t�� �����.\n\t\t\t�������� �����: " << login << "\n\t\t\t��� ������: " << password << "\n\t\t\t��� ������� �������: " << level;

	return 0;
}