#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int p =0 ;
	int *pp = &p;
	*pp = 2;
	cout << p << endl;
	int p2 =3;
	pp = &p2;
	cout << *pp << endl;
	return 0;
}