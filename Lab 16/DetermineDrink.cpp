/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND TIANHAO HUANG
 * STUDENT IDs   : W7216875 & W7220990
 * LAB #16       : OOP - FLO'S PARTY PLANNER
 * CLASS	     : CS 150
 * DUE DATE	     : 4/26/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION DetermineDrink
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
string DetermineDrink(Guest thirstyGuest)
{
    /************************************************************************
 	 * CONSTANTS
     * ----------------------------------------------------------------------
	 * OUTPUT - USED FOR OUTPUTTING CORRECT DRINK.
	 * ----------------------------------------------------------------------
	 * JUICE       : String for outputting juice.
	 * SODA        : String for outputting soda.
	 * WINE        : String for outputting wine.
	 *
	 * BARRIER1    : First barrier value dividing Juice and Soda
	 * BARRIER2    : Second barrier value dividing Soda and Wine
     * ----------------------------------------------------------------------
	 ***********************************************************************/
    
    // Constants
    const string JUICE = "Juice";
    const string SODA  = "Soda";
    const string WINE  = "Wine";
    
    const int BARRIER1 = 5;
    const int BARRIER2 = 20;
    
    // Variables
    int guestAge;        // IN  - Guest's Age
    string drink;        // OUT - The beverage the guest will receive
    
    
    
    // Stores guest's age
    guestAge = thirstyGuest.GetAge();
    
    // Compares guest's age against 2 barrier values to determine their drink
    if(guestAge > BARRIER1)
    {
        if(guestAge > BARRIER2)
        {
            drink = WINE;
        } // (guestAge > BARRIER2
        
        else
        {
            drink = SODA;
        } // (guestAge <= BARRIER2)
        
    } // (guestAge > BARRIER1)
    
    else
    {
        drink = JUICE;
    } // (guestAge <= BARRIER1)
    
    return drink;
}
