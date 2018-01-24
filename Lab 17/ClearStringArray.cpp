/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND ADAM QUARANTA
 * STUDENT IDs   : W7216875 & W7241913
 * LAB #17       : ARRAY TRAIN
 * CLASS	     : CS 150
 * DUE DATE	     : 5/01/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION ClearStringArray
 * --------------------------------------------------------------------------
 * This function receives a string array and its size. It then uses that
 * fills information to clear out the array of any String Value
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          stringArray[]  : A String array needs to be Declared
 *          AR_SIZE        : Must contain length of String Array
 *
 * POST-CONDITIONS
 *      This function will go through a String Array and clear out its values
 ***************************************************************************/

void ClearStringArray(string stringArray[], const int AR_SIZE)
{
    // Variables
    int index;      // Used for keeping track of array index
    
    for (index = 0; index < AR_SIZE; index++)
    {
        stringArray[index].clear();
    }
}
