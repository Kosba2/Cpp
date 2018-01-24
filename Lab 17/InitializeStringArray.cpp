/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND ADAM QUARANTA
 * STUDENT IDs   : W7216875 & W72
 * LAB #17       : ARRAY TRAIN
 * CLASS	     : CS 150
 * DUE DATE	     : 5/01/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION InitializeArray
 * --------------------------------------------------------------------------
 * This function receives an assignment name, type & number then outputs the
 * appropriate header - returns nothing.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          names : Names of Student or Students
 *          asName: Assignment Name
 *          asNum : Assignment Number
 *          asType: Assignment Type ==> THIS SHOULD CONTAIN:
 *                                      ‘L’ for Labs
 *                                      ‘A’ for Assignments
 *
 * POST-CONDITIONS
 *      This function will output the class heading.
 ***************************************************************************/

void InitializeArray(string stringArray[], const int AR_SIZE, string value)
{
    // Variables
    int index;      // Used for keeping track of array index
    
    for (index = 0; index < AR_SIZE; index++)
    {
        stringArray[index] = value;
    }
}
