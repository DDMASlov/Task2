#include "fl.hpp"
class CVector
{
private:
    double *vect;
    size_t size;
public:
    CVector();
    CVector(const CVector &obj);
    CVector(size_t size1);
    ~CVector();
    CVector operator+(const CVector &other);
    CVector operator-(const CVector &other);
	CVector& operator=(const CVector &other);
    double operator*(const CVector &other);
	double& operator[](size_t n);
    void GetVec();
    int GetSize();
    void AddVec(size_t size1);
    int Compare(const CVector &other);
};