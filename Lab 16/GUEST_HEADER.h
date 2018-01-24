/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND TIANHAO HUANG
 * STUDENT IDs   : W7216875 & W7220990
 * LAB #16       : OOP - FLO'S PARTY PLANNER
 * CLASS	     : CS 150
 * DUE DATE	     : 4/26/2017
 ***************************************************************************/
 
// This file is called GUEST_HEADER.h
#ifndef GUEST_HEADER_H_
#define GUEST_HEADER_H_

// Preprocessor directives go here
#include <string>
using namespace std;

class Guest
{
    public:
        Guest ();                           // Default Constructor
        ~Guest();                           // Destructor
        
        Guest (string guestName,            // Full Constructor
               int    guestAge,
               bool   likesChoc,
               bool   likesNuts);
        
        /** MUTATORS **/
        void   SetName    (string guestName); // Sets the Guest's name
        void   SetAge     (int    guestAge);  // Sets Guest's age (years)
        void   SetChocPref(bool   likesChoc); // Sets Guest Choc preference
        void   SetNutsPref(bool   likesNuts); // Sets Guest Nuts preference
        
        void   SetAll     (string guestName,  // Sets all of the above
                           int    guestAge,   // attributes at once
                           bool   likesChoc,
                           bool   likesNuts);
                        
        /** ACCESSORS **/
        string GetName           ()const;     // Gets the Guest's name
        int    GetAge            ()const;     // Gets the Guest's age (years)
        bool   GetChocPref       ()const;     // Gets Guest Choc preference
        bool   GetNutsPref       ()const;     // Gets Guest Nuts preference
        
    private:
        string name;                        // IN/OUT - Guest's Name
        int    age;                         // IN/OUT - Guest's Age (years)
        bool   chocPref;                    // IN/OUT - Guest Choc preference
        bool   nutsPref;                    // IN/OUT - Guest Nuts preference
};





/****************************************************************************
 * Guest Class
 *    This class represents a guest object. It manages 4 attributes,
 *    name, age, chocPref & nutsPref.
 ***************************************************************************/


/******************************
 ** CONSTRUCTORS & DESTRUCTOR**
 ******************************/
 
/****************************************************************************
 * Guest ();
 *   Constructor: Initialized class attributes to default value
 *   Parameters: none
 *   Return: none   
 ***************************************************************************/
 
/****************************************************************************
 * ~Guest ();
 *   Destructor: Does not perform any specifc function
 *   Parameters: none
 *   Return: none   
 ***************************************************************************/
 
/****************************************************************************
 * Guest (string guestName, int guestAge, bool likesChoc, bool likesNuts);
 *   Destructor: Initializes all parameters to that of passed arguments
 *   Parameters: guestName(string)  // IN - Guest name for a new attribute
                 guestAge (integer) // IN - Guest age for a new attribute
                 likesChoc(boolean) // IN - Guest choc pref for new attribute
                 likesNuts(boolean) // IN - Guest nuts pref for new attribute
 *   Return: none   
 ***************************************************************************/
 
 
/**************
 ** MUTATORS **
 **************/

/****************************************************************************
 * void SetName (string guestName);
 *
 *  Mutator: This method will update the name attribute to the parameter
 *              guestName value
 *---------------------------------------------------------------------------
 *  Parameters: guestName(string)   // IN - Guest name for a new attribute
 *---------------------------------------------------------------------------
 *  return: none
 ***************************************************************************/
 
 
 
 
/****************************************************************************
 * void SetAge (int guestAge);
 *
 *  Mutator: This method will update the age attribute to the parameter
 *              guestAge value
 *---------------------------------------------------------------------------
 *  Parameters: guestAge (integer) // IN - Guest age for a new attribute
 *---------------------------------------------------------------------------
 *  return: none
 ***************************************************************************/
 
/****************************************************************************
 * void SetChocPref (bool likesChoc);
 *
 *  Mutator: This method will update the chocPref attribute to the parameter
 *              likesChoc's boolean value
 *---------------------------------------------------------------------------
 *  Parameters: likesChoc (boolean) // IN - Guest's Choc Preference for a new
 *                                          attribute
 *---------------------------------------------------------------------------
 *  return: none
 ***************************************************************************/
 
/****************************************************************************
 * void SetNutsPref (bool likesNuts);
 *
 *  Mutator: This method will update the nutsPref attribute to the parameter
 *              likesNuts's boolean value
 *---------------------------------------------------------------------------
 *  Parameters: likesChoc (boolean) // IN - Guest's Nuts Preference for a new
 *                                          attribute
 *---------------------------------------------------------------------------
 *  return: none
 ***************************************************************************/
 
/****************************************************************************
 * void SetAll (string guestName, int guestAge,
                bool likesChoc, bool likesNuts);
 *
 *  Mutator: This method will update all the attributes of the guest class to
 *              the parameters' values.
 *---------------------------------------------------------------------------
 *  Parameters: guestName (string)  // IN - Guest's name for a new attribute
 *              guestAge  (integer) // IN - Guest's age for a new attribute
 *              likesChoc (boolean) // IN - Guest's chocolate preference for 
 *                                          a new attribute
 *              likesNuts (boolean) // IN - Guest's nuts preference for a new
 *                                          attribute
 *---------------------------------------------------------------------------
 *  return: none
 ***************************************************************************/

 
 
 /**************
 ** ACCESSORS **
 **************/

/****************************************************************************
 * string GetName ()const;
 *
 *  Accessor: This method will return the name attribute
 *---------------------------------------------------------------------------
 *  Parameters: none
 *---------------------------------------------------------------------------
 *  return: name(string)
 ***************************************************************************/
 
/****************************************************************************
 * int GetAge  ()const;
 *
 *  Accessor: This method will return the age attribute
 *---------------------------------------------------------------------------
 *  Parameters: none
 *---------------------------------------------------------------------------
 *  return: age(integer)
 ***************************************************************************/
 
/****************************************************************************
 * bool GetChocPref  ()const;
 *
 *  Accessor: This method will return the chocPref attribute
 *---------------------------------------------------------------------------
 *  Parameters: none
 *---------------------------------------------------------------------------
 *  return: chocPref(boolean)
 ***************************************************************************/
 
/****************************************************************************
 * bool GetNutsPref  ()const;
 *
 *  Accessor: This method will return the nutsPref attribute
 *---------------------------------------------------------------------------
 *  Parameters: none
 *---------------------------------------------------------------------------
 *  return: nutsPref(boolean)
 ***************************************************************************/

        
#endif  /* GUEST_HEADER_H_ */

// To include this file
// #include "GUEST_HEADER.h"
