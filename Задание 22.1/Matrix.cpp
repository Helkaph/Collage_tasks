#include "Matrix.h"
#include <iostream>
#include <vector>
#include <string>
#include <array>
void Matrix::Create()
{
	matrix = new int* [rows];
}

void Matrix::Del()
{
	for (int i{}; i < rows; i++)
		delete[]matrix[i];
	delete[]matrix;
}

void Matrix::Set_Elems()
{
	using namespace std;
	string UserNumbers;
	vector<int> Numbers_Array;
	const string separators{ " ,;:.\"!?'\n" };
	vector<string> NewNumbers;
	vector<size_t> counts;
	for (int k{}; k < rows; k++)
	{
		cout << "\n ¬ведите элементы строки через пробел: ";
		cin.get();
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
		columns = Numbers_Array.size();
		matrix[k] = new int[columns];
			for (int j{ columns - 1}; j >= 0; j--)
			{
				matrix[k][j] = Numbers_Array[j];
				cout << "\n" << matrix[k][j] << "\t";
			}
		Numbers_Array.clear();
		NewNumbers.clear();
		counts.clear();
	}
}

void Matrix::Display()
{
	for (int i{}; i < rows; i++)
	{
		for (int j{}; j < columns; j++)
			std::cout << matrix[i][j] << " ";
		std::cout << std::endl;
	}
}

int Matrix::get_rows()
{
	return rows;
}
int Matrix::get_columns()
{
	return columns;
}

void Matrix::get_mirror_matrix()
{
	for (int i{ rows - 1 }; i >= 0; i--)
	{
		for (int j{ columns - 1}; j >= 0; j--)
			std::cout << matrix[i][j] << " ";
		std::cout << std::endl;
	}
}

Matrix::Matrix()
{
	rows = 0;
	columns = 0;
	matrix = 0;
}

Matrix::Matrix(int rows)
{
	this->rows = rows;
	Create();
}