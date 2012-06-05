#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vint;
    int itmp = 0 ;
    while (cin >> itmp)
    {
        vint.push_back(itmp);
    }
    if (vint.size() != 0)
    {
        //part1
        cout << "part1" << endl;
        std::vector<int>::iterator i2;
        for (std::vector<int>::iterator i = vint.begin(); i != vint.end(); ++i)
        {

            i2 = i;
            i++;
            if (i != vint.end())
            {
                cout << *i2 << " + " << *i << " = "
                     << *i2 + *i << endl;

            }
        }

        // for (vector<int>::size_type i = 0; i != vint.size(); ++i)
        // {
        //     if (i % 2 != 0)
        //     {
        //         cout << vint[i - 1] << " + " << vint[i] << " = "
        //              << vint[i - 1] + vint[i] << endl;
        //     }
        // }

        if (vint.size() % 2 != 0)

        {
            cout << " There are " << vint.size() << " numbers"
                 << ",the last number is "  << vint[vint.size() - 1] << endl;
        }
        //part2
        cout << "part2" << endl;

        std::vector<int>::iterator i3 = vint.end();
        for (std::vector<int>::iterator i4 = vint.begin(); i4 != vint.end(); ++i4)
        {


            i3--;
            cout << *i4 << " + " << *i3 << " = "
                 << *i3 + *i4 << endl;
            if (i3 == i4 + 1)
            {
                break;

            }
        }
        // for (vector<int>::size_type i = 0; i != vint.size(); ++i)
        // {
        //     if (i  < vint.size() / 2)
        //     {
        //         cout << vint[i] << " + " << vint[vint.size() - i - 1] << " = "
        //              << vint[vint.size() - i - 1] + vint[i] << endl;
        //     }
        // }
        if (vint.size() % 2 != 0)

        {
            cout << " There are " << vint.size() << " numbers"
                 << ",the middle number is "  << vint[vint.size() / 2] << endl;
        }
    }



    return 0;
}