/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND ROBERT ESPOSITO
 * STUDENT IDs   : W7216875 & W7180729
 * LAB #19       : ENUMERATED TYPES
 * CLASS	     : CS 150
 * DUE DATE	     : 5/03/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION GetSeason
 * --------------------------------------------------------------------------
 * This function prints out a predefined menu of Seasons and prompts for
 * user input, with error checking of their choice of season or exit
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      No Parameters need to be defined prior to calling this.
 *
 * POST-CONDITIONS
 *      This function will output a menu and error check choice
 ***************************************************************************/

char GetSeason()
{
    /************************************************************************
 	 * CONSTANTS
     * ----------------------------------------------------------------------
	 * OUTPUT - USED FOR FORMATTING
	 * ----------------------------------------------------------------------
	 * STAR_DIVIDER : Preset of a divider made out of asterisks.
	 ***********************************************************************/
    // Constants
    const string STAR_DIVIDER = "********************";
    
    // Variables
    char seasonChar;
    bool invalidChar;
    
    do
    {
        // Displays Menu and Prompts for Choice
        cout << endl;
        cout << STAR_DIVIDER << endl;
        cout << setw(17) << "FRUIT SELECTOR" << endl;
        cout << STAR_DIVIDER << endl;
        cout << "(W) Winter" << endl;
        cout << "(S) Spring" << endl;
        cout << "(U) Summer" << endl;
        cout << "(F) Fall"   << endl;
        cout << "(X) Exit"   << endl;
        cout << "What season is it? ";
        
        cin.get(seasonChar);
        cin.ignore();
        seasonChar = toupper(seasonChar);
        
        
        
        invalidChar = (seasonChar != 'W') &&
                      (seasonChar != 'S') &&
                      (seasonChar != 'U') &&
                      (seasonChar != 'F') &&
                      (seasonChar != 'X');
        
        if (invalidChar)
        {
            cout << "\n** INVALID INPUT - Please input a "
                 << "W, S, U, F or X **";
        }
        cout << endl;
        
    } while (invalidChar);
    
    return seasonChar;
}
