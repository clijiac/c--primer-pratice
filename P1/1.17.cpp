#include <iostream>


int main()
{   
	int v1,sum =0;
	std::cout << "Enter  numbers: " << std::endl;
	while(std::cin >> v1 )
	{			
		if (v1 < 0)
		{
			sum++;
		}
	}
	

	std::cout << " there are " << sum << " numbers < 0 " <<std::endl;


	return 0;
}