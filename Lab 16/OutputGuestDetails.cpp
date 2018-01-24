/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND TIANHAO HUANG
 * STUDENT IDs   : W7216875 & W7220990
 * LAB #16       : OOP - FLO'S PARTY PLANNER
 * CLASS	     : CS 150
 * DUE DATE	     : 4/26/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION OutputGuestDetails
 * --------------------------------------------------------------------------
 * This function receives a guest name, their food and drink preferences and
 * uses this information to output a formatted summary of what they will 
 * receive.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          guestName : Name of the guest
 *          food      : Food preference of the guest
 *          drink     : Drink preference of the guest
 *
 * POST-CONDITIONS
 *      This function will output a summary of the guests' meal plan
 ***************************************************************************/
void OutputGuestDetails(string guestName, string food, string drink)
{
    /************************************************************************
 	 * CONSTANTS
     * ----------------------------------------------------------------------
	 * OUTPUT - USED FOR OUTPUTTING
	 * ----------------------------------------------------------------------
	 * OUTSTRING : String for beginning output for guest
     * ----------------------------------------------------------------------
	 ***********************************************************************/
    
    // Constants
    const string OUTSTRING = "You should serve ";
    
    // Output
    cout << OUTSTRING << guestName << " " << food << " & " << drink << ".";
    cout << endl << endl;
}
