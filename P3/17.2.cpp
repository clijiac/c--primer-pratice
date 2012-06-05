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
    for (vector<string>::iterator i = svec.begin(); i != svec.end(); ++i)
    {

        for (string::size_type p = 0; p != (*i).size(); ++p)
        {
            (*i)[p] = toupper((*i)[p]) ;
        }
    }
    int itmp = 0;
    for (vector<string>::iterator i = svec.begin(); i != svec.end(); ++i)
    {
        cout << (*i) << " ";
        itmp++;
        if (itmp % 8 == 0)
        {
            cout << endl;
        }
    }
    return 0;
}