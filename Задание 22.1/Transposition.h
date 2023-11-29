#pragma once
#include "Matrix.h"
class Transposition : public Matrix
{
private:
	int rows;
	int columns;
public:
	Transposition(int rows, int columns);
};

