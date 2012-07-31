#include <iostream>
using namespace std;
class A
{
public:
    A (int a1 = 0, int a2 = 0): a(a1), b(a2) {};
    virtual   int del()
    {
        return b--;
    }
    int a, b;
    static int c;
};

int main()
{
    A a1(4, 5);
    A a2(3, 3);
    cout << sizeof(a1) << endl;
    a1.del();
    a2.del();
}
