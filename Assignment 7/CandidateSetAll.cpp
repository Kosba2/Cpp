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
 * This method will change all of the Candidate's attributes to the given 
 * arguments
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *  The following need a defined value passed in
 *              name   : Candidate's name
 *              age    : Candidate's age
 *              gender : Candidate's gender
 *              height : Candidate's height
 *              weight : Candidate's weight
 * 
 * POST-CONDITIONS
 * Returns nothing. Candidate of class Candidate will have all of its 
 * attributes initialized to the provided arguments.
 ***************************************************************************/
 void Candidate::SetAll(string name, int age, char gender,
                        float height, int weight)
 {
     SetName(name);
     SetAge(age);
     SetGender(gender);
     SetHeight(height);
     SetWeight(weight);
 }
