#include <iostream>

using namespace std;

int main()
{
    int a,b;
    if (cin>>a>>b)
    {
       cout << (a>b?a:b) << " is bigger" <<endl;
    }
    return 0;
}