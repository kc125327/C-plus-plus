#include<iostream>

using namespace std;

int main()
{
	//declare array
	int number[] = { 23, 6, 47, 35, 2, 14 };
	int i, sum = 0;

	//declare variables
	int average;

	//calculations
	for (int i = 0; i <= 5; i++)
	{
	
		sum = sum + number[i];
	}
	average = sum / 6;

	//display output
	cout << "Average of the numbers is " << average << endl;


	return 0;
}

