#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION GetAndCheckCharResponse
 * --------------------------------------------------------------------------
 * This function gets an input of a single character and validates that it is
 * of some form of 'Y', 'y', 'N' or 'n'.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No parameters need to have a defined value, error checking and input
 *  occur within the scope of this function.
 *
 * POST-CONDITIONS
 *      This function will return a single, validated character of the forms
 *  'Y' or 'N'
 *          upperChar : Uppercase version of a validated character choice
 ***************************************************************************/

char GetAndCheckCharResponse(ifstream &fin, ofstream &fout)
{
    // constant
    const int PROMPT_WIDTH = 39;
    
    // variables
    char inputChar;
    char upperChar;
    bool charInvalid;
	
	// Error checks an input character against 'Y', 'y', 'N' or 'n'.
	do
	{
       	fout << setw(PROMPT_WIDTH);
        fout << "Would you like to play High Roller (y/n)? ";
    	fin.get(inputChar);
        fin.ignore(10000, '\n');
        fout << inputChar << endl;
    	
    	upperChar = toupper(inputChar);
    	charInvalid = ((upperChar != 'Y') && (upperChar != 'N'));
    	
    	if (charInvalid)
    	{
            fout << "** INVALID INPUT - Please enter 'Y' or 'N' **\n\n";
        }
        
    } while (charInvalid);
    
    fout << endl << endl;
    
    // Returns Uppercased version to help simplify possible future checks
    return upperChar;
}
