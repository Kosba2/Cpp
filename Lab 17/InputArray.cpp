/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND ADAM QUARANTA
 * STUDENT IDs   : W7216875 & W7241913
 * LAB #17       : ARRAY TRAIN
 * CLASS	     : CS 150
 * DUE DATE	     : 5/01/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION InputArray
 * --------------------------------------------------------------------------
 * This function receives an Integer Array and a String Array, as well as
 * their lengths and a reference to the File Input Stream, and uses that to
 * read in the values for each array from file.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          integerArray[] : An Integer array needs to be Declared
 *          stringArray[]  : A String array needs to be Declared
 *          AR_SIZE        : Must contain length of both Arrays
 *          inFile         : File Input Stream Variable
 *
 * POST-CONDITIONS
 *      This function will read into the array a list of names and ages.
 ***************************************************************************/

void InputArray(int integerArray[], string stringArray[], const int AR_SIZE,
                ifstream &inFile)
{
    // Variables
    int index;      // Used for keeping track of array index
    
    index = 0;
    
    while (!(inFile.eof()) && index < AR_SIZE)
    {
        inFile >> stringArray  [index];
        inFile >> integerArray [index];
        inFile.ignore();
        index++;
    }
}
