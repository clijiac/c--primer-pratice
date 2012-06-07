#include <iostream>
#include <vector>

using namespace std;

int main()
{
    const size_t vsize = 10;
    int  b[vsize];
    for (size_t i = 0; i < vsize; ++i)
    {
        b[i] = i;
    }
    return 0;
}