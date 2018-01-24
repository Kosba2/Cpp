/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND TIANHAO HUANG
 * STUDENT IDs   : W7216875 & W7220990
 * LAB #16       : OOP - FLO'S PARTY PLANNER
 * CLASS	     : CS 150
 * DUE DATE	     : 4/26/2017
 ***************************************************************************/
 
#include "GUEST_HEADER.h"

/****************************************************************************
 * Default Constructor: Class Guest
 * --------------------------------------------------------------------------
 * This constructor will be used as a default blueprint for the Guest Class
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *   There are no pre-conditions for this constructor.
 * 
 * POST-CONDITIONS
 *   This constructor does not return anything because it is a constructor
 ***************************************************************************/
 Guest::Guest()
 {
    name.clear();
    age      = 0;
    chocPref = false;
    nutsPref = false;
 }
 
/****************************************************************************
 * Full Constructor: Class Guest
 * --------------------------------------------------------------------------
 * This constructor will be used as a full blueprint for the Guest Class
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *   The following arguments must be passed to create a full blueprint
 *                  name        : Name of each Guest
 *                  age         : Age of each Guest
 *                  chocPref    : Chocolate Preference of each Guest
 *                  nutsPref    : Nuts Preference of each Guest
 * 
 * POST-CONDITIONS
 *   This constructor does not return anything because it is a constructor
 ***************************************************************************/
 Guest::Guest(string guestName, int guestAge, bool likesChoc, bool likesNuts)
 {
    SetAll(guestName, guestAge, likesChoc, likesNuts);
 }
