#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int birthday1[3]{}, birthday2[3]{};

	string birthdate[3] = { "\n���: ", "\n�����: ", "\n����: " };

	cout << "������� ���� �������� 1 ��������: ";
	for (int i{}; i < 3; i++)
	{
		cout << birthdate[i];
		cin >> birthday1[i];
	}
	cout << "\n������� ���� �������� 2 ��������: ";
	for (int i{}; i < 3; i++)
	{
		cout << birthdate[i];
		cin >> birthday2[i];
	}
	
	cout << "�������..." << endl;
	Sleep(1000);
	if (birthday1[0] > birthday2[0] || (birthday1[0] == birthday1[0]) && (birthday1[1] > birthday2[1]) || (birthday1[0] == birthday1[0]) && (birthday1[1] == birthday2[1]) && (birthday1[2] > birthday2[2]))
		cout << "������ ������� ������ �������" << endl;
	else if (birthday1[0] == birthday2[0] && birthday1[1] == birthday2[1] && birthday1[2] == birthday2[2])
		cout << "�� ������� �����" << endl;
	else
		cout << "������ ������� ������" << endl;

	return 0;
}