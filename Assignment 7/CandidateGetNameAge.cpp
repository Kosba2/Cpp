/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN
 * STUDENT IDs   : W7216875
 * ASSIGNMENT #7 : MILITARY ACADEMY (OOP)
 * CLASS	     : CS 150
 * DUE DATE	     : 5/03/2017
 ***************************************************************************/

#include "CANDIDATE_HEADER.h"

/****************************************************************************
 * Method GetName: Class Candidate
 * --------------------------------------------------------------------------
 * This method will return the Candidate's name.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *   There are no pre-conditions for this method.
 * 
 * POST-CONDITIONS
 *   Returns the Candidate's name
 ***************************************************************************/
 string Candidate::GetName()const
 {
     return name;
 }
 
/****************************************************************************
 * Method GetAge: Class Candidate
 * --------------------------------------------------------------------------
 * This method will return the Candidate's age.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *   There are no pre-conditions for this method.
 * 
 * POST-CONDITIONS
 *   Returns the Candidate's age
 ***************************************************************************/
 int Candidate::GetAge()const
 {
     return age;
 }
