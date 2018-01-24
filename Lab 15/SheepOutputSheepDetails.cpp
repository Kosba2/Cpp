#include "SHEEP_HEADER.h"
#include <iostream>
#include <iomanip>

/****************************************************************************
 * Method OutputSheepDetails: Class Sheep
 * --------------------------------------------------------------------------
 * This method will print out all attributes of a sheep
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *  There are no pre-conditions for this method other than its characteristic
 *  variables be defined for the purpose of display.
 * 
 * POST-CONDITIONS
 *   Returns nothing.
 *   Will have output a formatted summary of a sheep.
 ***************************************************************************/
void Sheep::OutputSheepDetails()const
{
    // Constants
    const int PROMPT_WIDTH = 18;
    
    // Variables
    string yesNo;
    
    if (bleating)
    {
        yesNo = "Yes";
    }
    else
    {
        yesNo = "No";
    }
    
    cout << left;
    cout << "SHEEP SUMMARY" << endl;
    cout << "--------------------------\n";
    cout << setw(PROMPT_WIDTH) << "Sheep's Name    :" << name     << endl;
    cout << setw(PROMPT_WIDTH) << "Age (years)     :" << age      << endl;
    cout << setw(PROMPT_WIDTH) << "Height (in.)    :" << height   << endl;
    cout << setw(PROMPT_WIDTH) << "Weight (lbs)    :" << weight   << endl;
    cout << setw(PROMPT_WIDTH) << "Is it bleating?  " << yesNo    << endl;
    cout << "--------------------------\n";
    cout << endl << endl;
    cout << right;
}
