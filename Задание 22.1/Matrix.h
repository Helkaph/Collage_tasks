#pragma once
class Matrix
{
private:
	int rows{};
	int columns{};
	int** matrix;

public:
	Matrix();
	Matrix(int rows);

	void Create();
	void Del();
	void Set_Elems();
	void Display();
	void get_mirror_matrix();

	int get_rows();
	int get_columns();

};

