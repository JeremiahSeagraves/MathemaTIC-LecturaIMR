#include "../LeerERM/Mat.h"

#include <iostream>
#include <cstring>

using namespace std;

Mat::Mat(unsigned int rows, unsigned int cols)
{
	this->rows = rows;
	this->cols = cols;
	this->mat = new double[rows*cols];
	this->count = 0;
}

void Mat::setElement(unsigned int row, unsigned int col, double val)
{
	this->mat[row*(this->cols)+col] = val;
}

ostream& operator << (ostream &o, const Mat& m)
{
	for (unsigned int i=0; i < m.rows; i++)
	{
		o << "[\t";
		for (unsigned int j=0; j < m.cols; j++)
		{
			o << m.mat[i*m.cols+j] << "\t";
		}
		o << "]" << endl;
	}

	return o;
}

void Mat::setCount(unsigned int count)
{
	this->count = count;
}

Mat& Mat::operator << (const double& val)
{
	if(this->count < (this->rows)*(this->cols))
	{
		this->mat[count++] = val;
	}
	else
		cout << "Matrix full" << endl;

	return *this;
}

void Mat::swapRows(unsigned int row1, unsigned int row2)
{
	double row_tmp[this->cols];
	memcpy(&row_tmp,&this->mat[row1*this->cols],sizeof(double)*this->cols);
	memcpy(&this->mat[row1*this->cols],&this->mat[row2*this->cols], sizeof(double)*this->cols);
	memcpy(&this->mat[row2*this->cols],&row_tmp,sizeof(double)*this->cols);
}

void Mat::multScalarRow(unsigned int row, double scalar)
{
	for (unsigned int i=0; i<this->cols; i++)
	{
		this->mat[row*this->cols+i] *= scalar;
	}
}

void Mat::addRowMult(unsigned int row_to, unsigned int row_from, double scalar)
{
	for (unsigned int i=0; i<this->cols; i++)
	{
		this->mat[row_to*this->cols+i] += this->mat[row_from*this->cols+i]*scalar;
	}
}
