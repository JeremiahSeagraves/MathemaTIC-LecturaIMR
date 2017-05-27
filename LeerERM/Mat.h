#ifndef __MAT__
#define __MAT__

#include <iostream>

using namespace std;

class Mat
{
	private:
	unsigned int rows;
	unsigned int cols;
	double *mat;
	unsigned int count;
	public:
	Mat(unsigned int rows, unsigned int cols);
	void setElement(unsigned int row, unsigned int col, double val);
	friend ostream& operator << (ostream &o, const Mat& m);
	void setCount(unsigned int count);
	Mat& operator << (const double& val);
	void swapRows(unsigned int row1, unsigned int row2);
	void multScalarRow(unsigned int row, double scalar);
	void addRowMult(unsigned int row_to, unsigned int row_from, double scalar);
};

#endif
