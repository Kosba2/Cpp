/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN
 * STUDENT IDs   : W7216875
 * ASSIGNMENT #7 : MILITARY ACADEMY (OOP)
 * CLASS	     : CS 150
 * DUE DATE	     : 5/03/2017
 ***************************************************************************/
 
#include "CANDIDATE_HEADER.h"

/****************************************************************************
 * Default Constructor: Class Candidate
 * --------------------------------------------------------------------------
 * This constructor will be used as a default blueprint for Candidate Class
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *   There are no pre-conditions for this constructor.
 * 
 * POST-CONDITIONS
 *   This constructor does not return anything because it is a constructor
 ***************************************************************************/
 Candidate::Candidate()
 {
    name.clear();
    age      = 0;
    gender   = 0;
    height   = 0;
    weight   = 0;
 }
 
/****************************************************************************
 * Full Constructor: Class Candidate
 * --------------------------------------------------------------------------
 * This constructor will be used as a full blueprint for the Candidate Class
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *   The following arguments must be passed to create a full blueprint
 *                  name        : Name of each Candidate
 *                  age         : Age of each Candidate
 *                  gender      : Gender of each Candidate
 *                  height      : Height of each Candidate
 *                  weight      : Weight of each Candidate
 * 
 * POST-CONDITIONS
 *   This constructor does not return anything because it is a constructor
 ***************************************************************************/
 Candidate::Candidate(string name, int age, char gender, 
                      float height, int weight)
 {
    SetAll(name, age, gender, height, weight);
 }
