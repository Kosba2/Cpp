/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN
 * STUDENT IDs   : W7216875
 * ASSIGNMENT #7 : MILITARY ACADEMY (OOP)
 * CLASS	     : CS 150
 * DUE DATE	     : 5/03/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION ValidateInt
 * --------------------------------------------------------------------------
 * This function receives a prompt for a value, a max, a min, and ensures
 * that the user inputs a value between the max and min.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          prompt     : Prompt for the User
 *          adj        : Adjust value for formatting Prompt
 *          minVal     : Minimum Value
 *          maxVal     : Maximum Value
 *
 * POST-CONDITIONS
 *      This function will return a validated number
 ***************************************************************************/

int ValidateInt(string prompt, int adj, int minVal, int maxVal)
{
    // Variables
    bool valInvalid;
    int  inputValue;
    
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
           cout << "\n** INVALID INPUT - Please Input a value between " 
                << minVal << " and " << maxVal << ". **\n\n";
        }
    } while(valInvalid);
    
    return inputValue;   
}
