#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "�� �������� �������������� �����. �������� ���� ������ �� ����� �����, ���� ������. �� ����� ����� �������. ������� ���� ��� �������� ��� ���������� ��������� ��� �������?" << endl;
	cout << "������/���";
	string Choice;
	cin >> Choice;
	int score = 15;
	if (Choice != "���")
	{
		score += 2;
	}
	else {
		score = score;
	}
	if (score > 15)
		cout << "�� ������� ��������� ���. �� ��������." << endl;
	else
		cout << "������ �������� �� ������� ���������. ���� ������" << endl;

	return 0;
}