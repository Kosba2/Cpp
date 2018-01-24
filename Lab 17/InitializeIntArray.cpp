/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND ADAM QUARANTA
 * STUDENT IDs   : W7216875 & W7241913
 * LAB #17       : ARRAY TRAIN
 * CLASS	     : CS 150
 * DUE DATE	     : 5/01/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION InitializeArray
 * --------------------------------------------------------------------------
 * This function receives an integer array, its size and a value, and fills
 * out the array with that value
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          integerArray[] : An Integer array needs to be Declared
 *          AR_SIZE        : Must contain length of Integer Array
 *          value          : Int Value you wish to fill Integer Array with
 *
 * POST-CONDITIONS
 *      This function will fill an array with a given value
 ***************************************************************************/

void InitializeArray(int integerArray[], const int AR_SIZE, int value)
{
    // Variables
    int index;      // Used for keeping track of array index
    
    for (index = 0; index < AR_SIZE; index++)
    {
        integerArray[index] = value;
    }
}
