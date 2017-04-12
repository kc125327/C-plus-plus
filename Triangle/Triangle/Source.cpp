#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
  

int main()
{
	double sideA, sideB, sideC;
	std::string triangleChoice, chooseSide;
	std::cout << "Choose a triangle? " << std::endl;
	std::cin >> triangleChoice;
	if (triangleChoice == "right" || triangleChoice == "Right")
	{
		std::cout << "Please enter a side that you are trying to solve";
		std::cin >> chooseSide;
		if (chooseSide == "A" || chooseSide == "a")
		{
			std::cout << "Please enter for side B";
			std::cin >> sideB;
			std::cout << "Please enter for side C";
			std::cin >> sideC;
		\
			//do math here
			//Display answer here
		}
		if (chooseSide == "B")
		{
			//enter side B
			//enter side C
			//do math here
			//Display answer here
		}
	}
	

	if (triangleChoice == "Isoceles" || triangleChoice == "yes")
	{



	}

	std::cout << "Do you have a equilateral? Yes or No?" << std::endl;
	if (equilateral == "Yes" || equilateral == "yes")
	{



	}
	else
	{



	}


}