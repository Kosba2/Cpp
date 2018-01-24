#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION PressEnterToRoll
 * --------------------------------------------------------------------------
 * This function's only purpose is to delay the program with a prompt for an
 * <enter> input
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No necessary conditions must be met prior.
 *
 * POST-CONDITIONS
 *      Will have the delayed the program from proceeding prematurely.
 ***************************************************************************/

void PressEnterToRoll(ifstream &fin, ofstream &fout)
{
    fout << "Press <enter> to roll...\n";
    fin.ignore(10000, '\n');
    fout << endl;
}
