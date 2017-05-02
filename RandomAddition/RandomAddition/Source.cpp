//Mod
//Kayla Clayton
#include<iostream>
#include<ctime>
//#include<cstdlib>
using namespace std;

//function prototype 
int getRandomNumber(int lower, int upper);


int main()
{
	//declare variables
		int num1 = 0;
		int num2 = 0;
		int correctAnswer = 0;
		int userAnswer = 0;
		int smallest = 0;
		int largest = 0;


		//initialize rand function 
		srand(static_cast<int>(time(0)));
		cout << "Smallest integer: ";
		cin >> smallest;
		cout << "Largest Integer: ";;
		cin >> largest;



		for (int x = 1; x < 6; x += 1)
		{
			//generate two random integers
			//from smallest  through largest , then 
			//calculate the sum
			num1 = getRandomNumber(smallest, largest );
			num2 = getRandomNumber(smallest, largest );
			correctAnswer = num1 + num2;

			//display addition problem and get the user's answer
			cout << "What is the sum of " << num1 << " + " << num2 << "?";
			cin >> userAnswer;

			//determine whether user's answer is correct 
			if (userAnswer == correctAnswer)
				cout << " Correct!";

			else cout << "Sorry, the correct answer is " << correctAnswer << ".";

			//*****Function definitions****
			int getRandomNumber(int lower, int upper)
			{
				int randInteger = 0;
				//generate random integer from lower  through upper
				randInteger = lower + rand() % (upper  - lower + 1);
				return randInteger;
				//end of getRandomNumber Function

			}

			// end if 
			cout << endl << endl;
		}
			//end for
		//system("pause");
		return 0;
		}// end of main function
