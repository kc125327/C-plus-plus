#include <iostream>
#include <string>

int main()
{
	double american, japanese, mexico, europe;

	std::cout << "How much money do you have? " << std::endl;
	std::cin >> american;

	japanese = american * 82.34;
	mexico = american * 12.8863;
	europe = american * .6318;


	std::cout << "You came in with $" << american << " dollars. We have converted them into Pesos, Pounds, and Yen." << std::endl;
	std::cout << "For Pesos you have " << mexico << ". For Pounds you have " << europe << ". For Yen you have " << japanese << std::endl;

}