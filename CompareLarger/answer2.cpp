// FILE: Maxint.cpp
	// PROGRAMMER:  github.com/skhetcho
	// DISPLAYS THE LARGER OF TWO INTEGERS
	// Illustrates the use of functions
	#include <iostream>		// for cin, cout
	#include <stdlib.h>     // system, NULL, EXIT_FAILURE

	using namespace std; // for using cout and cin
 // Functions used
	  void Read2(int&, int&);	// function prototype to read in two number  Declare function existence
	  int Max(int, int);		// function prototype to find the maximum value  Declare function existence
	  void WriteMax(int);		// function prototype to write out the maximum  Declare function existence
int main ()
	{
	  // Local data...
	  int val1, val2;		// variables to store to integer values
	  int maxVal;			// variable to store the maximum value
	  // Get two values
	  Read2(val1, val2);		
	  // Find the maximum of the two values
	  maxVal = Max(val1, val2);  
	  // Display the maximum of the two values
	  WriteMax(maxVal);		
	  return 0;
	}

	//Purpose:  read in two integer values
	//Pre:  nothing
	//Post:  returns two integer values
	void Read2(int& v1, int& v2)	
	{
	  cout << "Please Enter The First Number :";
	  cin >> v1;
	  cout << "Please Enter The Second Number :";
	  cin >> v2;
	  return;
	}

	//Purpose:  find the maximum of two integer values
	//Pre:  two integer values
	//Returns:  the maximum of the two integer values
int Max(int v1, int v2)	 	// function definition
	{ 
              int maximum;
	  if (v1 > v2)
	    maximum = v1;
	  else
	    maximum = v2;
	  return maximum;
	}

	//Purpose:  To write out the given value
	//Pre:  An integer value is given
	//Post: nothing, value is written
void WriteMax(int val)	
{
	  cout << val << " is the largest value"<< endl << endl;
	  cout << "Written by:  github.com/skhetcho"
		<< endl;
	  system("pause");
	}
