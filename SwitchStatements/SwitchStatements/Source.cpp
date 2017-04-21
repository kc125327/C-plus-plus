#include <iostream>

int main(){
	char grade = ' ';
	//enter grade
	std::cout << "Enter a letter Grade: ";
	std::cin >> grade;
	grade = toupper(grade);

	switch (grade)
	{
		case 'A';
			std::cout << "Excellent\n";
			break;
		case 'B';
				std::cout << "Above average\n";
				break;
		case 'C';
				std::cout << "Average\n";
				break;

		case 'D';
		case'F';
			std::cout << "Below Average\n";
			break;

			default;
			std::cout << "Invalid Grade\n";


	}
	system("pause");
	return 0;
}