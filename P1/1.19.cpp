#include <iostream>

int main()
{
	std::cout << "Enter two numbers: " << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2; //read input
	int lower, upper;
	if (v1<=v2)
	{
		lower = v1;
		upper = v2;
	} else {
		lower = v2;
		upper = v1;
	}
	int p = 1;
	std::cout << " start " << std::endl;
	for (int i = lower; i <= upper; ++i)
	{
		std::cout << i << " ";
		if (p!=10)
		{
			p++;
		} else {
			p =0;
			std::cout  << std::endl;
		}
	}
	std::cout  << std::endl;
	std::cout << " end " << std::endl;


	return 0;
}