// ��� �������
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double distance = 0, CarSpeed = 0, DistTime = 0, FuelConsumption = 13;

	cout << "������� ����������, ������� ������� ����������: ";
	cin >> distance;

	cout << "\n������� ������� �������� ����������: ";
	cin >> CarSpeed;
	
	DistTime = distance * 60 / CarSpeed;

	double ConsFuel = (FuelConsumption * distance) / 100;

	cout << "�� ���������� ���������� � " << distance << "�� �� ����� "<< DistTime<< " ������ ������������� " << ConsFuel << "� �������" << endl;

	return 0;
}