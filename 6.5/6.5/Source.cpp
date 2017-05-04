#include<iostream>

using namespace std;

int main()
{
	//declare array
	int number[] = { 23, 6, 47, 35, 2, 14 };
	int i, sum = 0;



	//declare variables
	int average;
	int highest = 0;


	//calculations
	for (int i = 0; i <= 5; i++)
	{
		if (highest < number[i])
		{
			highest = number[i];
		}
		cout << "The highest number is: " << highest << endl;
	}
	//average = sum / 6;

	//display output
	//cout << "Average of the numbers is " << average << endl;


	return 0;
}

