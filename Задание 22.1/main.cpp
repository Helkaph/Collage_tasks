#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int rows{};

	cout << "Введите размер матрицы: ";
	cin >> rows;
	Matrix A(rows);
	cout << "Заполните матрицу: ";
	A.Set_Elems();
	cout << "Ваша матрица: \n";
	A.Display();
	cout << "Ваша обратная матрица: \n";
	A.get_mirror_matrix();
	A.Del();
}