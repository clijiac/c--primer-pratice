#include <iostream>
#include "Sales_item.h"

 int main()
{
	Sales_item item1 ,item2;
	std::cout << "please input the sales_item" << std::endl;
	int p=0;
	while(std::cin >> item2)
	{
		if(p==0){item1=item2;p++;
		}
		if(item1.same_isbn(item2))
		{
			item1 += item2;
		}		
	}
	
	
	std::cout << "result " << std::endl;
	std::cout << item1 << std::endl;
	
	return 0;
}