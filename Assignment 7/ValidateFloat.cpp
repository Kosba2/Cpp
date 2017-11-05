/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN
 * STUDENT IDs   : W7216875
 * ASSIGNMENT #7 : MILITARY ACADEMY (OOP)
 * CLASS	     : CS 150
 * DUE DATE	     : 5/03/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION ValidateFloat
 * --------------------------------------------------------------------------
 * This function receives a prompt for a float, a max, a min, and ensures
 * that the user inputs a float between the max and min.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          prompt     : Prompt for the User
 *          adj        : Adjust value for formatting Prompt
 *          minVal     : Minimum float Value
 *          maxVal     : Maximum float Value
 *
 * POST-CONDITIONS
 *      This function will return a validated float
 ***************************************************************************/

float ValidateFloat(string prompt, int adj, float minVal, float maxVal)
{
    // Variables
    bool  valInvalid;
    float inputValue;
    
    do
    {   
        cout << left;
        cout << setw(adj) << prompt;
        cin  >> inputValue;
        cin.ignore();
        cout << right;
        
        //valInvalid is T if it is not inside the interval
        valInvalid = (inputValue < minVal) ||
                     (inputValue > maxVal);
        
        if(valInvalid)
        {
           cout << "\n** INVALID INPUT - Please Input a Float between " 
                << minVal << " and " << maxVal << ". **\n\n";
        }
    } while(valInvalid);
    
    return inputValue;   
}
