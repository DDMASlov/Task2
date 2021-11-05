#include "class.hpp"
CVector::CVector()
{
	vect = NULL;
	size = 0;
}
CVector::CVector(size_t size1)
{
    size = size1;
    vect = new double[size];
}
CVector::CVector(const CVector &obj)
{
	size = obj.size;
	vect = new double[size];
	for(size_t i = 0;i < size;i++)
	{
		vect[i] = obj.vect[i];
	}
}
CVector::~CVector()
{
    delete[] vect;
}
CVector& CVector::operator=(const CVector &other)
{
	if (this != &other)
	{
		delete[] vect;
		size = other.size;
		vect = new double[size];
		for (size_t i = 0; i < size; i++)
		{
			vect[i] = other.vect[i];
		}

	}
	return *this;
	
}
CVector CVector::operator+(const CVector &other)
{
    CVector rezs;
    rezs.size = size;
    rezs.vect = new double[size];
	for (size_t i = 0; i < size; i++)
	{
		rezs.vect[i] = (vect[i] + other.vect[i]);
	}
    return rezs;
}
double& CVector::operator[](size_t n)
{
	return vect[n];
}
CVector CVector::operator-(const CVector &other)
{
    CVector rezd;
    rezd.size = size;
    rezd.vect = new double[size];
    for(size_t i = 0;i < size;i++)
    {
		rezd.vect[i] = (vect[i] - other.vect[i]);
    }
    return rezd;
}
double CVector::operator*(const CVector &other)
{
    double sc = 0;
    for(size_t i = 0;i < size; i++)
    {
		sc += vect[i]*other.vect[i];
    }
    return sc;
}
void CVector::AddVec(size_t size1)
{
	CVector vrem;
	vrem.vect = new double[size + size1];
	for(size_t i = 0; i < (size+size1); i++)
    {
		if (i < size)
		{
			vrem.vect[i] = vect[i];
		}
		else
		{
			cout << "Enter adding number: ";
			cin >> vrem.vect[i];
		}
    }
	delete[] vect;
	size= size + size1;
	vect = new double[size];
	for (size_t i = 0; i < size; i++)
	{
		vect[i] = vrem.vect[i];
	}
}
int CVector::GetSize()
{
    return size;
}
void CVector::GetVec()
{
	if (size == 1)
		cout << "(" << vect[0] << ")";
	else
	{
		for (size_t i = 0; i < size; i++)
		{
			if (i == 0)
			{
				cout << "(" << vect[i] << ", ";
			}
			else
			{
				if (i == size - 1)
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
}
int CVector::Compare(const CVector &other)
{
    for(size_t i = 0;i < size; i++)
    {
		if(vect[i] != other.vect[i])
			return 0;
    }
    return 1;
}