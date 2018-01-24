/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND TIANHAO HUANG
 * STUDENT IDs   : W7216875 & W7220990
 * LAB #16       : OOP - FLO'S PARTY PLANNER
 * CLASS	     : CS 150
 * DUE DATE	     : 4/26/2017
 ***************************************************************************/

#include "GUEST_HEADER.h"

/****************************************************************************
 * Method SetAll: Class Guest
 * --------------------------------------------------------------------------
 * This method will change all of the guest's attributes to the given 
 * arguments
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *  The following need a defined value passed in
 *              guestName : Guest's name
 *              guestAge  : Guest's age
 *              likesChoc : Guest's chocolate preference
 *              likesNuts : Guest's nuts preference
 * 
 * POST-CONDITIONS
 *   Returns nothing.
 *   Guest of class Guest will all of its attributes initialized to the
 *      provided arguments.
 ***************************************************************************/
 void Guest::SetAll(string guestName, int guestAge,
                    bool likesChoc, bool likesNuts)
 {
     SetName(guestName);
     SetAge(guestAge);
     SetChocPref(likesChoc);
     SetNutsPref(likesNuts);
 }
 

