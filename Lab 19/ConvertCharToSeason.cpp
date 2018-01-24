/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND ROBERT ESPOSITO
 * STUDENT IDs   : W7216875 & W7180729
 * LAB #19       : ENUMERATED TYPES
 * CLASS	     : CS 150
 * DUE DATE	     : 5/03/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION ConvertCharToSeason
 * --------------------------------------------------------------------------
 * This function takes a character parameter and finds the appropriate
 * season data type to match it and returns that Season.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          seasonChar : Character representing a Season Input
 *                                      ‘W’ for Winter
 *                                      ‘S’ for Spring
 *                                      'U' for Summer
 *                                      'F' for Fall
 * POST-CONDITIONS
 *      This function will return an appropriate Season variable
 ***************************************************************************/

Seasons ConvertCharToSeason(char seasonChar)
{
    /************************************************************************
 	 * CONSTANTS
     * ----------------------------------------------------------------------
	 * OUTPUT - USED FOR FORMATTING
	 * ----------------------------------------------------------------------
	 * TOTAL_SEASONS : Keeps count of number of seasons types for calculation
	 ***********************************************************************/
    // Constants
    const int TOTAL_SEASONS = 4;
    
    // Variables
    Seasons seasonChoice;
    
    switch (seasonChar)
    {
        case ('W'): seasonChoice = Winter;
                    break;
        case ('S'): seasonChoice = Spring;
                    break;
        case ('U'): seasonChoice = Summer;
                    break;
        case ('F'): seasonChoice = Fall;
                    break;
    }
    return seasonChoice;
}
