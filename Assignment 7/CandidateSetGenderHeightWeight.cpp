/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN
 * STUDENT IDs   : W7216875
 * ASSIGNMENT #7 : MILITARY ACADEMY (OOP)
 * CLASS	     : CS 150
 * DUE DATE	     : 5/03/2017
 ***************************************************************************/

#include "CANDIDATE_HEADER.h"

/****************************************************************************
 * Method SetGender: Class Candidate
 * --------------------------------------------------------------------------
 * This method will change the guest's gender to the given argument.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *  The following need a defined value passed in
 *              candidGender : Candidate's gender 
 * POST-CONDITIONS
 *   Returns nothing. Candidate of class Candidate will have a gender.
 ***************************************************************************/
 void Candidate::SetGender(char candidGender)
 {
     gender = candidGender;
 }
/****************************************************************************
 * Method SetHeight: Class Candidate
 * --------------------------------------------------------------------------
 * This method will change the Candidate's height to the given argument.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *  The following need a defined value passed in
 *              candidHeight : Candidate's Height
 * POST-CONDITIONS
 *   Returns nothing. Candidate of class Candidate will have a set height.
 ***************************************************************************/
 void Candidate::SetHeight(float candidHeight)
 {
     height = candidHeight;
 }
 /****************************************************************************
 * Method SetWeight: Class Candidate
 * --------------------------------------------------------------------------
 * This method will change the Candidate's weight to the given argument.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *  The following need a defined value passed in
 *              candidWeight : Candidate's Weight
 * POST-CONDITIONS
 *   Returns nothing. Candidate of class Candidate will have a set weight.
 ***************************************************************************/
 void Candidate::SetWeight(int candidWeight)
 {
     weight = candidWeight;
 }

