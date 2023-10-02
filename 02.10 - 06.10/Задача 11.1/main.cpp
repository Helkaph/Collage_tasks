#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int size{};
	cout << "������� ���������� �����: ";
	cin >> size;

	int* array = new int[size];
	for (int i{}; i < size; i++)
	{
		cout << "������� �����: ";
		cin >> array[i];
		cout << endl;
	}

	cout << "������������ ����� � ������: " << *max_element(array, array + size) << endl;
	cout << "����������� ����� � ������: " << *min_element(array, array + size) << endl;
	int sum{};

	for (int i{}; i < size; i++)
		sum += array[i];
	cout << "����� ����� = " << sum << endl;
	delete[] array;
	return 0;
}