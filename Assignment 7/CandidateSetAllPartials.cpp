/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN
 * STUDENT IDs   : W7216875
 * ASSIGNMENT #7 : MILITARY ACADEMY (OOP)
 * CLASS	     : CS 150
 * DUE DATE	     : 5/03/2017
 ***************************************************************************/

#include "CANDIDATE_HEADER.h"

/****************************************************************************
 * Method SetAll: Class Candidate
 * --------------------------------------------------------------------------
 * This method will change some of the Candidate's attributes to the given 
 * arguments
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *  The following need a defined value passed in
 *              name   : Candidate's name
 *              gender : Candidate's gender
 * 
 * POST-CONDITIONS
 * Returns nothing. Candidate of class Candidate will have some of its 
 * attributes initialized to the provided arguments.
 ***************************************************************************/
 void Candidate::SetAll(string name, char gender)
 {
     SetName(name);
     SetGender(gender);
 }
 
/****************************************************************************
 * Method SetAll: Class Candidate
 * --------------------------------------------------------------------------
 * This method will change some of the Candidate's attributes to the given 
 * arguments
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *  The following need a defined value passed in
 *              age    : Candidate's age
 *              height : Candidate's height
 *              weight : Candidate's weight
 * 
 * POST-CONDITIONS
 * Returns nothing. Candidate of class Candidate will have some of its 
 * attributes initialized to the provided arguments.
 ***************************************************************************/
 void Candidate::SetAll(int age, float height, int weight)
 {
     SetAge(age);
     SetHeight(height);
     SetWeight(weight);
 }
