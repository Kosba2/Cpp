/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND TIANHAO HUANG
 * STUDENT IDs   : W7216875 & W7220990
 * LAB #16       : OOP - FLO'S PARTY PLANNER
 * CLASS	     : CS 150
 * DUE DATE	     : 4/26/2017
 ***************************************************************************/

#include "GUEST_HEADER.h"

/****************************************************************************
 * Method SetName: Class Guest
 * --------------------------------------------------------------------------
 * This method will change the guest's name to the given argument.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *  The following need a defined value passed in
 *              guestName : Guest's Name
 * 
 * POST-CONDITIONS
 *   Returns nothing.
 *   Guest of class Guest will have a name.
 ***************************************************************************/
 void Guest::SetName(string guestName)
 {
     name = guestName;
 }
 
/****************************************************************************
 * Method SetAge: Class Guest
 * --------------------------------------------------------------------------
 * This method will change the guest's age to the given argument.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *  The following need a defined value passed in
 *              guestAge : Guest's Age
 * 
 * POST-CONDITIONS
 *   Returns nothing.
 *   Guest of class Guest will have a set age.
 ***************************************************************************/
 void Guest::SetAge(int guestAge)
 {
     age = guestAge;
 }

