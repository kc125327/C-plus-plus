#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	
		int number;
		int chances = 0;

	
		std::cout << "Pick a number between 1 and 10" << std::endl;
		std::cin >> number;
		do {
			chances = chances + 1;
			srand(static_cast<unsigned int>(time(0)));
			int randomNumber = rand();
			int die = (randomNumber % 10) + 1;
			std::cout << "The number the computer chose was " << die << std::endl;

			if (die == number)
			{
				std::cout << "Congratulations the number " << number << " is correct!" << std::endl;

			}
			else if (die > number){


				std::cout << "You chose too high. " << std::endl;
			}
			else{
				std::cout << "To High " << std::endl;
			}

			std::cout << "You have used " << chances << "of 5 chances" << std::endl;



			//std::cout << "Game Over!" << chances << " of 5 Chances" << std::endl;
		} while (chances == 5);

		
	system("pause");
	return 0;

	

}