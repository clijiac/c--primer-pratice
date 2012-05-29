#include <iostream>
#include "Sales_item.h"

 int main()
{
	Sales_item item;
	std::cout << "please input the sales_item" << std::endl;
	while(std::cin >> item)
	{
		std::cout << "result " << std::endl;
		std::cout << item << std::endl;
	}
	return 0;
}