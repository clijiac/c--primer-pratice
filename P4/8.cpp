#include <iostream>
#include <vector>

using namespace std;

bool isEqual(int a[], int b[], size_t vsize)
{
    for (size_t i = 0; i < vsize; ++i)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}

bool isVEqual(std::vector<int>  a, std::vector<int>  b)
{
    if (a.size() != b.size())
    {
        return false;
    }
    for (std::vector<int>::iterator i = a.begin(), i2 = b.begin(); i != a.end(); ++i, ++i2)
    {
        if (*i != *i2)
        {
            return false;
        }
    }
    return true;
}


int main()
{
    const size_t vsize = 10;
    int a[vsize], b[vsize], c[vsize];
    for (int i = 0; i < vsize; ++i)
    {
        a[i] = i;
        b[i] = i;
        c[i] = i - 1;
    }

    if (isEqual(a, b, vsize))
    {
        cout << "AB isEqual" << endl;
    }
    else
    {
        cout << "AB isNotEqual" << endl;
    }
    if (isEqual(a, c, vsize))
    {
        cout << "AC isEqual" << endl;
    }
    else
    {
        cout << "AC isNotEqual" << endl;
    }

    std::vector<int> iveca, ivecb, ivecc;
    for (vector<int>::size_type i = 0; i < vsize; ++i)
    {
        iveca.push_back(i);
        ivecb.push_back(i);
        ivecc.push_back(i - 1);
    }

    if (isVEqual(iveca, ivecb))
    {
        cout << "AB isVEqual" << endl;
    }
    else
    {
        cout << "AB isNotVEqual" << endl;
    }
    if (isVEqual(iveca, ivecc))
    {
        cout << "AC isVEqual" << endl;
    }
    else
    {
        cout << "AC isNotVEqual" << endl;
    }
    return 0;
}


