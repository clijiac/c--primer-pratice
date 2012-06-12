#include <iostream>
#include <string>
#include <cstring>
#include <time.h>
#
using namespace std;

int main()
{
    clock_t start, finish;
    double totaltime;
    start = clock();
    const char *pc = "a very long literal string";
    const size_t len = strlen(pc);

    for (size_t ix = 0; ix != 10000000; ++ix)
    {
        char *pc2 = new char[len + 1];
        strcpy(pc2, pc);
        if (strcmp(pc2, pc))
        {
            /* code */
        }
        delete [] pc2;
    }
    finish = clock();
std::vector<int> v(int_arr,int_arr+arr_size);
    totaltime = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << "char * is" << totaltime << "s!" << endl;

    start = clock();
    string str("a very long literal string");
    for (size_t ix = 0; ix != 10000000; ++ix)
    {
        string str2 = str;
        if (str != str2)
        {
            /* code */
        }
    }
    finish = clock();

    totaltime = (double)(finish - start) / CLOCKS_PER_SEC;
     cout << "string is " << totaltime << "s!" << endl;
    return 0;
}