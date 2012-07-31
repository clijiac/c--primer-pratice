#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "char " << sizeof(char) << endl;
    cout << "int " << sizeof(int) << endl;
    cout << "long " << sizeof(long) << endl;
    cout << "float " << sizeof(float) << endl;
    cout << "double " << sizeof(double) << endl;
    cout << "short " << sizeof(short) << endl;
    cout << "bool " << sizeof(bool) << endl;
    cout << "long double " << sizeof(long double) << endl;

    int x[10];
    int *p =x;
    cout << sizeof(x)/sizeof(*x)<<endl;
    cout << sizeof(p)/sizeof(*p)<<endl;
    return 0;
}