/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND ROBERT ESPOSITO
 * STUDENT IDs   : W7216875 & W7180729
 * LAB #19       : ENUMERATED TYPES
 * CLASS	     : CS 150
 * DUE DATE	     : 5/03/2017
 ***************************************************************************/
#include "HEADER_FILE.h"
/****************************************************************************
 * FUNCTION ConvertSeasonToString
 * --------------------------------------------------------------------------
 * This function takes a Season data type and returns the string version of
 * that season
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          seasonChoice : Season representing a Season
 *                                      Winter for string "winter"
 *                                      Spring for string "spring"
 *                                      Summer for string "summer"
 *                                      Fall   for string "fall"
 * POST-CONDITIONS
 *      This function will return an appropriate String variable
 ***************************************************************************/
string ConvertSeasonToString(Seasons seasonChoice)
{
    /************************************************************************
 	 * CONSTANTS
     * ----------------------------------------------------------------------
	 * OUTPUT - USED FOR PROCESSING
	 * ----------------------------------------------------------------------
	 * TOTAL_SEASONS : Keeps count of number of seasons types for calculation
	 * SEASONS[]     : An array of strings parallel in value to enum Seasons
	 ***********************************************************************/
    // Constants
    const int TOTAL_SEASONS = 4;            // Hypothetically useful
    const string SEASONS[] = {"winter",
                              "spring",
                              "summer",
                              "fall"  };
    // Variables
    string seasonString;
    switch (seasonChoice)
    {
        case (Winter): seasonString = SEASONS[Winter];
                       break;
        case (Spring): seasonString = SEASONS[Spring];
                       break;
        case (Summer): seasonString = SEASONS[Summer];
                       break;
        case (Fall)  : seasonString = SEASONS[Fall];
                       break;
    }
    return seasonString;
}
