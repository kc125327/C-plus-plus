#include <iostream>
#include <iomanip>



int main()
{
	//declare array
	double sales[4] = { 0.0 };

	//store data in the array
	for (int sub = 0; sub < 4; ++sub)
	{
		std::cout << "Enter the sales for region";
		std::cout << sub + 1 << " : ";
		std::cin >> sales[sub];;

		//end for 
	}
	//display the contents of the array 
	std::cout << std::fixed << std::setprecision(2) << "\n\n";
	for (int sub = 0; sub < 4; sub += 1)
	{
		std::cout << "Sales for region " << sub + 1 << ": $ ";
		std::cout << sales[sub] << std::endl;
		//end for
	}
	double total; 
	for (int sub = 0; sub < 4; sub += 1)
	{
		total = sales[4] + total;

	}
	std::cout << "The total is : " << total << std::endl;
	system("pause");
	return 0;
	//end of main function
}