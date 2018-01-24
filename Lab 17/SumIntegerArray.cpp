/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND ADAM QUARANTA
 * STUDENT IDs   : W7216875 & W7241913
 * LAB #17       : ARRAY TRAIN
 * CLASS	     : CS 150
 * DUE DATE	     : 5/01/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION SumIntegerArray
 * --------------------------------------------------------------------------
 * This function receives an Integer Array and its size, then goes through
 * the array summing up all its values together.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          INTEGER_ARRAY[] : An Integer array needs to be Declared
 *          AR_SIZE         : Must contain length of Integer Array
 *
 * POST-CONDITIONS
 *      This function will return the sum of all integers in the array
 ***************************************************************************/

int SumIntegerArray(const int INTEGER_ARRAY[], const int AR_SIZE)
{
    // Variables
    int index;      // Used for keeping track of array index
    int sum;        // Sum of Integers in Array
    
    sum = 0;
    
    for (index = 0; index < AR_SIZE; index++)
    {
        sum += INTEGER_ARRAY[index];
    }
    
    return sum;
}
