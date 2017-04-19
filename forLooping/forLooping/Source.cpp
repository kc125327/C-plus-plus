#include <iostream>
#include <string>

int main()
{
	std::cout << "Counting Foward:\n";
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << " ";

	}
	std::cout << "Counting Backward:\n";
	for (int i = 0; i < 10; i--)
	{
		std::cout << i << " ";

	}
	std::cout << "\n\n";
	std::cout << "Counting by Fives: \n";
	for (int i = 0; i <= 10; i = i + 5)
	{
		std::cout << i << " ";
	}
	std::cout << "\n\n";

	std::cout << "\n\n";
	std::cout << "Counting with Nested For Loops: \n";
	int row = 10; 
	int column = 5;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			std::cout << i << "." << j << " ";

		}
		std::cout << std::endl;
	}


	system("pause");
	return 0;
}