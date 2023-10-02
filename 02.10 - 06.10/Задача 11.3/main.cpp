#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int size{};

	cout << "¬ведите количество чисел: ";
	cin >> size;
	
	int* arr = new int[size];
	for (int i{}; i < size; i++)
	{
		cout << "¬ведите число: ";
		cin >> arr[i];
		cout << endl;
	}
	sort(arr, arr + size);
	cout << "ќтсортированный массив по возрастанию: [";
	for (int i{}; i < size; ++i)
		if (i != size - 1)
			cout << arr[i] << ", ";
		else
			cout << arr[i];
	cout << "]" << endl;
	sort(arr, arr + size, greater<int>());
	cout << "ќтсортированный массив по убыванию: [";
	for (int i{}; i < size; ++i)
		if (i != size - 1)
			cout << arr[i] << ", ";
		else
			cout << arr[i];
	cout << "]" << endl;
	delete[]arr;
	return 0;
}