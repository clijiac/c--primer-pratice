#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string getline1 ,getword;
	// while(getline(cin,getline1)){
	// 	cout << getline1 << endl;
	// }
	while(cin >> getword){
		cout << getword << endl;
	}
	return 0;
}