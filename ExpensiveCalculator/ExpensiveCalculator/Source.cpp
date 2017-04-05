#include <iostream>
#include <string>

int a;

int main()
{
	int aFirst, bSecond, cAdd, dSubtract, eDivide, fMultiply, gRemainder;
	std::string nameString;
	std::cout << "What is your name: ";
	std::cin >> nameString;

	std::cout << "Enter a Number: ";
	std::cin >> aFirst;

	std::cout << "Enter another Number: ";
	std::cin >> bSecond;

	//The math
	cAdd = aFirst + bSecond;
	dSubtract = aFirst - bSecond;
	Divide = aFirst / bSecond;
	Multiply = aFirst * bSecond;
	Remainder = aFirst % bSecond;
	std::cout << " and " << bSecond << " = " << cAdd << std::endl;

	std::cout << "The End " << nameString << std::endl;

}
