#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string result , getword;

    if (cin >> getword)
    {
        for (string::size_type i = 0; i < getword.size() - 1; ++i)
        {
            if (!ispunct(getword[i]))
            {
                result += getword[i];
            }
        }

        cout << result << endl;
    }
    else
    {
        return -1;
    }

    return 0;
}