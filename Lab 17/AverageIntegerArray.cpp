/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND ADAM QUARANTA
 * STUDENT IDs   : W7216875 & W7241913
 * LAB #17       : ARRAY TRAIN
 * CLASS	     : CS 150
 * DUE DATE	     : 5/01/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION AverageIntegerArray
 * --------------------------------------------------------------------------
 * This function receives an Integer Array and its size, then it finds the
 * sum of its integers, and finally calculates the average of all integers
 * inside the array.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          integerArray[] : An Integer array needs to be Declared
 *          AR_SIZE        : Must contain length of Integer Array
 *
 * POST-CONDITIONS
 *      This function will return the average of all integers in the array.
 ***************************************************************************/

double AverageIntegerArray(const int INTEGER_ARRAY[], const int AR_SIZE)
{
    // Variables
    int index;      // Used for keeping track of array index
    int sum;        // Sum of Integers in the Array
    double average; // Average of Integers in the Array
    
    // Calls the Sum Function
    sum = SumIntegerArray(INTEGER_ARRAY, AR_SIZE);
    
    // Checks for Div 0
    if (AR_SIZE != 0)
    {
        average = sum / (double)AR_SIZE;
    }
    
    else
    {
        average = 0;
        cout << "Array is Empty! Attempting to Divide by Zero?!";
    } // (AR_SIZE == 0) - Trying to divide by zero
    
    return average;
}
