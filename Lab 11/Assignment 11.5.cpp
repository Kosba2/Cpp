/****************************************************************************
 * AUTHOR        : KOSTYANTYN SHUMISHYN
 * STUDENT IDs   : W7216875
 * LAB #11.5     : Boolean Expressions #5
 * CLASS	     : CS 150
 * DUE DATE	     : 3/27/2017
 ***************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

/****************************************************************************
 * Boolean Expressions
 *---------------------------------------------------------------------------
 * A while loop that will output a String representation of the integer the
 *   user has inputted. i.e. 1 is Lower, 5 is Middle, 9 is Upper.
 *---------------------------------------------------------------------------
 * INPUT:
 *     rank        : An input integer representing rank
 *
 * OUTPUT:
 *     rankString  : For outputting the C-String representation of ranks
 ***************************************************************************/

int main()
{
    /************************************************************************
 	 * CONSTANTS
     * ----------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING AS WELL AS FORMATTING
	 * ----------------------------------------------------------------------
	 * NAME         : Programmer's Name
	 * CLASS        : Students' Course
	 * SECTION      : Class Days and Times
	 * LAB_NUM      : Lab Number
	 * LAB_NAME     : Title of the Lab
	 * ----------------------------------------------------------------------
     * USED FOR PROCESSING
     * ----------------------------------------------------------------------
     *
     * ----------------------------------------------------------------------
     * USED FOR FORMATTING
     * ----------------------------------------------------------------------
	 * PROMPT_WIDTH  : Holds the length of Prompt C-String
	 * COPY_WIDTH    : Holds the max length of possible copy Strings
	 ***********************************************************************/
	 
	const char  NAME[]         = "Kostyantyn S.";
    const char  CLASS[]        = "CS150";
	const char  SECTION[]      = "MW: 3:30pm - 5:20pm";
	const float LAB_NUM        = 11.5;
	const char  LAB_NAME[]     = "Boolean Expressions";
	
	// processing constants
	
	
	// formatting constants
	const int PROMPT_WIDTH   = 37;
	const int COPY_WIDTH     = 8; //7 + terminator
	
	const char RANK_1[]      = "Lower";
	const char RANK_2[]      = "Middle";
	const char RANK_3[]      = "Upper";
	
	// variable declarations will go here
	int rank;                   //IN, CALC & OUT - Integer representing rank
    char rankString[COPY_WIDTH]; //OUT & CALC - String for feedback on Code
    
	// OUTPUT - Class Headings
	cout << left;
	cout << "****************************************************\n";
	cout << "* PROGRAMMER  : "    << NAME        <<endl;
	cout << "* "      << setw(12) << "CLASS"     << ": "  << CLASS    <<endl;
	cout << "* "      << setw(12) << "SECTION"   << ": "  << SECTION  <<endl;
	cout << "* Lab "  << setw(8) << LAB_NUM;
    cout << ": "                  << LAB_NAME    << endl;
	cout << "****************************************************\n\n";
	cout << right;
	
	
	/************************************************************************
	 * INPUT/PROCESSING/OUTPUT - Validates whether the input character is a
	 *    valid option to choose from, gives feedback if it isn't, completes
	 *    if the input is valid. Outputs that the character selected was a
	 *    valid character.
	 ***********************************************************************/
    cout << left;
    
    //Input
    cout << setw(PROMPT_WIDTH) << "Enter rank (Negative Number to Stop): ";
         
    cin  >> rank;
    cin.ignore(10000, '\n');
    
    if(rank > -1) // could do conditional operator here but less intuitive
    {                        
        while (rank > -1)
        {
            //Processing
            (rank <= 3 ? strncpy(rankString, RANK_1, COPY_WIDTH)
                   : rank <= 6 ? strncpy(rankString, RANK_2, COPY_WIDTH)
                              : strncpy(rankString, RANK_3, COPY_WIDTH));
            cout << endl << "Your rank of " << rank       << " is "
                                            << rankString << " class.\n\n\n";
    
            //Input
            cout << setw(PROMPT_WIDTH) 
                 << "Enter rank (Negative Number to Stop): ";
                 
            cin  >> rank;
            cin.ignore(10000, '\n');
        }         
    }
    
    cout << "\n\nThank you for using our Ranking Services " << rankString
         << " class citizen.";
    
    cin.ignore(10000, '\n');
	                            
	return 0;
}
