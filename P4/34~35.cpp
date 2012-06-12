#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

int main()
{

    string stmp;
    std::vector<string> svec;
    while (cin >> stmp)
    {
        svec.push_back(stmp);
    }
    char **p = new char*[svec.size()];
    for (std::vector<string>::size_type i = 0; i != svec.size(); ++i)
    {
        char *ctmp = new char[svec[i].size()+1]; //becareful the null '\0'
        strncpy(ctmp, svec[i].c_str(), svec[i].size()+1);
        *(p + i) = ctmp;
        cout << svec[i] << " ";
    }
    cout << endl;
    for (size_t i = 0; i != svec.size(); ++i)
    {
        cout << *(p + i) << " ";
    }
    cout << endl;
    delete [] p;
    return 0;
}