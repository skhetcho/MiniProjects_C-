// FILE: LnCount.cpp
// PROGRAMMER:  github.com/skhetcho
// READS A CHARACTER AT A TIME AND
// KEEPS COUNT OF THE NUMBER OF CHARACTERS
// AND THE  NUMBER OF LINES IT READS.
// Illustrate the use of loops
#include <iostream>		// for cin, cout
#include <stdlib.h> // System related commands
using namespace std;
int main()
{
	// Local data ...
	char ch;		// store the value of the character read in

	int lineCnt = 0;	// counter for number of lines entered
	int charCnt = 0;	// counter for number of characters entered
	cout << "Please enter lines of text including tabs " << endl;
	cout << "When you are finished each line press enter.\n "
		<< " Press Ctrl and Z at the same time to stop.Then press Enter"
		<< endl << endl;
	// Test for:   \t - tab;   ' ' - blank;    \n - end of line;   


	// Get a character from the keyboard
	while (cin.get(ch))
	{
		switch (ch)
		{
		case '\t':  case '  ':		// skip over tabs and blank spaces     /t means a tab so replace with two spaces
			break;
		case '\n':  ++lineCnt; 		// count all line feeds     \n is a new line whenever you see it add one to lineCnt
			break;
		case '^Z':					// break when CTRL-Z
			break;
		default:     ++charCnt; 	// everything else is a character     add one two charCnt for every character break;
		}  // end switch
	}  // end while

	cout << endl << endl;
	cout << "Number of lines read:      " << lineCnt << endl;
	cout << "Number of characters read: " << charCnt << endl;
	cout << "Written by:  github.com/skhetcho" << endl;
	system("pause");
	return 0;
}  // end main
