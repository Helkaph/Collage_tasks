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
	/*cout << "Ваша обратная матрица по вертикали: \n";
	A.get_mirror_matrix_to_vert();
	cout << "Ваша обратная матрица по горизонтали: \n";
	A.get_mirror_matrix_to_horiz();*/
	A.matrix_transposition();
	cout << "Транспонирование матрицы: " << endl;
	A.Display();
	A.Del();
}