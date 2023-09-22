#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

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
				isExists = true;
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
	sort(Numbers_Array.begin(), Numbers_Array.end());
	
	res = Numbers_Array[Numbers_Array.size() - 2];

	cout << res << endl;
}