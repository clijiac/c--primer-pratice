#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int itmp = 0;
    std::vector<int> vint;
    while (cin >> itmp)
    {
        vint.push_back(itmp);
    }
    int *piar = new int[vint.size()];
    for (int i = 0; i < vint.size(); ++i)
    {
        *(piar + i) = vint[i];

    }

    for (int i = 0; i < vint.size(); ++i)
    {
        cout << *(piar + i) << endl;
    }
    delete [] piar;
    return 0;
}