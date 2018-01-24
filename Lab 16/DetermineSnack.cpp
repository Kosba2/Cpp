/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND TIANHAO HUANG
 * STUDENT IDs   : W7216875 & W7220990
 * LAB #16       : OOP - FLO'S PARTY PLANNER
 * CLASS	     : CS 150
 * DUE DATE	     : 4/26/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION DetermineSnack
 * --------------------------------------------------------------------------
 * This function receives a Guest Object and takes from them their chocolate
 * and nuts preferences and uses this to determine which snack they will
 * receive
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          hungryGuest : Guest with food preference attributes
 *
 * POST-CONDITIONS
 *      This function will return an acceptable snack
 ***************************************************************************/
string DetermineSnack(Guest hungryGuest)
{
    /************************************************************************
 	 * CONSTANTS
     * ----------------------------------------------------------------------
	 * OUTPUT - USED FOR OUTPUTTING CORRECT SNACK
	 * ----------------------------------------------------------------------
	 * SKITTLES        : String for outputting Skittles.
	 * M_N_M           : String for outputting M&M's.
	 * PEANUT_M_N_M    : String for outputting Peanut M&M's.
     * ----------------------------------------------------------------------
	 ***********************************************************************/
    
    // Constants
    const string SKITTLES     = "Skittles";
    const string M_N_M        = "M & M's";
    const string PEANUT_M_N_M = "Peanut M & M's";
    
    // Variables
    bool likesChocolate;  // IN  - Guest's chocolate preference
    bool likesNuts;       // IN  - Guest's nuts preference
    string snack;         // OUT - The snack the guest will receive
    
    // Stores whether guests like chocolate and nuts
    likesChocolate = hungryGuest.GetChocPref();
    likesNuts = hungryGuest.GetNutsPref();
    
    
    
    
    // Uses guests' preferences to determine their snack
    if(likesChocolate)
    {
        if(likesNuts)
        {
            snack = PEANUT_M_N_M;
        } // (likesNuts)
        
        else
        {
            snack = M_N_M;
        } // (!likesNuts)
        
    } // (likesChocolate)
    
    else
    {
        snack = SKITTLES;
    } // (!likesChocolate)
    
    return snack;
}
