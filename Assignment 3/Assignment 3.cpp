/****************************************************************************
 * AUTHOR        : KOSTYANTYN SHUMISHYN
 * STUDENT IDs   : W7216875
 * Assignment #3 : Largest of 3 Values
 * CLASS	     : CS 150
 * DUE DATE	     : 3/08/2017
 ***************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

/****************************************************************************
 * Largest of 3 Values
 *---------------------------------------------------------------------------
 * This program will take an input of 3 float or non-float values and 
 *      determine the one with the largest value of the three.
 *---------------------------------------------------------------------------
 * INPUT:
 *     firstValue  : The first of three values to be compared in magnitude
 *     secondValue : The second of three values to be compared in magnitude
 *     thirdValue  : The third of three values to be compared in magnitude
 *
 * OUTPUT:
 *     greatestVal : The greatest out of 3 values inputted
 *     whichVal    : Holds the value of WHICH value is the greatest
 ***************************************************************************/

int main()
{
    /************************************************************************
 	 * CONSTANTS
     * ----------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING AS WELL AS FORMATTING
	 * ----------------------------------------------------------------------
	 * NAME           : Programmer's Name
	 * CLASS          : Students' Course
	 * SECTION        : Class Days and Times
	 * ASGNMT_NUM     : Assignment Number
	 * ASGNMT_NAME    : Title of the Assignment
	 * ----------------------------------------------------------------------
     * USED FOR PROCESSING
     * ----------------------------------------------------------------------
     *
     * ----------------------------------------------------------------------
     * USED FOR FORMATTING
     * ----------------------------------------------------------------------
	 * PROMPT_WIDTH : Holds the column width for the prompt
	 * WHICH_WIDTH  : Holds the max length of whichVal's String
	 * FIRST_WHICH  : Holds String of "1st"
	 * SECOND_WHICH : Holds String of "2nd"
	 * THIRD_WHICH  : Holds String of "3rd"
	 ***********************************************************************/
	 
	const char NAME[]         = "Kostyantyn S.";
    const char CLASS[]        = "CS150";
	const char SECTION[]      = "MW: 3:30pm - 5:20pm";
	const int  ASGNMT_NUM     = 3;
	const char ASGNMT_NAME[]  = "Largest of 3 Values";
	
	// processing constants
	
	
	// formatting constants
	const int PROMPT_WIDTH    = 9;
	const int WHICH_WIDTH     = 4; //3 + terminator
	
	const char FIRST_WHICH[]  = "1st";
	const char SECOND_WHICH[] = "2nd";
	const char THIRD_WHICH[]  = "3rd";
	
	// variable declarations will go here
	float firstValue;    //IN  & OUT  - First value to be compared
    float secondValue;   //IN  & OUT  - Second value to be compared
    float thirdValue;    //IN  & OUT  - Third value to be compared
    
    float greatestVal;   //OUT & CALC - Greatest in magnitude of the three #s
    char whichVal[WHICH_WIDTH]; //OUT & CALC - WHICH value was the largest
    
	// OUTPUT - Class Headings
	cout << left;
	cout << "****************************************************\n";
	cout << "* PROGRAMMER  : "    << NAME        <<endl;
	cout << "* "      << setw(12) << "CLASS"     << ": "  << CLASS    <<endl;
	cout << "* "      << setw(12) << "SECTION"   << ": "  << SECTION  <<endl;
	cout << "* Assignment "       << ASGNMT_NUM;
    cout << ": "                  << ASGNMT_NAME << endl;
	cout << "****************************************************\n\n";
	cout << right;
	
	
	/************************************************************************
	 * INPUT - Prompts the user for the three values which will be compared
	 * in magnitude to find the greatest value among them. Keeps buffer clean
	 * and uses proper input operation for numbers.
	 ***********************************************************************/
    cout << left;
    
    cout << setw(PROMPT_WIDTH) << "Value 1: ";
    cin  >> firstValue;
    cin.ignore(10000, '\n');
    
    cout << setw(PROMPT_WIDTH) << "Value 2: ";
    cin  >> secondValue;
    cin.ignore(10000, '\n');
    
    cout << setw(PROMPT_WIDTH) << "Value 3: ";
    cin  >> thirdValue;
    cin.ignore(10000, '\n');

    cout << right;
        
	/************************************************************************
	 * PROCESSING - Compares magnitude of numbers in an intuitive way to
	 * minimize number of operations that occur by nesting. Finds the
	 * greatest number among three values and assigns it as such.
	 ***********************************************************************/
    if (firstValue > secondValue)
    {
        if (firstValue > thirdValue)
        {
            greatestVal = firstValue;
            strncpy(whichVal, FIRST_WHICH, WHICH_WIDTH);
        }
        
        else
        {
            greatestVal = secondValue;
            strncpy(whichVal, SECOND_WHICH, WHICH_WIDTH);
        }   
    }
    
    else
    {
        if ( secondValue > thirdValue)
        {
            greatestVal = secondValue;
            strncpy(whichVal, SECOND_WHICH, WHICH_WIDTH);
        }
        
        else
        {
            greatestVal = thirdValue;
            strncpy(whichVal, THIRD_WHICH, WHICH_WIDTH);
        }
    }
    
	/************************************************************************
	 * OUTPUT - Output the greatest number between three inputs and which
	 * input holds the number
	 ***********************************************************************/
    cout << left;
    
    cout << showpoint << fixed << setprecision(2) << endl;
    cout << "The largest value is the " << whichVal
         << " value: "                  << greatestVal
         << "\n\n";
         
    cout << right;
    
    cin.ignore(10000, '\n');
	                            
	return 0;
}
