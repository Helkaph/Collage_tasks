#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int rows{};

	cout << "������� ������ �������: ";
	cin >> rows;
	Matrix A(rows);
	cout << "��������� �������: ";
	A.Set_Elems();
	cout << "���� �������: \n";
	A.Display();
	/*cout << "���� �������� ������� �� ���������: \n";
	A.get_mirror_matrix_to_vert();
	cout << "���� �������� ������� �� �����������: \n";
	A.get_mirror_matrix_to_horiz();*/
	A.matrix_transposition();
	cout << "���������������� �������: " << endl;
	A.Display();
	A.Del();
}