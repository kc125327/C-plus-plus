#include <iostream>
#include<string>

int main()
{
	double far8, far12, far5;
	double cel8, cel12, cel5 ;


	std::cout << "What was the Temperture (celsius) at 8:00 A.M? : " << std::endl;
	std::cin>> cel8;

	if (cel8 > 10)
	{
		std::cout << "Error: Can't give a temperture higher than the first";

	}
	std::cout << "What was the Temperture (celsius) at 12:00 P.M? : " << std::endl;
	std::cin>> cel12;
	if (cel12 > 10)
	{
		std::cout << "Error: Can't give a temperture higher than the first";

	}

	std::cout << "What was the Temperture (celsius) at 5:00 P.M? : " << std::endl;
	std::cin >> cel5;
	if (cel5 > 10)
	{
		std::cout << "Error: Can't give a temperture higher than the first";

	}
	system  ("pause");
	return 0;


	far8 = cel8 * 9/5 + 32;
	far12 = cel12 * 9/5 + 32;
	far5 = cel5 * 9 / 5 + 32;


	std::cout << "This was the temperture at 8:00 A.M in celsius " << cel8 << " and this is the temperture in farhernheit " << far8 << std::endl;
	std::cout << "This was the temperture at 12:00 P.M in celsius " << cel12 << " and this is the temperture in farhernheit " << far12 << std::endl;
	std::cout << "This was the temperture at 5:00 P.M in celsius " << cel5 << " and this is the temperture in farhernheit " << far5 << std::endl;



}
