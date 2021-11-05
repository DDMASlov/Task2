#include "class.hpp"
int main()
{
    if(autotest() != 0)
    {
	return 1;
    }
    size_t size1, size2;
	double ptr;
    cout << "Enter size of vector: ";
    cin >> size1;
    if(size1 <= 0)
    {
		cout << "Wrong type of size!!!";
		return 1;
    }
	CVector a(size1),b(size1);
    cout << "FIRST VECTOR" << endl;
    for(size_t i = 0; i < size1;i++)
    {
		cout << "Enter " << i+1 << " element of vector: ";
		cin >> ptr;
		a[i] = ptr;
    }
    cout << "SECOND VECTOR" << endl;
    for(size_t i = 0; i < size1; i++)
    {
		cout << "Enter " << i+1 << " element of vector: ";
		cin >> ptr;
		b[i] = ptr;
    }
    int cntrl = 1;
    cout << "0 - quit" << endl;
    cout << "1 - add elements to 1" << endl;
    cout << "2 - add elements to 2" << endl;
    cout << "3 - sum of vectors" << endl;
    cout << "4 - dif of vectors" << endl;
    cout << "5 - scalar product" << endl;
    while(cntrl != 0)
    {
		cin >> cntrl;
		if((cntrl != 0) && (cntrl != 1) && (cntrl != 2) && (cntrl != 3) && (cntrl != 4) && (cntrl != 5))
		{
			cout << "Wrong command!!" << endl;
		}
		else
		{	
			if(cntrl == 1)
			{
				cout << "Enter number of adding elements:";
				cin >> size2;
				a.AddVec(size2);
			}
			if(cntrl == 2)
			{
				cout << "Enter number of adding elements:";
				cin >> size2;
				b.AddVec(size2);
			}
			if(cntrl == 3)
			{
				if(a.GetSize() == b.GetSize())
				{
					CVector c = a + b;
					cout << "Sum of vectors : ";
					c.GetVec();
				}
				else
				{	
					cout << "Different size of vectors!!" << endl;
				}
			}
			if(cntrl == 4)
			{
				if(a.GetSize() == b.GetSize())
				{
					CVector d = a - b;
					cout << "Difference of vecotrs: ";
					d.GetVec();
				}
				else
				{
					cout << "Different size of vectors!!" << endl;
				}
			}
			if(cntrl == 5)
			{
				if(a.GetSize() == b.GetSize())
				{
					double sc = a*b;
					cout << "Scalar product: " << sc << endl;
				}
				else
				{
					cout << "Different size of vectors!!" << endl;
				}
			}
			if(cntrl == 0)
			{
				return 0;
			}	
		}
    }
}