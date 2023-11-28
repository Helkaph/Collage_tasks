#pragma once
class Matrix_B
{
private:
	int B[5][5];

public:
	Matrix_B();

	void get_B_for_console();
	void replace_pos_above_diag_with_zero();
};
