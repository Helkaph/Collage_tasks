#include <iostream>
#include "Matrix_A.h"
#include "Matrix_B.h"

using namespace std;

int main()
{
	Matrix_A A = Matrix_A();
	Matrix_B B = Matrix_B();

	A.get_A_for_console();
	cout << endl;
	B.get_B_for_console();
	A.replace_pos_above_diag_with_zero();
	B.replace_pos_above_diag_with_zero();
	A.get_A_for_console();
	cout << endl;
	B.get_B_for_console();
}