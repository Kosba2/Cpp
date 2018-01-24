/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND ADAM QUARANTA
 * STUDENT IDs   : W7216875 & W7241913
 * LAB #17       : ARRAY TRAIN
 * CLASS	     : CS 150
 * DUE DATE	     : 5/01/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION FindStringInArray
 * --------------------------------------------------------------------------
 * This function receives a String Array, its size and a string value which
 * we are trying to find within that string
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          STRING_ARRAY[]  : A String array needs to be Declared
 *          AR_SIZE         : Must contain length of String Array
 *          findMe          : String which you are looking for inside array
 *
 * POST-CONDITIONS
 *      This function will return the index of the first instance of that 
 * string which it finds.
 ***************************************************************************/

int FindStringInArray(const string STRING_ARRAY[], const int AR_SIZE,
                      string findMe)
{
    // Variables
    int index;          // Used for keeping track of array index
    int indexFoundIn;   // Location of string you are searching for
    bool notfound;      // Boolean denoting whether string has been found
    
    index = 0;
    notfound = true;
    indexFoundIn = -1;
    
    while (notfound && index < AR_SIZE)
    {
        if (STRING_ARRAY[index] == findMe)
        {
            notfound = false;
            indexFoundIn = index;
        }
        index++;
    }
    
    return indexFoundIn;
}
