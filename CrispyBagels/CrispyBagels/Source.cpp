#include<iostream>
#include<string>

int main()
{
	int bagels, donuts, coffee;
	double totalBagelPrice, totalDonutPrice, totalCoffeePrice;
	double totalPrice;

	std::cout << "How many bagels would you like? :" << std::endl;
	std::cin >> bagels;

	std::cout << "How many donuts would you like? : " << std::endl;
	std::cin >> donuts;

	std::cout << "How many cups of coffee would you like? :" << std::endl;
	std::cin >> coffee;

	totalBagelPrice = bagels * 0.99;
	totalDonutPrice = donuts * 0.75;
	totalCoffeePrice = coffee * 1.20;
	totalPrice = totalBagelPrice + totalDonutPrice + totalCoffeePrice;


}
