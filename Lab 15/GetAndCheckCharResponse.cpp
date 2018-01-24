#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION GetAndCheckCharResponse
 * --------------------------------------------------------------------------
 * This function gets an input of a single character and validates that it is
 * of some form of 'Y', 'y', 'N' or 'n'.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      Accepts a prompt that specifies what the machine is asking for
 *          prompt    : A prompt for the user
 *       
 * POST-CONDITIONS
 *      This function will return a single, validated character of the forms
 *  'Y' or 'N'
 *          upperChar : Uppercase version of a validated character choice
 ***************************************************************************/

char GetAndCheckCharResponse(string prompt)
{
    // Variables
    char inputChar;
    char upperChar;
    bool charInvalid;
    
	// Error checks an input character against 'Y', 'y', 'N' or 'n'.
	do
	{
       	cout << prompt << " (y/n)? : ";
    	cin.get(inputChar);
        cin.ignore(10000, '\n');
    	
    	upperChar = toupper(inputChar);
    	charInvalid = ((upperChar != 'Y') && (upperChar != 'N'));
    	
    	if (charInvalid)
    	{
            cout << "** INVALID INPUT - Please enter 'Y' or 'N' **\n\n";
        }
    } while (charInvalid);
    
    cout << endl;
    
    // Returns Uppercased version to help simplify possible future checks
    return upperChar;
}
