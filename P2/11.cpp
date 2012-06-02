#include <iostream>

int main()
{
	double  base , exponent;
	long double result =1;
	if (std::cin >> base >> exponent)
	{
		if (exponent >= 0)//这种计算方法,指数必须大于等于0
		{
			for (int i = 0; i < exponent; ++i)
			{
				result *= base;
			}
			std::cout<< base << " raised to the power of " << exponent << ": \t" << result << std::endl;
		}
		else {
			std::cout << "the exponent must bigger than 0" <<std::endl; 
		}
		
	}
	else {
	return  -1;
	}

	return 0;
}