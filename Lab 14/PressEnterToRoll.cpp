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
 *      Will have successfully delayed the program until input
 ***************************************************************************/

void PressEnterToRoll()
{
    cout << "Press <enter> to roll...\n";
    cin.ignore(10000, '\n');
}
