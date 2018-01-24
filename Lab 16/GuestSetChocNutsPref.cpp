/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND TIANHAO HUANG
 * STUDENT IDs   : W7216875 & W7220990
 * LAB #16       : OOP - FLO'S PARTY PLANNER
 * CLASS	     : CS 150
 * DUE DATE	     : 4/26/2017
 ***************************************************************************/

#include "GUEST_HEADER.h"

/****************************************************************************
 * Method SetChocPref: Class Guest
 * --------------------------------------------------------------------------
 * This method will change the guest's chocolate preference to the given
 * argument.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *  The following need a defined value passed in
 *              likesChoc : Guest's chocolate preference
 * 
 * POST-CONDITIONS
 *   Returns nothing.
 *   Guest of class Guest will have a chocolate preference
 ***************************************************************************/
 void Guest::SetChocPref(bool likesChoc)
 {
     chocPref = likesChoc;
 }
 
/****************************************************************************
 * Method SetNutsPref: Class Guest
 * --------------------------------------------------------------------------
 * This method will change the guest's nuts preference to the given argument.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *  The following need a defined value passed in
 *              likesNuts : Guest's nuts preference
 * 
 * POST-CONDITIONS
 *   Returns nothing.
 *   Guest of class Guest will have a nuts preference
 ***************************************************************************/
 void Guest::SetNutsPref(bool likesNuts)
 {
     nutsPref = likesNuts;
 }

