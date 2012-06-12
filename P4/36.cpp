#include <iostream>

using namespace std;

int main()
{
	int ia[3][4] ={1,2,3,4,5,6,7,8,9,1,1,1};

	for(int (*p)[4] = ia ;p!=ia+3;p++)
	{
		for(int *p2 = *p;p2!= *p+4;p2++)
		{
			cout << *p2<<" ";
		}
	}
	cout << endl;
    return 0;
}