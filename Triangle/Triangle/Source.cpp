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
		if (chooseSide == "B" || chooseSide == "b)
		{
			std::cout << "Enter side A";
			std::cin >> sideA;

			std::cout << "Enter side C";
			std::cin >> sideC;
			//do math here
			//Display answer here
		}
		if (chooseSide == "C" || chooseSide == "c")
		{
			std::cout << "Enter side B";
			std::cin >> sideB;

			std::cout << "Enter side A";
			std::cin >> sideA;

		}
	

	if (triangleChoice == "Isosceles" || triangleChoice == "isosceles")
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
		if (chooseSide == "B" || chooseSide == "b)
		{
			std::cout << "Enter side A";
			std::cin >> sideA;

			std::cout << "Enter side C";
			std::cin >> sideC;
			//do math here
			//Display answer here
		}
		if (chooseSide == "C" || chooseSide == "c")
		{
			std::cout << "Enter side B";
			std::cin >> sideB;

			std::cout << "Enter side A";
			std::cin >> sideA;


	}


	if (triangleChoice == "Equilateral" || triangleChoice == "equilateral")
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
		if (chooseSide == "B" || chooseSide == "b)
		{
			std::cout << "Enter side A";
			std::cin >> sideA;

			std::cout << "Enter side C";
			std::cin >> sideC;
			//do math here
			//Display answer here
		}
		if (chooseSide == "C" || chooseSide == "c")
		{
			std::cout << "Enter side B";
			std::cin >> sideB;

			std::cout << "Enter side A";
			std::cin >> sideA;



	}



}