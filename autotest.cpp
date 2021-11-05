#include "autotest.hpp"
int autotest()
{
    if(autotest1() && autotest2() && autotest3() == 1)
    {
	cout << "Autotest passed"<< endl;
	return 0;
    }
    else
    {
	cout << "Autotest failed!" << endl;
	return 1;
    }
}
int autotest1()
{
    size_t size = 3;
    CVector a(size);
    CVector b(size);
	a[0] = 1;
	a[1] = 1;
	a[2] = 1;
	b[0] = 1;
	b[1] = 1;
	b[2] = 1;
    CVector sum = a+b;
    CVector cmsum(size);
	cmsum[0] = 2;
	cmsum[1] = 2;
	cmsum[2] = 2;
    if(sum.Compare(cmsum))
		return 1;
    else
		return 0;
}
int autotest2()
{
	size_t size = 3;
	CVector a(size);
	CVector b(size);
	a[0] = 1;
	a[1] = 1;
	a[2] = 1;
	b[0] = 1;
	b[1] = 1;
	b[2] = 1;
	CVector dif = a - b;
	CVector cmdif(size);
	cmdif[0] = 0;
	cmdif[1] = 0;
	cmdif[2] = 0;
	if (dif.Compare(cmdif))
		return 1;
	else
		return 0;
}
int autotest3()
{
	size_t size = 3;
	CVector a(size);
	CVector b(size);
	a[0] = 1;
	a[1] = 1;
	a[2] = 1;
	b[0] = 1;
	b[1] = 1;
	b[2] = 1;
	double sc = a * b;
	double cmsc = 3;
	if (sc == cmsc)
		return 1;
	else
		return 0;
}