#include <iostream>

using std::cin;
using std::cout;
using std::endl;
int main()
{
	double  base , exponent;
	long double result =1;
	if (cin >> base >> exponent)
	{
		if (exponent >= 0)//这种计算方法,指数必须大于等于0
		{
			for (int i = 0; i < exponent; ++i)
			{
				result *= base;
			}
			cout<< base << " raised to the power of " << exponent << ": \t" << result << endl;
		}
		else {
			cout << "the exponent must bigger than 0" <<endl; 
		}
		
	}
	else {
	return  -1;
	}

	return 0;
}