#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION PromptInput
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

void PromptInput(string prompt, char promptType,
                 int &value, char &character,
                 string &phrase)
{
    // Variables
    char upperPromptType;
    
    cout << prompt;
    
    upperPromptType = toupper(promptType);
    
    switch(upperPromptType)
    {
        case 'S': getline(cin, phrase);
                  break;
        case 'I': cin >> value;
                  cin.ignore();
                  break;
        case 'C': cin.get(character);
                  cin.ignore();
                  break;
        default : cout << "** That was not a valid prompt type **";;
                  break;
    }
}
