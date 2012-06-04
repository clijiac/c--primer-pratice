#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> svec ;
    string stmp;
    while (cin >> stmp)
    {
        svec.push_back(stmp);
    }
    for (vector<string>::size_type i = 0; i != svec.size(); ++i)
    {

        for (string::size_type p = 0; p != svec[i].size(); ++p)
        {
            svec[i][p] = toupper(svec[i][p]) ;
        }
    }
    int itmp = 0;
    for (vector<string>::size_type ix = 0; ix != svec.size(); ++ix)
    {
        cout << svec[ix] << " ";
        itmp++;
        if (itmp % 8 == 0)
        {
            cout << endl;
        }
    }
    return 0;
}