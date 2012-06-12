#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int stdStringComp(string a, string b)
{
    if (a == b)
    {
        return 0;
    }
    else if (a > b)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}


int main()
{
    string a, b;
    if (cin >> a >> b)
    {

        cout << stdStringComp(a,  b) << endl;

        const char *p1 = a.c_str();
        const char *p2 = b.c_str();

        cout << strcmp(p1,  p2) << endl;

    }
    return 0;
}