#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string a, b;
    if (cin >> a >> b)
    {
        cout << a + b << endl;
        char *pa = new char[a.size() + 1];
        char *pb = new char[b.size() + 1];
        for (int i = 0; i < a.size(); ++i)
        {
            *(pa + i) = a[i];
        }
        *(pa + a.size() + 1) = '\0';
        for (int i = 0; i < b.size(); ++i)
        {
            *(pb + i) = b[i];
        }
        *(pb + b.size() + 1) = '\0';
        char *pz = new char[a.size() + b.size() + 1];
        pz =  strcat(pa, pb);

        for (int i = 0; i < a.size() + b.size(); ++i)
        {
            cout << *(pz + i);
        }
        cout << endl;
    }
return 0;

}