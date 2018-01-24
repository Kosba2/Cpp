/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND TIANHAO HUANG
 * STUDENT IDs   : W7216875 & W7220990
 * LAB #16       : OOP - FLO'S PARTY PLANNER
 * CLASS	     : CS 150
 * DUE DATE	     : 4/26/2017
 ***************************************************************************/

#include "GUEST_HEADER.h"

/****************************************************************************
 * Method GetChocPref: Class Guest
 * --------------------------------------------------------------------------
 * This method will return the Guest's chocolate preference.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *   There are no pre-conditions for this method.
 * 
 * POST-CONDITIONS
 *   Returns the Guest's chocolate preference.
 ***************************************************************************/
 bool Guest::GetChocPref()const
 {
     return chocPref;
 }
 
/****************************************************************************
 * Method GetNutsPref: Class Guest
 * --------------------------------------------------------------------------
 * This method will return the Guest's nuts preference.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *   There are no pre-conditions for this method.
 * 
 * POST-CONDITIONS
 *   Returns the Guest's nuts preference.
 ***************************************************************************/
 bool Guest::GetNutsPref()const
 {
     return nutsPref;
 }
