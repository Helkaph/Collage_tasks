#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	
	int UserTime{};

	cout << "������� ����� (� �������): ";
	cin >> UserTime;

	cout << UserTime << " ��� - ��� " << UserTime / 60 << " ��� " << UserTime - (UserTime / 60 * 60) << " �����.";
}