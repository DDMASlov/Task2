#include "class.hpp"
CRat::CRat()
{}
void CRat::SetVec(const int numer, const int denom, const int cnt)
{
    int i = 2*N - 2*(N-cnt);
    if(cnt < N)
    {
	frac[i] = numer;
	frac[i+1] = denom;
    }
    if(frac[i] == frac[i+1])
    {
	frac[i] = 1;
	frac[i+1] = 1;
    }
    else
    {
	int a,b,t;
	a = abs(frac[i]);
	b = frac[i+1];
	if(a < b)
	{
	    t = a;
	    a = b;
	    b = t;
	}
	while(b != 0)
	{
	    t = b;
	    b = a % b;
	    a = t;
	}
	frac[i] = frac[i] / a;
	frac[i+1] = frac[i+1] / a;
    }
}
CRat CRat::operator+(const CRat &other)
{
    CRat rezs;
    for(int i = 0;i < 2*N; i += 2)
    {
	rezs.frac[i] = frac[i]*other.frac[i+1] + other.frac[i]*frac[i+1];
	rezs.frac[i+1] = frac[i+1]*other.frac[i+1];
	if(rezs.frac[i] == rezs.frac[i+1])
	{
	    rezs.frac[i] = 1;
	    rezs.frac[i+1] = 1;
	}
	else
	{
	    int a,b,t;
	    a = abs(rezs.frac[i]);
	    b = rezs.frac[i+1];
	    if(a < b)
	    {
		t = a;
		a = b;
		b = t;
	    }
	    while(b != 0)
	    {
		t = b;
		b = a % b;
		a = t;
	    }
	    rezs.frac[i] = rezs.frac[i] / a;
	    rezs.frac[i+1] = rezs.frac[i+1] / a;
	}
    }
    return rezs;
}
CRat CRat::operator-(const CRat &other)
{
    CRat rezd;
    for(int i = 0;i < 2*N; i += 2)
    {
	rezd.frac[i] = frac[i]*other.frac[i+1] - other.frac[i]*frac[i+1];
	rezd.frac[i+1] = frac[i+1]*other.frac[i+1];
	if(rezd.frac[i] == rezd.frac[i+1])
	{
	    rezd.frac[i] = 1;
	    rezd.frac[i+1] = 1;
	}
	else
	{
	    int a,b,t;
	    a = abs(rezd.frac[i]);
	    b = rezd.frac[i+1];
	    if(a < b)
	    {
		t = a;
		a = b;
		b = t;
	    }
	    while(b != 0)
	    {
		t = b;
		b = a % b;
		a = t;
	    }
	    rezd.frac[i] = rezd.frac[i] / a;
	    rezd.frac[i+1] = rezd.frac[i+1] / a;
	}
    }
    return rezd;
}
void CRat::GetVec()
{
    for(int i = 0; i < 2*N; i += 2)
    {
	if(i == 0)
	{
	    cout << "(" << frac[i] << "/" << frac[i+1] << ", ";
	}
	else
	{
	    if(i == 2*N - 2)
	    {
		cout  << frac[i] << "/" << frac[i+1] << ")" << endl;
	    }
	    else
	    {
		cout  << frac[i] << "/" << frac[i+1] << ", ";
	    }
	}
    }
}
/*void CRat::Socr()
{
    for(int i = 0;i < 2*N; i+=2)
    {
	if(frac[i] == frac[i+1])
	{
	    frac[i] = 1;
	    frac[i+1] = 1;
	}
	else
	{
	    int a,b,t;
	    a = abs(frac[i]);
	    b = frac[i+1];
	    if(a < b)
	    {
		t = a;
		a = b;
		b = t;
	    }
	    while(b != 0)
	    {
		t = b;
		b = a % b;
		a = t;
	    }
	    frac[i] = frac[i] / a;
	    frac[i+1] = frac[i+1] / a;
	}
    }
}*/
int CRat::Compare(const CRat &other)
{
    for(int i = 0;i < 2*N; i++)
    {
	if(frac[i] != other.frac[i])
	    return 0;
    }
    return 1;
}