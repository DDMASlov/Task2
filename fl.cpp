#include "class.hpp"
int main()
{
    if(autotest() == 0)
    {
	int numer,denom;
	CRat a, b;
	cout << "FIRST VECTOR" << endl;
	for(int i = 0; i < N;i++)
	{
	    cout << "Enter numerator №" << i+1 << ":";
	    cin >> numer;
	    cout << "Enter denominator №" << i+1 << ":";
	    cin >> denom;
	    if(denom <= 0)
	    {
		cout << "Wrong type of denominator!!!" << endl;
		return 1;
	    }
	    a.SetVec(numer,denom,i);
	}
	cout << endl << "SECOND VECTOR" << endl;
	for(int i = 0; i < N;i++)
	{
	    cout << "Enter numerator №" << i+1 << ":";
	    cin >> numer;
	    cout << "Enter denominator №" << i+1 << ":";
	    cin >> denom;
	    if(denom <= 0)
	    {
		cout << "Wrong type of denominator!!!" << endl;
		return 1;
	    }
	    b.SetVec(numer,denom,i);
	}
	cout << "a = ";
	a.GetVec();
	cout << "b = ";
	b.GetVec();
	CRat c = a + b;
	CRat d = a - b;
	//c.Socr();
	//d.Socr();
	cout << "Sum of vectors:";
	c.GetVec();
	cout << "Difference of vectors:";
	d.GetVec();
	return 0;
    }
    else
    {
	return 1;
    }
}