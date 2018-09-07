#include <iostream> // Preprossor directive
using namespace std; // Preprosessor directive

/*Write a program that continually accepts a year value from a user and determines if it is a leap year
The year can be evenly divided by 4;
If the year can be evenly divided by 100, it is NOT a leap year, unless;
The year is also evenly divisible by 400. Then it is a leap year.
2000 & 2400 are leap years
1800 & 1900 are not leap years
*/

int main()
{
	int yearValue;
	int i = 0;

	// making sure the loop condition is executed at least one
	do {
		cout << " " << endl;
		cout << " To determine a leap year, enter a year in yyyy format: " << endl;
		cout << " To cancel: Enter zero (0)" << endl;
		cin >> yearValue;

		if (yearValue == 0)
			break;

		//Loop the conditions over and over again using for loop
		for (i = yearValue - 1; i >= 2; i--)
		{
			//nested if statement with leap year conditions 
			if ((yearValue % 4 == 0) && (yearValue % 100 != 0) || (yearValue % 400 == 0))
			{
				cout << " " << endl;
				cout << " YES, " << yearValue << " is a leap year." << endl;
			}
			else
			{
				cout << " " << endl;
				cout << " NO, " << yearValue << " is NOT a leap year." << endl;
			}
			break;
		}
		if (i == 1)
			return 0;

	} while (yearValue > i);
	cout << " " << endl;
	cout << " GOODBYE!" << endl;
	cout << " " << endl;
	cout << " Press Enter key to exit" << endl;

	cin.get(); //Accept a keystroke from the user
	cin.get();
	return 0;
}

