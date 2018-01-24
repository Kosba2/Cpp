/****************************************************************************
 * AUTHOR        : KOSTYANTYN SHUMISHYN
 * STUDENT IDs   : W7216875
 * LAB #11.4     : Boolean Expressions #4
 * CLASS	     : CS 150
 * DUE DATE	     : 3/27/2017
 ***************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

/****************************************************************************
 * Boolean Expressions
 *---------------------------------------------------------------------------
 * A do while loop that validates input class codes, where the valid inputs 
 *   are "F", "S", "J" or "R".
 *---------------------------------------------------------------------------
 * INPUT:
 *     classCode   : An input code for seniority in school
 *
 * OUTPUT:
 *     classCode   : An input code for seniority in school
 *     feedback    : A C-String which states classCode is valid or is not.
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
	 * VALID_OUT     : Holds output String of a valid classcode
	 * INVALID_OUT   : Holds output String of a valid classcode
	 ***********************************************************************/
	 
	const char  NAME[]         = "Kostyantyn S.";
    const char  CLASS[]        = "CS150";
	const char  SECTION[]      = "MW: 3:30pm - 5:20pm";
	const float LAB_NUM        = 11.4;
	const char  LAB_NAME[]     = "Boolean Expressions";
	
	// formatting constants
	const int PROMPT_WIDTH   = 39;
	const int COPY_WIDTH     = 41; //40 + terminator
	
	const char VALID_OUT[]   = " is valid - thank you!";
	const char INVALID_OUT[] = " is an INVALID INPUT - Please try Again!";
	
	// variable declarations will go here
	char classCode;            //IN  & OUT  - Character that represents class
	char upperClassCode;       //CALC       - Same as classCode but uppercase
	bool invalid;              //CALC       - Used to determine code validity
    
    char feedback[COPY_WIDTH]; //OUT & CALC - String for feedback on Code
    
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
    
    do
    {
          cout << setw(PROMPT_WIDTH) 
               << "Please input Seniority (F, S, J or R): ";
               
          cin.get(classCode);
          cin.ignore(10000, '\n');
          
          upperClassCode = toupper(classCode);
          
          if (upperClassCode != 'F' && upperClassCode != 'S' &&
              upperClassCode != 'J' && upperClassCode != 'R')
          {
              invalid = true;
              strncpy(feedback, INVALID_OUT, COPY_WIDTH);
              cout << endl << upperClassCode << feedback << endl << endl;
          } //upperClassCode != 'F' || upperClassCode != 'S' || 
            //upperClassCode != 'J' || upperClassCode != 'R'
          else
          {
              invalid = false;
          }
            
    }  while(invalid);
    
    strncpy(feedback, VALID_OUT, COPY_WIDTH);
    cout << endl << upperClassCode << feedback << endl;
        
    cout << right;
    
    cin.ignore(10000, '\n');
	                            
	return 0;
}
