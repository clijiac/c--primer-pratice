#include <iostream>

int main()
{
	int sum = 0;
	for (int i = 10; i >= 0; --i)
	{
		sum += i;
	}
	std::cout << "For result" << std::endl;
	std::cout << sum << std::endl;

	sum = 0;
	int p = 10;
	while(p>=0)
	{
		sum+=p;
		p--;
	}
	std::cout << "while result" << std::endl;
	std::cout << sum << std::endl;

	return 0;
}