/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND ADAM QUARANTA
 * STUDENT IDs   : W7216875 & W7241913
 * LAB #17       : ARRAY TRAIN
 * CLASS	     : CS 150
 * DUE DATE	     : 5/01/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION OutputArray
 * --------------------------------------------------------------------------
 * This function receives an Integer Array, a String Array, the size of both
 * arrays, and a reference to the Output File Stream.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          INTEGER_ARRAY[] : An Integer array needs to be Declared
 *          STRING_ARRAY[]  : A String array needs to be Declared
 *          AR_SIZE         : Must contain length of both Arrays
 *          outFile         : File Output Stream Variable
 *
 * POST-CONDITIONS
 *      This function will output a formatted table of Names and their
 * corresponding ages.
 ***************************************************************************/

void OutputArray(const int INTEGER_ARRAY[], const string STRING_ARRAY[], 
                 const int AR_SIZE, ofstream &outFile)
{
    /************************************************************************
 	 * CONSTANTS
     * ----------------------------------------------------------------------
	 * FORMATTING - USED FOR FORMATTING VARIOUS ASPECTS OF CODE
	 * ----------------------------------------------------------------------
	 * NAME_WIDTH  : Reserved Area for possibly long Names
	 * AGE_WIDTH   : Reserved Area for possibly ancient Ages
	 ***********************************************************************/
    // Constants
    const int NAME_WIDTH = 10;
    const int AGE_WIDTH  =  4;
    
    // Variables
    int index;      // Used for keeping track of array index
    
    index = 0;
    
    outFile << left  << setw(NAME_WIDTH) << "NAME";
    outFile << right << setw(AGE_WIDTH)  << "AGE";
    outFile << "\n--------------------------\n";
    
    for (index = 0; index < AR_SIZE; index++)
    {
        outFile << left  << setw(NAME_WIDTH) << STRING_ARRAY [index];
        outFile << right << setw(AGE_WIDTH)  << INTEGER_ARRAY [index];
        outFile << endl;
    }
}
