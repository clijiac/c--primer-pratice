#include <iostream>
#include <vector>
#include <string>
#include <bitset>
using namespace std;

int main()
{
    int a, b,  d;
    a = 0;
    b = 1 ;
    d = a + b;
    std::bitset<32> bssdft(0x0000);
    while (d < 32)
    {
        bssdft.set(d);
        a = b;
        b = d;
        d = a + b;
    }
    cout << bssdft << endl;
    return 0;
}