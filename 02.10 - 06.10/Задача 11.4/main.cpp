#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int size{}, avg{}, sum{};

	cout << "¬ведите количество чисел: ";
	cin >> size;
	
	vector<int> arr;

	for (int i{}; i < size; i++)
	{
		cout << "¬ведите число: ";
		int num{};
		cin >> num;
		cout << endl;
		arr.push_back(num);
	}
	for (int i{}; i < arr.size(); i++)
		sum += arr[i];
	avg = sum / size;
	cout << avg << endl;
	for (int i = 0; i < arr.size(); i++)
		if (arr[i] < avg)
			arr.erase(arr.begin() + i);
	sort(arr.begin(), arr.end());
	cout << "[";
	for (int i{}; i < arr.size(); i++)
		if (i != arr.size() - 1)
			cout << arr[i] << ", ";
		else
			cout << arr[i];
	cout << "]";
	cout << endl;
}