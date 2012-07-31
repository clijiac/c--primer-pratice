#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string *> v;
    vector<string> v1;

    for (int n = 1; n < 10; ++n)
    {

        string a(n, 'd');
        cout << a << endl;
        v1.push_back(a);

    }
    for (std::vector<string>::iterator i = v1.begin(); i != v1.end(); ++i)
    {
    	v.push_back(&(*i));
    }
    for (std::vector<string *>::iterator i = v.begin(); i != v.end(); ++i)
    {
        cout << (*i)->size() << endl;
        cout << (**i) << endl;
    }
    return 0;
}