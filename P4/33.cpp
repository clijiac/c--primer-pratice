#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
    int p[] = {3, 2, 1, 3, 4, 5, 1, 2, 3, 1, 1};
    vector<int> ivec(p, p + 11);
    for (std::vector<int>::iterator i = ivec.begin(); i != ivec.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;
    const size_t VSIZE = ivec.size();
    int *p2 =new int[VSIZE];
    for (size_t i=0;i!=VSIZE; ++i)
    {
    	*(p2+i) = ivec[i];
    }
    for (int i = 0; i < VSIZE; ++i)
    {
    	cout << *(p2+i) << " ";
    }
    cout << endl;
    delete [] p2;

    return 0;
}