#include <iostream>
#include <string>

int main(){
	unsigned long studentComputerNumber;

	//scan computer
	std::cout << "Please scan your computer";
	std::cin >> studentComputerNumber;

	do{

		switch (studentComputerNumber)
		{
		case 99732:
			std::cout << "Dusty's Computer";
			break;

		case 99720:
			std::cout << "Hannah's Computer";
			break;

		case 99724:
			std::cout << "Kayla's Computer";
			break;

		case 98718:
			std::cout << "Zach's Computer";
			break;

		case 99727:
			std::cout << "Chase's Computer";
			break;

		case 99733:
			std::cout << "Chance's Computer";
			break;

		case 99715:
			std::cout << "Glenn's Computer";
			break;

		case 99735:
			std::cout << "Trey's Computer";
			break;

		case 99721:
			std::cout << "Gairren's Computer";
			break;

		case 99738:
			std::cout << "Dipesh's Computer";
			break;

		case 99717:
			std::cout << "Andrew's Computer";
			break;

		default:
			std::cout << "Invalid Computer";

		}	std::cout << "Would you like to scan again?";
		std::cin >> done;

		while (done == "yes");
	}




