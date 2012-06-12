#include <iostream>
#include <vector>

using namespace std;

int main()
{
    const size_t VSIZE = 3;
    int p[] = {3, 2, 1, 3, 4, 5, 1, 2, 3, 1, 1};
    vector<int> ivec(p, p + 11);
    for (std::vector<int>::iterator i = ivec.begin(); i != ivec.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}