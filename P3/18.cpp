#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int itmp;
    if (cin >> itmp)
    {
        std::vector<int> ivect (10, itmp);
        for (std::vector<int>::iterator i = ivect.begin(); i != ivect.end(); ++i)
        {
            *i = *i * 2 ;
        }
        for (std::vector<int>::iterator i = ivect.begin(); i != ivect.end(); ++i)
        {
            cout <<  *i << " "  ;
        }
        cout << endl;
    }
    return 0;
}