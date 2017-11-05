/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN
 * STUDENT IDs   : W7216875
 * ASSIGNMENT #7 : MILITARY ACADEMY (OOP)
 * CLASS	     : CS 150
 * DUE DATE	     : 5/03/2017
 ***************************************************************************/
 
#include "CANDIDATE_HEADER.h"

/****************************************************************************
 * Partial Constructor: Class Candidate
 * --------------------------------------------------------------------------
 * This constructor will be used as a partial blueprint for Candidate Class
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *   The following arguments must be passed to create a partial blueprint
 *                  name        : Name of each Candidate
 *                  gender      : Gender of each Candidate
 * 
 * POST-CONDITIONS
 *   This constructor does not return anything because it is a constructor
 ***************************************************************************/
 Candidate::Candidate(string name, char gender)
 {
    SetAll(name, gender);
 }
 
/****************************************************************************
 * Partial Constructor: Class Candidate
 * --------------------------------------------------------------------------
 * This constructor will be used as a Partial blueprint for Candidate Class
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *   The following arguments must be passed to create a partial blueprint
 *                  age         : Age of each Candidate
 *                  height      : Height of each Candidate
 *                  weight      : Weight of each Candidate
 * 
 * POST-CONDITIONS
 *   This constructor does not return anything because it is a constructor
 ***************************************************************************/
 Candidate::Candidate(int age, float height, int weight)
 {
    SetAll(age, height, weight);
 }
