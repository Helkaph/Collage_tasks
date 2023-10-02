#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int size{};

	cout << "Введите количество чисел: ";
	cin >> size;

	int *array = new int[size];
	for (int i{}; i < size; i++)
	{
		cout << "Введите число: ";
		cin >> array[i];
		cout << endl;
	}
	int replaceable{};
	int replacing{};
	int count{};
	cout << "Введите число, которое требуется заменить: ";
	cin >> replaceable;
	cout << "Введите число, на которое заменяется: ";
	cin >> replacing;
	for (int i{}; i < size; i++)
		if (array[i] == replaceable)
		{
			array[i] = replacing;
			count++;
		}

	cout << "Полученный массив: [";
	for (int i{}; i < size; i++)
		if (i != size - 1)
			cout << array[i] << ", ";
		else
			cout << array[i];
	cout << "]" << endl;
	cout << "Количество замен: " << count << endl;

	delete[]array;
	return 0;
}