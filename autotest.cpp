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
    CRat a,b;
    a.SetVec(2,4,0);
    a.SetVec(3,2,1);
    a.SetVec(7,6,2);
    b.SetVec(3,6,0);
    b.SetVec(5,13,1);
    b.SetVec(8,3,2);
    CRat sum = a+b;
    CRat dif = a-b;
    CRat cmsum,cmdif;
    cmsum.SetVec(1,1,0);
    cmdif.SetVec(0,1,0);
    cmsum.SetVec(49,26,1);
    cmdif.SetVec(29,26,1);
    cmsum.SetVec(23,6,2);
    cmdif.SetVec(-3,2,2);
    if(sum.Compare(cmsum) && (dif.Compare(cmdif)))
	return 1;
    else
	return 0;
}
int autotest2()
{
    CRat a,b;
    a.SetVec(2,4,0);
    a.SetVec(3,2,1);
    a.SetVec(7,6,2);
    b.SetVec(2,4,0);
    b.SetVec(3,2,1);
    b.SetVec(7,6,2);
    CRat sum = a+b;
    CRat dif = a-b;
    CRat cmsum,cmdif;
    cmsum.SetVec(1,1,0);
    cmdif.SetVec(0,1,0);
    cmsum.SetVec(3,1,1);
    cmdif.SetVec(0,1,1);
    cmsum.SetVec(7,3,2);
    cmdif.SetVec(0,1,2);
    if(sum.Compare(cmsum) && (dif.Compare(cmdif)))
	return 1;
    else
	return 0;
}
int autotest3()
{
    CRat a,b;
    a.SetVec(0,1,0);
    a.SetVec(1,2,1);
    a.SetVec(5,6,2);
    b.SetVec(3,6,0);
    b.SetVec(5,3,1);
    b.SetVec(8,3,2);
    CRat sum = a+b;
    CRat dif = a-b;
    CRat cmsum,cmdif;
    cmsum.SetVec(1,2,0);
    cmdif.SetVec(-1,2,0);
    cmsum.SetVec(13,6,1);
    cmdif.SetVec(-7,6,1);
    cmsum.SetVec(7,2,2);
    cmdif.SetVec(-11,6,2);
    if(sum.Compare(cmsum) && (dif.Compare(cmdif)))
	return 1;
    else
	return 0;
}