/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND ADAM QUARANTA
 * STUDENT IDs   : W7216875 & W7241913
 * LAB #17       : ARRAY TRAIN
 * CLASS	     : CS 150
 * DUE DATE	     : 5/01/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION ArrayTrackValue
 * --------------------------------------------------------------------------
 * This function receives an Integer Array, its size and a integer value to
 * look for and count the instances of inside the array.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          INTEGER_ARRAY[] : An Integer array needs to be Declared
 *          AR_SIZE         : Must contain length of Integer Array
 *
 * POST-CONDITIONS
 *      This function will return the number of times the tracked value has
 * occured inside the given array.
 ***************************************************************************/

int ArrayTrackValue(const int INTEGER_ARRAY[], const int AR_SIZE, 
                    int trackValue)
{
    // Variables
    int index;          // Used for keeping track of array index
    int instances;      // Used for counting occurences of Tracked Value
    
    instances = 0;
    
    for (index = 0; index < AR_SIZE; index++)
    {
        if (INTEGER_ARRAY[index] == trackValue)
        {
            instances++;
        }
    }
    
    return instances;
}
