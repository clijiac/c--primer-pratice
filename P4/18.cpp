#include <iostream>

using namespace std;

int main()
{

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int *p = a, *pend = a + 10; p != pend; ++p)
    {
        *p = 0;
    }
    for (int *p = a, *pend = a + 10; p != pend; ++p)
    {
        cout << *p << " " ;
    }
    cout << endl;
    return 0;
}