#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string worda , wordb;

    if (cin >> worda >> wordb)
    {
        if (worda == wordb)
        {
            cout << "Word is the same " << endl;
        }
        else
        {
            if (worda > wordb)
            {
                cout << worda << " is bigger than " << wordb << endl;
            }
            else
            {
                cout << wordb << " is bigger than " << worda << endl;
            }
        }
        if (worda.size() == wordb.size())
        {
            cout << " Size is the same " << endl;
        }
        else
        {
            if (worda.size() > wordb.size())
            {
                cout << "Size of " << worda << " is bigger than " << wordb << endl;
            }
            else
            {
                cout << "Size of " << wordb << " is bigger than " << worda << endl;
            }
        }
    }
    else
    {
        return -1;
    }
    return 0;
}