#include "Matrix_B.h"
#include <ctime>
#include <iostream>
Matrix_B::Matrix_B()
{
	int anot_seed = time(0);
	anot_seed += 1;
	srand(anot_seed);
	for (int i{}; i < 5; i++)
		for (int j{}; j < 5; j++)
			B[i][j] = -100 + rand() % (100 - (-100) + 1);
}

void Matrix_B::get_B_for_console()
{
	std::cout << std::endl << "Array B:" << std::endl;
	for (int i{}; i < 5;i++)
	{
		for (int j{}; j < 5; j++)
			std::cout << B[i][j] << '\t';
		std::cout << std::endl;
	}
}

void Matrix_B::replace_pos_above_diag_with_zero()
{
	for (int i{}; i < 5; i++)
	{
		for (int j{}; j < 5; j++)
		{
			if (j > i && B[i][j] > 0)
				B[i][j] = 0;
		}
	}
}