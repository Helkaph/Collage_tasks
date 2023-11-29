#include "Matrix.h"
#include <iostream>
#include <vector>
#include <string>
void Matrix::Create()
{
	matrix = new int* [rows];
}

void Matrix::Del()
{
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
	cin.get();
	for (int k{}; k < rows; k++)
	{
		cout << "\n ¬ведите элементы строки через пробел: ";
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
		columns = Numbers_Array.size() - 1;
		matrix[k] = new int[columns];
			for (int j{ columns}; j >= 0; j--)
			{
				matrix[k][j] = Numbers_Array[j];
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
		for (int j{}; j <= columns; j++)
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

void Matrix::get_mirror_matrix_to_horiz()
{
	for (int i{}; i < rows; i++)
	{
		for (int j{ columns}; j >= 0; j--)
			std::cout << matrix[i][j] << " ";
		std::cout << std::endl;
	}
}
void Matrix::get_mirror_matrix_to_vert()
{
	for (int i{ rows - 1 }; i >= 0; i--)
	{
		for (int j{}; j <= columns; j++)
			std::cout << matrix[i][j] << " ";
		std::cout << std::endl;
	}
}
void Matrix::matrix_transposition()
{
	int temp_rows = columns;
	int temp_columns = rows;
	int** new_matrix;
	system("pause");
	new_matrix = new int* [temp_rows];
	for (int i{}; i < temp_rows; i++)
	{
		new_matrix[i] = new int[temp_columns];
		for (int j{}; j <= temp_columns; j++)
		{
			if (j <= temp_columns / temp_rows)
			{
				new_matrix[j][i] = matrix[i][j];
				std::cout << matrix[i][j];
			}
			else if (j > temp_columns / temp_rows)
			{
				new_matrix[j + 1][i] = matrix[i][j];
				std::cout << matrix[i][j];
			}
		}
	}
	columns = temp_columns;
	rows = temp_rows;
	Del();
	Create();
	for (int i{}; i < rows; i++)
	{
		matrix[i] = new int[columns];
		for (int j{}; j <= columns; j++)
			matrix[i][j] = new_matrix[i][j];
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