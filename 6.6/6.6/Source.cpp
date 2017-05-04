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
	int odd = 0;


	//calculations
	for (int i = 0; i <= 5; i++)
	{
		if (odd % number[i])
		{
			odd = number[i];
		}
	}
	//average = sum / 6;

	//display output
	//cout << "Average of the numbers is " << average << endl;


	return 0;
}