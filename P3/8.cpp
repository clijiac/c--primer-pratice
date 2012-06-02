#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string result1,result2 ,getword;
	
	while(cin >> getword){
		result1 += getword;
		result2 += getword+" ";
	}
	cout << result1 << endl;
	cout << result2 << endl;
	return 0;
}