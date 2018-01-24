/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND ROBERT ESPOSITO
 * STUDENT IDs   : W7216875 & W7180729
 * LAB #19       : ENUMERATED TYPES
 * CLASS	     : CS 150
 * DUE DATE	     : 5/03/2017
 ***************************************************************************/
#include "HEADER_FILE.h"
/****************************************************************************
 * FUNCTION ConvertSeasonToFruit
 * --------------------------------------------------------------------------
 * This function takes a Season data type and returns the string version of
 * that season
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          seasonChoice : Season representing a Season
 *                                      Winter for string "Winter"
 *                                      Spring for string "Spring"
 *                                      Summer for string "Summer"
 *                                      Fall   for string "Fall"
 * POST-CONDITIONS
 *      This function will return an appropriate String variable
 ***************************************************************************/
string ConvertSeasonToFruit(Seasons seasonChoice)
{
    /************************************************************************
 	 * CONSTANTS
     * ----------------------------------------------------------------------
	 * OUTPUT - USED FOR OUTPUT
	 * ----------------------------------------------------------------------
	 * TOTAL_SEASONS : Keeps count of number of seasons types for calculation
	 * FRUITS[]      : An array of fruit strings parallel to Seasons
	 ***********************************************************************/
    // Constants
    const int TOTAL_SEASONS = 4;            // Hypothetically useful
    const string FRUITS[] = {"Kishu Mini Mandarin",
                             "Blood Orange",
                             "Lane Navel Orange",
                             "Star Ruby Red Grapefruit"};
    // Variables
    string fruitString;
    switch (seasonChoice)
    {
        case (Winter): fruitString = FRUITS[Winter];
                       break;
        case (Spring): fruitString = FRUITS[Spring];
                       break;
        case (Summer): fruitString = FRUITS[Summer];
                       break;
        case (Fall)  : fruitString = FRUITS[Fall];
                       break;
    }
    return fruitString;
}
