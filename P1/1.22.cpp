#include <iostream>
#include "Sales_item.h"

 int main()
{
	Sales_item item1 ,item2;
	std::cout << "please input the sales_item" << std::endl;
	std::cin >> item1 >> item2;
	if(item1.same_isbn(item2))
	{
		std::cout << "result " << std::endl;
		std::cout << item1+item2 << std::endl;
	}
	return 0;
}