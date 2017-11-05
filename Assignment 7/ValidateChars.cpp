/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN
 * STUDENT IDs   : W7216875
 * ASSIGNMENT #7 : MILITARY ACADEMY (OOP)
 * CLASS	     : CS 150
 * DUE DATE	     : 5/03/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION ValidateChars
 * --------------------------------------------------------------------------
 * This function receives a binary prompt and receives one of two characters
 * back.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          prompt     : Prompt for the User
 *          adj        : Adjust value for formatting Prompt
 *          firstChar  : First Valid Character
 *          secondChar : Second Valid Character
 *
 * POST-CONDITIONS
 *      This function will return a validated character
 ***************************************************************************/

char ValidateChars(string prompt, int adj, char firstChar, char secondChar)
{
    // Variables
    char validChar;   // Input character to be returned
    bool charInvalid; // Boolean for error checking
    
    char upperFirst;  // Uppercase first valid char
    char upperSecond; // Uppercase second valid char
    
    upperFirst = toupper(firstChar);
    upperSecond = toupper(secondChar);
    
    do
    {   
        cout << left;
        cout << setw(adj) << prompt;
        cin.get(validChar);
        cin.ignore();
        cout << right;
        
        validChar = toupper(validChar);
        
        //charInvalid is T if it is not one of the valid chars
        charInvalid = (validChar != upperFirst) &&
                      (validChar != upperSecond);
        
        if(charInvalid)
        {
           cout << "\n** INVALID INPUT - Please Input " << firstChar
                << " or " << secondChar << ". **\n\n";
        }
    } while(charInvalid);
    
    return validChar;   
}
