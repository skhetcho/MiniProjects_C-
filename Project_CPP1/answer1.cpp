// FILE: Hello.cpp
// PROGRAMMER:  github.com/skhetcho	
// PURPOSE:  Displays a User’s nickname and hours worked
#include <iostream>		// for cin and cout
#include <iomanip>		// for formatting decimal numbers
#include <string>		// for using the string class
using namespace std;		//for later versions of C++
int main()
{
	// Local data ...
	char letter1, letter2, letter3;			// input: three letters to display
	double hoursPerDay, hoursPerWeek;	// hours per day, hours per week
	int numDays;					// number of days worked in a week
	string name;					// user’s first name
									// Enter name and initials, the hours per day 
									// and the number of days
	cout << " Please enter your name: ";
	cin >> name;
	cout << "Enter three initials for your name: ";
	cin >> letter1 >> letter2 >> letter3;
	cout << "Enter the number of hours you work in a day: ";
	cin >> hoursPerDay;
	cout << "Enter the number of days you work in a week: ";
	cin >> numDays;
	// Calculate the number of hours worked in a week
	hoursPerWeek = hoursPerDay * numDays;
	// Output a message formatting the hours to one decimal place
	cout << fixed << showpoint << setprecision(1) << "\n";
	cout << "Hello " << name << endl;
	cout << "Your initials are:  " << letter1 << "."
		<< letter2 << "." << letter3 << ".\n";
	cout << "I hope you enjoy studying C++  for " << hoursPerWeek << " hours each week! " << endl << endl << "\n\n\n";
	cout << "Written by:  github.com/skhetcho "
		<< endl;
	return 0;
}
