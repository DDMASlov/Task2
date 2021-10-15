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
    double *ptr;
    int size = 3;
    ptr = (double*)malloc(size*sizeof(double));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 3;
    CVector a(ptr,size);
    CVector b(ptr,size);
    CVector sum = a+b;
    ptr[0] = 2;
    ptr[1] = 6;
    ptr[2] = 6;
    CVector cmsum(ptr,size);
    free(ptr);
    if(sum.Compare(cmsum))
	return 1;
    else
	return 0;
}
int autotest2()
{
    double *ptr;
    int size = 3;
    ptr = (double*)malloc(size*sizeof(double));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 3;
    CVector a(ptr,size);
    CVector b(ptr,size);
    CVector dif = a-b;
    ptr[0] = 0;
    ptr[1] = 0;
    ptr[2] = 0;
    CVector cmdif(ptr,size);
    free(ptr);
    if(dif.Compare(cmdif))
	return 1;
    else
	return 0;
}
int autotest3()
{
    double *ptr;
    int size = 3;
    ptr = (double*)malloc(size*sizeof(double));
    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 3;
    CVector a(ptr,size);
    CVector b(ptr,size);
    int sc = a*b;
    int cmsc = 19;
    free(ptr);
    if(sc == cmsc)
	return 1;
    else
	return 0;
}