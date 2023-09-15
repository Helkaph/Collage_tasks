// Уаз Патриот
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int mileage = 500, insurance = 5436, taxes = 35 * 150 ;
	double FuelPrice = 58.99 , TO = 2600.73;

	cout << "Стоимость содержания = " << insurance + taxes + ((FuelPrice * mileage / 100) * 12) * FuelPrice + TO << endl;

	return 0;
}