#pragma once
class Matrix_A
{
private:
	int A[7][7];

public:
	Matrix_A();

	void get_A_for_console();
	void replace_pos_above_diag_with_zero();
};

