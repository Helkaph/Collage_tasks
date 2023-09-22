#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	string UserNumbers{};
	vector<char> Chars_Array;
	vector<int> Numbers_Array;

	cout << "Введите числа через пробел: ";
	getline(cin, UserNumbers);

	for (int i{}; i < UserNumbers.length(); i++)
		if (UserNumbers[i] != ' ')
			Chars_Array.push_back(UserNumbers[i]);
	if (Chars_Array.size() < 2)
	{
		cout << "Слишком малый список чисел. Прекращение работы" << endl;
		return 0;
	}
	for (int i{}; i < Chars_Array.size(); i++)
	{
		int a;
		a = Chars_Array[i] - '0';
		Numbers_Array.push_back(a);
	}
	for (int i{}; i < Numbers_Array.size() - 1; i++)
	{
		cout << Numbers_Array[i] + Numbers_Array[i + 1] << "\t";
	}
	cout << endl;
}