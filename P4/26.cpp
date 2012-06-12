#include <iostream>
#include <string>
#include <cstring>
using namespace std;



int main()
{
    string a, b;
    if (cin >> a )
    {
        cout << a << endl;
    }

  
    // if (cin >> b)
    // {

    //     char *p = new char[b.size()];
    //     for (int i = 0; i < b.size(); ++i)
    //     {
    //         *(p + i) = b[i];

    //     }
    //     *(p + b.size() + 1) = '\0';
    //     while (*p)
    //     {
    //         cout << *p ;
    //         ++p;
    //     }
    //     cout << endl;
    // }

    char *a2 = new char[90];
    if (cin >> a2)
    {
       while (*a2)
        {
            cout << *a2 ;
            ++a2;
        }
        cout << endl;
    }
    delete [] a2;
    return 0;
}