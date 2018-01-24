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

void OutputInstructions(ofstream &fout)
{
	fout << "***********************************************************\n";
	fout << "*"<< setw(40) << "WELCOME TO HIGH ROLLER" << setw(19) << "*\n";
    fout << "*---------------------------------------------------------*\n";
	fout << "* This is a two-player game that allows each player to    *\n";
	fout << "* roll a die. The player with the highest roll wins.      *\n";
	fout << "*---------------------------------------------------------*\n";
	fout << "* Each player will first be prompted to enter their name. *\n";
	fout << "* Then each player will roll in turn (the first name      *\n";
	fout << "* entered will go first).                                 *\n";	
	fout << "***********************************************************\n";
}
