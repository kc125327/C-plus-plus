#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int randomNumber = rand();
	int die = (randomNumber % 100) + 1;
	int number;
	int chances = 0;

	std::string secondChance;

	do{
		chances++;
		std::cout << "Pick a number between 1 and 6" << std::endl;
		std::cin >> number;

		if (number == die)
		{
			std::cout << "Congratulations the number " << die << " is correct!" << std::endl;

		}
		else if (number > die){


			std::cout << "You chose too high. " << std::endl;
		}
		else(number < die){


			std::cout << "You chose too low. " << std::endl;
		}

		std::cout << "You have used " << chances << "of 5 chances" << std::endl;
		
	} while (chances  != 5 || number == die);

	std::cout << "Game Over!" << chances << " of 5 Chances" << std::endl;

	system("pause");
	return 0;

	

}