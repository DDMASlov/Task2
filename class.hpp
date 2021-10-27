#include "fl.hpp"
class CVector
{
private:
    double *vect;
    int size;
public:
    CVector();
    CVector(const CVector &obj);
    CVector(double *ptr,int size1);
    ~CVector();
    CVector operator+(const CVector &other);
    CVector operator-(const CVector &other);
    double operator*(const CVector &other);
    void GetVec();
    int GetSize();
    void AddVec(int size1);
    int Compare(const CVector &other);
};