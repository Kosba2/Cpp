/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN
 * STUDENT IDs   : W7216875
 * ASSIGNMENT #7 : MILITARY ACADEMY (OOP)
 * CLASS	     : CS 150
 * DUE DATE	     : 5/03/2017
 ***************************************************************************/

#include "CANDIDATE_HEADER.h"

/****************************************************************************
 * Method GetGender: Class Candidate
 * --------------------------------------------------------------------------
 * This method will return the Candidate's gender.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *   There are no pre-conditions for this method.
 * 
 * POST-CONDITIONS
 *   Returns the Candidate's gender
 ***************************************************************************/
 char Candidate::GetGender()const
 {
     return gender;
 }
/****************************************************************************
 * Method GetHeight: Class Candidate
 * --------------------------------------------------------------------------
 * This method will return the Candidate's height.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *   There are no pre-conditions for this method.
 * 
 * POST-CONDITIONS
 *   Returns the Candidate's height
 ***************************************************************************/
 float Candidate::GetHeight()const
 {
     return height;
 }
/****************************************************************************
 * Method GetWeight: Class Candidate
 * --------------------------------------------------------------------------
 * This method will return the Candidate's weight.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *   There are no pre-conditions for this method.
 * 
 * POST-CONDITIONS
 *   Returns the Candidate's weight
 ***************************************************************************/
 int Candidate::GetWeight()const
 {
     return weight;
 }
