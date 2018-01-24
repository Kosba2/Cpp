#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION OutputInstructions
 * --------------------------------------------------------------------------
 * This function doesn't receive any arguments and only serves the purpose
 * of outputting a very specific instruction set. Does not return a value,
 * so much as it performs an instruction.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      Only necessity is the relevant preprocessor directives.
 *
 * POST-CONDITIONS
 *      This function will output the ruleset for the High Roller Game
 ***************************************************************************/

void OutputInstructions()
{
	cout << "***********************************************************\n";
	cout << "*"<< setw(40) << "WELCOME TO HIGH ROLLER" << setw(19) << "*\n";
    cout << "*---------------------------------------------------------*\n";
	cout << "* This is a two-player game that allows each player to    *\n";
	cout << "* roll a die. The player with the highest roll wins.      *\n";
	cout << "*---------------------------------------------------------*\n";
	cout << "* Each player will first be prompted to enter their name. *\n";
	cout << "* Then each player will roll in turn (the first name      *\n";
	cout << "* entered will go first).                                 *\n";	
	cout << "***********************************************************\n";
}
