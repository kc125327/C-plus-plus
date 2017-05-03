//Moonbucks Coffee
//May 3, 2017
//Kayla Clayton

#include<iostream>
using namespace std;

//more shit
double getTotal(double poundsUsed[], int numElements);
int main()
{
	//declare array
	double pounds[12] = { 400.5, 450.0, 475.5, 336.5, 457.0, 325.0, 220.5, 276.0, 300.0, 320.5, 400.5, 415.0 };
	//declare variables
	double total = 0.0;
	double average = 0.0;

	//calculate the total and average pounds used 
	total = getTotal(pounds, 12);
	average = total / 12;

	//display the total and average pounds used
	cout << "Total pounds: " << total << endl;
	cout << "Average Pounds: " << average << endl;

	system("pause");
	return 0;

}

double getTotal(double poundsUsed[], int numElements)
{
	double totalUsed = 0.0;

	for (int sub = 0; sub < numElements; sub += 1)
		totalUsed += poundsUsed[sub];
	//end for
	
	return totalUsed;
}
