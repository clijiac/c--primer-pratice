#include <iostream>

using namespace std;

int main()
{
	const size_t VSIZE = 3;
	char *p = new char[VSIZE];
	if(cin >> p)
	{cout << p<<endl;}
	delete [] p;
	return 0;
}