#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");

	string UserNumbers;
	int res{};
	vector<int> Numbers_Array;
	const string separators{ " ,;:.\"!?'\n" };
	vector<string> NewNumbers;
	vector<size_t> counts;

	cout << "¬ведите числа через пробел: ";
	getline(cin, UserNumbers);

	size_t start{ UserNumbers.find_first_not_of(separators) };
	while (start != string::npos)
	{
		size_t end{ UserNumbers.find_first_of(separators, start + 1) };
		if (end == string::npos)
			end = UserNumbers.length();
		string word{ UserNumbers.substr(start, end - start) };

		bool isExists{ false };
		for (unsigned i{}; i < NewNumbers.size(); i++)
			if (NewNumbers[i] == word)
			{
				++counts[i];
				break;
			}
		if (!isExists)
		{
			NewNumbers.push_back(word);
			counts.push_back(1);
		}
		start = UserNumbers.find_first_not_of(separators, end + 1);
	}
	for (int i{}; i < NewNumbers.size(); i++)
	{
		Numbers_Array.push_back(stoi(NewNumbers[i]));
	}
	for (int i{}; i < Numbers_Array.size(); i++)
		if (Numbers_Array[i] % 2 != 0)
			Numbers_Array.erase(Numbers_Array.begin() + i);
	for (int i{}; i < Numbers_Array.size(); i++)
		if (Numbers_Array[i] == 1 && Numbers_Array.size() == 1)
			cout << endl;
		else
			cout << Numbers_Array[i] << "\t";
}