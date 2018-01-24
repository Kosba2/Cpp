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

void GetPlayerNames(string &player1Name, string &player2Name,
                    ifstream &fin, ofstream &fout)
{
    // constant
    const int PROMPT_WIDTH = 39;
    
	fout << left;
	
	fout << setw(PROMPT_WIDTH);
	fout << "First player, please enter your name :";
	getline(fin, player1Name);
	fout << player1Name << endl;
	
	fout << setw(PROMPT_WIDTH);
	fout << "Second player, please enter your name:";
	getline(fin, player2Name);
	fout << player2Name << endl << endl;
	
	fout << right;
}
