#include "Matrix_A.h"
#include <ctime>
#include <iostream>
Matrix_A::Matrix_A()
{
	srand(time(NULL));

	for (int i{}; i < 7; i++)
		for (int j{}; j < 7; j++)
			A[i][j] = -100 + rand() % (100 - (-100) + 1);
}

void Matrix_A::get_A_for_console()
{
	std::cout << std::endl << "Array A:" << std::endl;
	for (int i{}; i < 7; i++)
	{
		for (int j{}; j < 7; j++)
			std::cout << A[i][j] << '\t';
		std::cout << std::endl;
	}
}
void Matrix_A::replace_pos_above_diag_with_zero()
{
	for (int i{}; i < 7; i++)
	{
		for (int j{}; j < 7; j++)
		{
			if (j > i && A[i][j] > 0)
				A[i][j] = 0;
		}
	}
}