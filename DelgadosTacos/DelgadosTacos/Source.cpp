//Delgado's Tacos
//Kayla Clayton
//3-30-17

#include <iostream>
#include<string>

int main()
{
	// Prices
	double tacoPrice = 0.99;
	double burritoPrice = 1.20;
	double drinkPrice = 0.50;
	double quesadillaPrice = 2.50;
	double tostadaPrice = 1.20;
	double tamalePrice = 2.50;
	double empanadaPrice = 1.00;
	double chipsPrice = 1.50;
	double salsaPrice = 0.50;
	double guacamolePrice = 0.50;

	//Tax
	const double taxRate = 1.075;

	//Items on the menu
	double tacoOrdered, burritoOrdered, drinkOrdered, total, totalWithTax, quesadillaOrdered, tostadoOrdered, tamaleOrdered, empanadaOrdered,
		chipsOrdered, salsaOrdered, guacamoleOrdered;
	double tacoTotal, burritoTotal, drinkTotal, quesadillaTotal, tostadoTotal, tamaleTotal,
		empanadaTotal, chipsTotal, salsaTotal, guacamoleTotal;

	// Welcoming sign 
	std::cout << "Welcome to Delgado's Tacos" << std::endl;

	// Asking for food 
	std::cout << "How many Tacos do you want?" << std::endl;
	std::cin >> tacoOrdered;
	
	std::cout << "How many Burritos do you want?" << std::endl;
	std::cin >> burritoOrdered;

	std::cout << "How many Drinks do you want?" << std::endl;
	std::cin >> drinkOrdered;

	std::cout << "How many Quesadillas do you want?" << std::endl;
	std::cin >> quesadillaOrdered;

	std::cout << "How many Tostados do you want?" << std::endl;
	std::cin >> tostadoOrdered;

	std::cout << "How many Tamales do you want?" << std::endl;
	std::cin >> tamaleOrdered;

	std::cout << "How many Empanadas do you want?" << std::endl;
	std::cin >> empanadaOrdered;

	std::cout << "How many orders of Chips do you want?" << std::endl;
	std::cin >> chipsOrdered;

	std::cout << "How many Salsas do you want?" << std::endl;
	std::cin >> salsaOrdered;

	std::cout << "How many Guacamole do you want?" << std::endl;
	std::cin >> guacamoleOrdered;

	// Ordered food total
	tacoTotal = tacoOrdered * tacoPrice;
	burritoTotal = burritoOrdered * burritoPrice;
	drinkTotal = drinkOrdered * drinkPrice;
	quesadillaTotal = quesadillaOrdered * quesadillaPrice;
	tostadoTotal = tostadoOrdered * tostadaPrice;
	tamaleTotal = tamaleOrdered * tamalePrice;
	empanadaTotal = empanadaOrdered * empanadaPrice;
	chipsTotal = chipsOrdered * chipsPrice;
	salsaTotal = salsaOrdered * salsaPrice;
	guacamoleTotal = guacamoleOrdered * guacamolePrice;
	 // Ordered food with tax and without tax
	total = tacoTotal + burritoTotal + drinkTotal + quesadillaTotal + tostadoTotal + tamaleTotal +
		empanadaTotal + chipsTotal + salsaTotal + guacamoleTotal;
	totalWithTax = total * taxRate;

	//Ending Balance
	std::cout << "Your total for all items entered is $" << total<< " without tax." << std::endl;
	std::cout << "Your total for all items entered with tax is $" << totalWithTax << std::endl;

}
