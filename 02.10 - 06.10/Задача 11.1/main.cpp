#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int size{};
	cout << "Введите количество чисел: ";
	cin >> size;

	int* array = new int[size];
	for (int i{}; i < size; i++)
	{
		cout << "Введите число: ";
		cin >> array[i];
		cout << endl;
	}

	cout << "Максимальное число в списке: " << *max_element(array, array + size) << endl;
	cout << "Минимальное число в списке: " << *min_element(array, array + size) << endl;
	int sum{};

	for (int i{}; i < size; i++)
		sum += array[i];
	cout << "Сумма чисел = " << sum << endl;
	delete[] array;
	return 0;
}