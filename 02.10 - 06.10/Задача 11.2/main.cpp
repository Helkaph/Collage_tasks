#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int size{};

	cout << "������� ���������� �����: ";
	cin >> size;

	int *array = new int[size];
	for (int i{}; i < size; i++)
	{
		cout << "������� �����: ";
		cin >> array[i];
		cout << endl;
	}
	int replaceable{};
	int replacing{};
	int count{};
	cout << "������� �����, ������� ��������� ��������: ";
	cin >> replaceable;
	cout << "������� �����, �� ������� ����������: ";
	cin >> replacing;
	for (int i{}; i < size; i++)
		if (array[i] == replaceable)
		{
			array[i] = replacing;
			count++;
		}

	cout << "���������� ������: [";
	for (int i{}; i < size; i++)
		if (i != size - 1)
			cout << array[i] << ", ";
		else
			cout << array[i];
	cout << "]" << endl;
	cout << "���������� �����: " << count << endl;

	delete[]array;
	return 0;
}