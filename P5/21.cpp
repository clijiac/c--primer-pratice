#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<int> v;


    for (int n = 1; n < 10; ++n)
    {
        v.push_back(n);
    }

    for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
    {
        *i = (*i) % 2 ? (*i+ *i) : (*i );
    }
    for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
    {
         cout << (*i) << endl;
    }
    return 0;
}