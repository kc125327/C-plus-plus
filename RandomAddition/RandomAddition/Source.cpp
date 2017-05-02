#include<iostream>
#include<ctime>
//#include<cstdlib>
using namespace std;

int main()
{
	//declare variables
		int num1 = 0;
		int num2 = 0;
		int correctAnswer = 0;
		int userAnswer = 0;

		//initialize rand function 
		srand(static_cast<int>(time(0)));
		for (int x = 1; x < 6; x += 1)
		{
			//generate two random integers
			//from 1 through 10, then 
			//calculate the sum
			num1 = 1 + rand() % (10 - 1 + 1);
			num2 = 1 + rand() % (10 - 1 + 1);
			correctAnswer = num1 + num2;

			//display addition problem and get the user's answer
			cout << "What is the sum of " << num1 << " + " << num2 << "?";
			cin >> userAnswer;

			//determine whether user's answer is correct 
			if (userAnswer == correctAnswer)
				cout << " Correct!";

			else cout << "Sorry, the correct answer is " << correctAnswer << ".";

			// end if 
			cout << endl << endl;
		}
			//end for
		//system("pause");
		return 0;
		}// end of main function
