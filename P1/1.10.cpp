#include <iostream>

int main()
{
	int sum = 0;
	for (int i = 50; i <= 100; ++i)
	{
		sum += i;
	}
	std::cout << "For result" << std::endl;
	std::cout << sum << std::endl;

	sum = 0;
	int p = 50;
	while(p<=100)
	{
		sum+=p;
		p++;
	}
	std::cout << "while result" << std::endl;
	std::cout << sum << std::endl;

	return 0;
}