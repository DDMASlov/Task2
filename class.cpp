#include "class.hpp"
CVector::CVector()
{}
CVector::CVector(double *ptr, int size1)
{
    size = size1;
    vect = (double*)malloc(size*sizeof(double));
    for(int i = 0; i < size;i++)
    {
	vect[i] = ptr[i];
    }
}
CVector::CVector(const CVector &obj)
{
    size = obj.size;
	vect = (double*)malloc(size * sizeof(double));
    for(int i = 0;i < size; i++)
    {
	vect[i] = obj.vect[i];
    }
}
CVector::~CVector()
{
    free(vect);
}
CVector CVector::operator+(const CVector &other)
{
    CVector rezs;
    rezs.size = size;
    rezs.vect = (double*)malloc(size*sizeof(double));
    for(int i = 0;i < size;i++)
    {
	rezs.vect[i] = vect[i] + other.vect[i];
    }
    return rezs;
}
CVector CVector::operator-(const CVector &other)
{
    CVector rezd;
    rezd.size = size;
    rezd.vect = (double*)malloc(size*sizeof(double));
    for(int i = 0;i < size;i++)
    {
	rezd.vect[i] = vect[i] - other.vect[i];
    }
    return rezd;
}
double CVector::operator*(const CVector &other)
{
    double sc = 0;
    for(int i = 0;i < size; i++)
    {
	sc += vect[i]*other.vect[i];
    }
    return sc;
}
void CVector::AddVec(int size1)
{
    vect = (double*)realloc(vect,(size+size1)*sizeof(double));
    for(int i = size; i < size+size1; i++)
    {
	cout << "Enter adding number: ";
	cin >> vect[i];
    }
    size = size + size1;
}
int CVector::GetSize()
{
    return size;
}
void CVector::GetVec()
{
    for(int i = 0; i < size; i ++)
    {
	if(i == 0)
	{
	    cout << "(" << vect[i] << ", ";
	}
	else
	{
	    if(i == size - 1)
	    {
		cout << vect[i] << ")" << endl;
	    }
	    else
	    {
		cout << vect[i] << ", ";
	    }
	}
    }
}
int CVector::Compare(const CVector &other)
{
    for(int i = 0;i < size; i++)
    {
	if(vect[i] != other.vect[i])
	    return 0;
    }
    return 1;
}