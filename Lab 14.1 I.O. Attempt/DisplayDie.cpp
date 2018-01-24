#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION DisplayDie
 * --------------------------------------------------------------------------
 * This function expects to receive a randomized number between 1 and 6. It
 * will then use that number to determine which specific ASCII art to print
 * out/display.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      Must have created a randomized seed, and used it to create a random
 *  number.
 *          dieRandom : A random number between 1 and 6.
 *
 * POST-CONDITIONS
 *      This function will output the correct ASCII art based on a randomized
 *  number.
 ***************************************************************************/

void DisplayDie(int dieRandom, ofstream &fout)
{
    const string DIE_ONE      = "-----------\n"
                                "+         +\n"
                                "+         +\n"
                                "+    0    +\n"
                                "+         +\n"
                                "+         +\n"
                                "-----------\n";
                            
    const string DIE_TWO      = "-----------\n"
                                "+         +\n"
                                "+  0      +\n"
                                "+         +\n"
                                "+      0  +\n"
                                "+         +\n"
                                "-----------\n";
                            
    const string DIE_THREE    = "-----------\n"
                                "+ 0       +\n"
                                "+         +\n"
                                "+    0    +\n"
                                "+         +\n"
                                "+       0 +\n"
                                "-----------\n";
                            
    const string DIE_FOUR     = "-----------\n"
                                "+  0   0  +\n"
                                "+         +\n"
                                "+         +\n"
                                "+         +\n"
                                "+  0   0  +\n"
                                "-----------\n";
                            
    const string DIE_FIVE     = "-----------\n"
                                "+  0   0  +\n"
                                "+         +\n"
                                "+    0    +\n"
                                "+         +\n"
                                "+  0   0  +\n"
                                "-----------\n";
                            
    const string DIE_SIX      = "-----------\n"
                                "+  0   0  +\n"
                                "+         +\n"
                                "+  0   0  +\n"
                                "+         +\n"
                                "+  0   0  +\n"
                                "-----------\n";
    
    // Determines which ASCII Art to output
    switch(dieRandom)
    {
        case 1: fout << DIE_ONE;
                    break;
        case 2: fout << DIE_TWO;
                    break;
        case 3: fout << DIE_THREE;
                    break;
        case 4: fout << DIE_FOUR;
                    break;
        case 5: fout << DIE_FIVE;
                    break;
        case 6: fout << DIE_SIX;
                    break;
        default: fout << "***** ERROR - INVALID DIE VALUE *****\n";
    }
    
    fout << endl;
}
