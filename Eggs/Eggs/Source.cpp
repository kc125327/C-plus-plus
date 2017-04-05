#include <iostream>
#include <string>

int main()
{
	int inputEggs, dozenEggs, remainderEggs;
	double totaldozenPrice;
	double totalsinglePrice;
	double eggPricetotal;


	std::cout << "How many eggs would you like? :" << std::endl;
	std::cin >> inputEggs;

	dozenEggs = inputEggs / 12;
	remainderEggs = inputEggs % 12;
	totaldozenPrice = dozenEggs * 2.00;
	totalsinglePrice = remainderEggs * .25;
	eggPricetotal = totaldozenPrice + totalsinglePrice;

	std::cout << "You ordered " << inputEggs << " eggs. That is  " << dozenEggs << "dozen eggs and the price of just the dozen is "
		<< totaldozenPrice <<"That has a remainder of "<< remainderEggs << "That adds another total for the single eggs which is "<< totalsinglePrice 
		<< "Your total all togethter is " << eggPricetotal << std::endl;
}