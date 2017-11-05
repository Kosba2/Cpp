/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN
 * STUDENT IDs   : W7216875
 * ASSIGNMENT #7 : MILITARY ACADEMY (OOP)
 * CLASS	     : CS 150
 * DUE DATE	     : 5/03/2017
 ***************************************************************************/
 
// This file is called GUEST_HEADER.h
#ifndef CANDIDATE_HEADER_H_
#define CANDIDATE_HEADER_H_

// Preprocessor directives go here
#include <string>
using namespace std;

class Candidate
{
    public:
        Candidate ();                    // Default Constructor
        ~Candidate();                    // Destructor
        
        Candidate ( string  name,        // Full Constructor
                    int     age,
                    char    gender,
                    float   height,
                    int     weight);
                    
        Candidate ( string  name,        // Partial Constructor
                    char    gender);
                    
        Candidate ( int     age,         // Partial Constructor
                    float   height,
                    int     weight);
                    
        
        
        /** MUTATORS **/
        void   SetName  (string candidName);   // Set Candidate's name
        void   SetAge   (int    candidAge);    // Set Candidate's age (year)
        void   SetGender(char   candidGender); // Set Candidate's hender(f/m)
        void   SetHeight(float  candidHeight); // Set Candidate's height(in.)
        void   SetWeight(int    candidHeight); // Set Candidate's weight(lbs)
       
        
        void   SetAll   (string name,    // Sets all of the above attributes
                         int    age,     
                         char   gender,
                         float  height,
                         int    weight);
        
        void   SetAll   (string name,    // Overloads SetAll
                         char   gender);
        
        void   SetAll   (int   age,        // Overloads SetAll
                         float height,
                         int   weight);
                        
        /** ACCESSORS **/
        string GetName  ()const; // Gets the Candidate's name
        int    GetAge   ()const; // Gets the Candidate's age (years)
        char   GetGender()const; // Gets the Candidate's gender (f/m)
        float  GetHeight()const; // Gets the Candidate's height (inches)
        int    GetWeight()const; // Gets the Candidate's weight (lbs)
        
    private:
        string name;             // IN/OUT - Candidate's Name
        int    age;              // IN/OUT - Candidate's Age (years)
        char   gender;           // IN/OUT - Candidate's Gender (f/m)
        float  height;           // IN/OUT - Candidate's Height (inches)
        int    weight;           // IN/OUT - Candidate's Weight (lbs)
        
};





/****************************************************************************
 * Candidate Class
 *    This class represents a Candidate object. It manages 5 attributes,
 *    name, age, gender, height and weight
 ***************************************************************************/


/******************************
 ** CONSTRUCTORS & DESTRUCTOR**
 ******************************/
 
/****************************************************************************
 * Candidate ();
 *   Constructor: Initialized class attributes to default value
 *   Parameters: none
 *   Return: none   
 ***************************************************************************/
 
/****************************************************************************
 * ~Candidate ();
 *   Destructor: Does not perform any specifc function
 *   Parameters: none
 *   Return: none   
 ***************************************************************************/
 
/****************************************************************************
 * Candidate (string name, int age, char gender, int height and int weight);
 *   Destructor: Initializes all parameters to that of passed arguments
 *   Parameters: name(string)      // IN - Candidate name   for new attribute
                 age (integer)     // IN - Candidate age    for new attribute
                 gender(character) // IN - Candidate gender for new attribute
                 height(integer)   // IN - Candidate height for new attribute
                 weight(integer)   // IN - Candidate weight for new attribute
 *   Return: none   
 ***************************************************************************/
 
 
/**************
 ** MUTATORS **
 **************/

/****************************************************************************
 * void SetName (string name);
 *
 *  Mutator: This method will update the name attribute to the parameter
 *              name value
 *---------------------------------------------------------------------------
 *  Parameters: name(string)   // IN - Candidate name for a new attribute
 *---------------------------------------------------------------------------
 *  return: none
 ***************************************************************************/
 
 
 
 
/****************************************************************************
 * void SetAge (int age);
 *
 *  Mutator: This method will update the age attribute to the parameter
 *              age's value
 *---------------------------------------------------------------------------
 *  Parameters: age (integer) // IN - Candidate age for a new attribute
 *---------------------------------------------------------------------------
 *  return: none
 ***************************************************************************/
 
/****************************************************************************
 * void SetGender (char gender);
 *
 *  Mutator: This method will update the gender attribute to the parameter
 *              gender's character value
 *---------------------------------------------------------------------------
 *  Parameters: gender (character) // IN - Candidate's gender for a new
 *                                         attribute
 *---------------------------------------------------------------------------
 *  return: none
 ***************************************************************************/
 
/****************************************************************************
 * void SetHeight (int height);
 *
 *  Mutator: This method will update the height attribute to the parameter
 *              height's integer value
 *---------------------------------------------------------------------------
 *  Parameters: height (integer) // IN - Candidate's height for a new
 *                                       attribute
 *---------------------------------------------------------------------------
 *  return: none
 ***************************************************************************/
 
 /****************************************************************************
 * void SetWeight (int weight);
 *
 *  Mutator: This method will update the weight attribute to the parameter
 *              weight's integer value
 *---------------------------------------------------------------------------
 *  Parameters: weight (integer) // IN - Candidate's weight for a new
 *                                       attribute
 *---------------------------------------------------------------------------
 *  return: none
 ***************************************************************************/
 
/****************************************************************************
 * void SetAll (string name, int age, char gender, int height & int weight);
 *
 *  Mutator: This method will update all the attributes of the guest class to
 *              the parameters' values.
 *---------------------------------------------------------------------------
 *  Parameters: name   (string)    // IN - Candidate's name for new attribute
 *              age    (integer)   // IN - Candidate's age for new attribute
 *              gender (character) // IN - Candidate gender for new attribute
 *              height (integer)   // IN - Candidate height for new attribute
 *              weight (integer)   // IN - Candidate weight for new attribute
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
 * char GetGender  ()const;
 *
 *  Accessor: This method will return the gender attribute
 *---------------------------------------------------------------------------
 *  Parameters: none
 *---------------------------------------------------------------------------
 *  return: gender(character)
 ***************************************************************************/
 
/****************************************************************************
 * bool GetHeight  ()const;
 *
 *  Accessor: This method will return the height attribute
 *---------------------------------------------------------------------------
 *  Parameters: none
 *---------------------------------------------------------------------------
 *  return: height(integer)
 ***************************************************************************/
 
 /****************************************************************************
 * bool GetWeight  ()const;
 *
 *  Accessor: This method will return the weight attribute
 *---------------------------------------------------------------------------
 *  Parameters: none
 *---------------------------------------------------------------------------
 *  return: weight(integer)
 ***************************************************************************/

        
#endif  /* CANDIDATE_HEADER_H_ */

// To include this file
// #include "CANDIDATE_HEADER.h"
