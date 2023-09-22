#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	
	int UserTime{};

	cout << "¬ведите врем€ (в минутах): ";
	cin >> UserTime;

	cout << UserTime << " мин - это " << UserTime / 60 << " час " << UserTime - (UserTime / 60 * 60) << " минут.";
}