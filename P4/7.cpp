#include <iostream>
#include <vector>

using namespace std;

int main()
{
    const size_t vsize = 10;
    int a[vsize], b[vsize];
    for (size_t i = 0; i < vsize; ++i)
    {
        b[i] = i;
    }
    for (size_t i = 0; i < vsize; ++i)
    {
        a[i] = b[i];
    }
    for (size_t i = 0; i < vsize; ++i)
    {
        cout << a[i] << " " ;
    }
    cout << endl;

    std::vector<int> iveca, ivecb;
    for (vector<int>::size_type i = 0; i < vsize; ++i)
    {
        iveca.push_back(i);
    }
    for (std::vector<int>::iterator i = iveca.begin(); i != iveca.end(); ++i)
    {
        ivecb.push_back(*i);
    }
    for (std::vector<int>::iterator i = ivecb.begin(); i != ivecb.end(); ++i)
    {
        cout << *i << " " ;
    }
    cout << endl;
    return 0;
}
