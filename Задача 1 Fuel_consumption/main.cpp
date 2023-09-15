// Уаз Патриот
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double distance = 0, CarSpeed = 0, DistTime = 0, FuelConsumption = 13;

	cout << "Введите расстояние, которое проедет автомобиль: ";
	cin >> distance;

	cout << "\nВведите среднюю скорость автомобиля: ";
	cin >> CarSpeed;
	
	DistTime = distance * 60 / CarSpeed;

	double ConsFuel = (FuelConsumption * distance) / 100;

	cout << "За пройденное расстояние в " << distance << "км за время "<< DistTime<< " машина израсходовала " << ConsFuel << "л топлива" << endl;

	return 0;
}