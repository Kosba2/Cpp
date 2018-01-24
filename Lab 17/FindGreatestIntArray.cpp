/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND ADAM QUARANTA
 * STUDENT IDs   : W7216875 & W7241913
 * LAB #17       : ARRAY TRAIN
 * CLASS	     : CS 150
 * DUE DATE	     : 5/01/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION FindGreatestIntArray
 * --------------------------------------------------------------------------
 * This function receives an Integer Array and its Size and uses that info
 * to loops through its indices to find the greatest value and return its
 * index.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          INTEGER_ARRAY[] : An Integer array needs to be Declared
 *          AR_SIZE         : Must contain length of Integer Array
 *
 * POST-CONDITIONS
 *      This function will find the index of the greatest value, or return
 *  -1 if there is no data inside the array
 ***************************************************************************/

int FindGreatestIntArray(const int INTEGER_ARRAY[], const int AR_SIZE)
{
    // Variables
    int index;          // Used for keeping track of array index
    int greatestValue;  // Greatest Value found
    int greatestIndex;  // Index of Greatest Value found
    
    greatestValue = -1;
    greatestIndex = -1;
    
    for (index = 0; index < AR_SIZE; index++)
    {
        if (INTEGER_ARRAY[index] > greatestValue)
        {
            greatestValue = INTEGER_ARRAY[index];
            greatestIndex = index;
        }
    }
    
    return greatestIndex;
}
