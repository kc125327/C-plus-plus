#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	
		int number;
		int chances = 0;
		int level;

	
		std::cout << "Pick a number between 1 and 10" << std::endl;
		std::cin >> number;
		chances = chances + 1;
		srand(static_cast<unsigned int>(time(0)));
		int randomNumber = rand();
		int die = (randomNumber % 10) + 1;
		std::cout << "The number the computer chose was " << die << std::endl;
		do {
			std::cout << "Which level would you like? 1 is for easy, 2 for medium, and 3 for hard :";
			std::cin >> level;
			switch(level){

			case 1:

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
				break;

			case 2: 
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

				std::cout << "You have used " << chances << "of 3 chances" << std::endl;
				break;


			case 3:
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

				std::cout << "You have used " << chances << "of 1 chances" << std::endl;
				break;




				//std::cout << "Game Over!" << chances << " of 5 Chances" << std::endl;
			} while (chances == 5|| chances == 3 || chances == 1);


			system("pause");
			return 0;



		}
}