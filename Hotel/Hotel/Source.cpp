#include <iostream>
#include <string>
using namespace std;

int main()
{
	string choice, RoomChoice, phone;
	int nights, phoneMin;

	float phoneChargeMin = .25, roomService = 35.00, phoneTotal, nightTotal, nightCost = 100.00;

	cout << "Welcome to Hotel Geo! ";
	cout << "Would you be staying with us? Yes or No? ";
	cin >> choice;

	while (choice == "Yes" || choice == "yes")
	{
		cout << "How many nights are you staying?";
		cin >> nights;
		nightTotal = nightCost * nights;

		cout << "While staying in the room are you going to use the phone? Yes or No?";
		cin >> phone;
		if (phone == "Yes" || phone == "yes")
		{
			cout << "How many minutes on the phone? ";
			cin >> phoneMin;
			phoneTotal = phoneChargeMin * phoneMin;

		}
		cout << "Did you use room service? Yes or No?";
		cin >> RoomChoice;
		if (RoomChoice == "Yes" || RoomChoice == "yes")
		{
			cout << "The cost is $35\n";
			cout << "Total cost for your stay is $ " << nightTotal + phoneTotal + roomService << endl;

		}

		else if (RoomChoice == "No" || RoomChoice == "no")
		{
			cout << "Total cost for your stay is $ " << nightTotal + phoneTotal + roomService << endl;
		}
		else
			cout << "Total cost for your stay is $" << nightTotal << endl;
		cout << "Would you be staying with us again? Yes or No?";
		cin >> choice;


	}
	if (choice == "No" || choice == "no")
		cout << "I guess you are too good for my hotel.\n";

	


	return 0; 

}