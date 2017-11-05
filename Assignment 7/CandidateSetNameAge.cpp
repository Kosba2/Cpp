/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN
 * STUDENT IDs   : W7216875
 * ASSIGNMENT #7 : MILITARY ACADEMY (OOP)
 * CLASS	     : CS 150
 * DUE DATE	     : 5/03/2017
 ***************************************************************************/

#include "CANDIDATE_HEADER.h"

/****************************************************************************
 * Method SetName: Class Candidate
 * --------------------------------------------------------------------------
 * This method will change the guest's name to the given argument.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *  The following need a defined value passed in
 *              candidName : Candidate's Name
 * 
 * POST-CONDITIONS
 *   Returns nothing.
 *   Candidate of class Candidate will have a name.
 ***************************************************************************/
 void Candidate::SetName(string candidName)
 {
     name = candidName;
 }
 
/****************************************************************************
 * Method SetAge: Class Candidate
 * --------------------------------------------------------------------------
 * This method will change the Candidate's age to the given argument.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *  The following need a defined value passed in
 *              candidAge : Candidate's Age
 * 
 * POST-CONDITIONS
 *   Returns nothing.
 *   Candidate of class Candidate will have a set age.
 ***************************************************************************/
 void Candidate::SetAge(int candidAge)
 {
     age = candidAge;
 }

