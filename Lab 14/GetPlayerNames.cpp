#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION GetPlayerNames
 * --------------------------------------------------------------------------
 * This function receives two names pass-by-reference as empty variables
 * which will be filled following a duo of prompts that overwrite the value
 * of those empty variables. Does not return a value.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters are passed by reference, thereby don't need
 *  values passed into them, the argument just has to be a variable.
 *
 * POST-CONDITIONS
 *      This function will prompt for the user's name, and overwrite the
 *  variables that were passed by reference as an argument.
 *          player1Name : Name of first player
 *          player2Name : Name of second player
 ***************************************************************************/

void GetPlayerNames(string &player1Name, string &player2Name)
{
    // Constant
    const int PROMPT_WIDTH = 39;
    
	cout << left;
	
	cout << setw(PROMPT_WIDTH);
	cout << "First player, please enter your name :";
	getline(cin, player1Name);
	
	cout << setw(PROMPT_WIDTH);
	cout << "Second player, please enter your name:";
	getline(cin, player2Name);
	cout << endl;
	
	cout << right;
}
