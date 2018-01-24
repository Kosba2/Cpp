/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND TIANHAO HUANG
 * STUDENT IDs   : W7216875 & W7220990
 * LAB #16       : OOP - FLO'S PARTY PLANNER
 * CLASS	     : CS 150
 * DUE DATE	     : 4/26/2017
 ***************************************************************************/

#include "GUEST_HEADER.h"

/****************************************************************************
 * Method GetName: Class Guest
 * --------------------------------------------------------------------------
 * This method will return the Guest's name.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *   There are no pre-conditions for this method.
 * 
 * POST-CONDITIONS
 *   Returns the Guest's name
 ***************************************************************************/
 string Guest::GetName()const
 {
     return name;
 }
 
/****************************************************************************
 * Method GetAge: Class Guest
 * --------------------------------------------------------------------------
 * This method will return the Guest's age.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *   There are no pre-conditions for this method.
 * 
 * POST-CONDITIONS
 *   Returns the Guest's age
 ***************************************************************************/
 int Guest::GetAge()const
 {
     return age;
 }
