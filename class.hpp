#define N 3
#include "fl.hpp"
class CRat
{
private:
    int frac[2*N];
public:
    CRat();
    void SetVec(const int numer, const int denom, const int cnt);
    CRat operator+(const CRat &other);
    CRat operator-(const CRat &other);
    void GetVec();
    //void Socr();
    int Compare(const CRat &other);
};