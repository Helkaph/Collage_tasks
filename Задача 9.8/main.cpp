#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	string UserNumbers{};
	int res{1};
	cout << "¬ведите числа через пробел: ";
	getline(cin, UserNumbers);
	vector<char> Chars_Array;
	vector<int> Numbers_Array;
	for (int i{}; i < UserNumbers.length(); i++)
	{ 
		if (UserNumbers[i] != ' ')
		{
			Chars_Array.push_back(UserNumbers[i]);
		}
	}
	for (int i{}; i < Chars_Array.size(); i++)
	{
		int a;
		a = Chars_Array[i] - '0';
		Numbers_Array.push_back(a);
		res *= Numbers_Array[i];
	}

	cout << res << endl;

	return 0;
}