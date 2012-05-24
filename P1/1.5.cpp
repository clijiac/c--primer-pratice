#include <iostream>
int  main()
{
	std::cout << "Enter two numbers: " ;
	std::cout << std::endl;
	int a,b;
	std::cin >> a ;
	std::cin >> b ;
	std::cout <<"The sum of " ;
	std::cout << a ;
	std::cout << " and " ;
	std::cout << b ;
	std::cout << " is " ;
	std::cout << a+b ;
	std::cout << std::endl;
	return 0;
}