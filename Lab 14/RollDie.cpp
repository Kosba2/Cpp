#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION RollDie
 * --------------------------------------------------------------------------
 * Uses a random (time-based) seed in the main function to created a random
 * number between 1 and 6.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          srand(time(NULL))
 *
 * POST-CONDITIONS
 *      Returns a random value between 1 and 6.
 ***************************************************************************/

int RollDie()
{
    // Variables
    int die;
    
    die = (rand() % 6) + 1;
    
    return die;
}
