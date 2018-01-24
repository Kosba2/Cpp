// This file is called SHEEP_HEADER.h
#ifndef SHEEP_HEADER_H_
#define SHEEP_HEADER_H_

// Preprocessor directives go here
#include <string>
using namespace std;

class Sheep
{
    public:
        Sheep ();                           // Constructor
        ~Sheep();                           // Destructor
        
        /** MUTATORS **/
        void   SetName  (string sheepName); // Sets the sheep's name
        void   SetAge   (int sheepAge);     // Sets the sheep's age (years)
        void   SetHeight(int weight);       // Sets the sheep's height (feet)
        void   SetWeight(int height);       // Sets the sheep's weight (lbs)
        void   SetBleat (bool bleating);    // Sets the sheep's bleating
                                            // True if bleating, False if not

        /** ACCESSORS **/
        string GetName  ()const;            // Gets the sheep's name
        int    GetAge   ()const;            // Gets the sheep's age (years)
        int    GetHeight()const;            // Gets the sheep's height (feet)
        int    GetWeight()const;            // Gets the sheep's weight (lbs)
        bool   GetBleat ()const;            // Gets the sheep's bleating
        void   OutputSheepDetails()const;   // Outputs all relevant info
        
    private:
        string name;                        // IN/OUT - Sheep's Name
        int    age;                         // IN/OUT - Sheep's Age (years)
        int    height;                      // IN/OUT - Sheep's Height (feet)
        int    weight;                      // IN/OUT - Sheep's Weight (lbs)
        bool   bleating;                    // IN/OUT - Sheep's Bleating
                                                     // True if Bleating
                                                     // False if not Bleating
        
};


/****************************************************************************
 * Sheep Class
 *    This class represents a sheep object. It manages 5 attributes,
 *    name, age, height, weight & bleat.
 ***************************************************************************/


/******************************
 ** CONSTRUCTOR & DESTRUCTOR **
 ******************************/
 
/****************************************************************************
 * Sheep ();
 *   Constructor: Initialized class attributes
 *   Parameters: none
 *   Return: none   
 ***************************************************************************/
 
/****************************************************************************
 * ~Sheep ();
 *   Destructor: Does not perform any specifc function
 *   Parameters: none
 *   Return: none   
 ***************************************************************************/
 
 
/**************
 ** MUTATORS **
 **************/

/****************************************************************************
 * void SetName (string sheepName);
 *
 *  Mutator: This method will update the name attribute to the parameter
 *              sheepName value
 *---------------------------------------------------------------------------
 *  Parameters: sheepName(string)   // IN - Sheep name for a new attribute
 *---------------------------------------------------------------------------
 *  return: none
 ***************************************************************************/
 
/****************************************************************************
 * void SetAge (int sheepAge);
 *
 *  Mutator: This method will update the age attribute to the parameter
 *              sheepAge value
 *---------------------------------------------------------------------------
 *  Parameters: sheepAge (integer) // IN - Sheep age for a new attribute
 *---------------------------------------------------------------------------
 *  return: none
 ***************************************************************************/

/****************************************************************************
 * void SetHeight (int sheepHeight);
 *
 *  Mutator: This method will update the height attribute to the parameter
 *              sheepHeight value
 *---------------------------------------------------------------------------
 *  Parameters: sheepHeight(integer) // IN - Sheep height for a new attribute
 *---------------------------------------------------------------------------
 *  return: none
 ***************************************************************************/
 
/****************************************************************************
 * void SetWeight (int sheepWeight);
 *
 *  Mutator: This method will update the weight attribute to the parameter
 *              sheepWeight value
 *---------------------------------------------------------------------------
 *  Parameters: sheepWeight(integer) // IN - Sheep weight for a new attribute
 *---------------------------------------------------------------------------
 *  return: none
 ***************************************************************************/
 
/****************************************************************************
 * void SetBleat (bool sheepBleating);
 *
 *  Mutator: This method will update the bleat attribute to the parameter
 *              sheepBleating value
 *---------------------------------------------------------------------------
 *  Parameters: sheepBleating(boolean)  // IN - Sheep bleat status attribute
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
 * int GetHeight  ()const;
 *
 *  Accessor: This method will return the height attribute
 *---------------------------------------------------------------------------
 *  Parameters: none
 *---------------------------------------------------------------------------
 *  return: height(integer)
 ***************************************************************************/
 
/****************************************************************************
 * int GetWeight  ()const;
 *
 *  Accessor: This method will return the weight attribute
 *---------------------------------------------------------------------------
 *  Parameters: none
 *---------------------------------------------------------------------------
 *  return: weight(integer)
 ***************************************************************************/
 
/****************************************************************************
 * bool GetBleat  ()const;
 *
 *  Accessor: This method will return the bleating attribute
 *---------------------------------------------------------------------------
 *  Parameters: none
 *---------------------------------------------------------------------------
 *  return: bleating(boolean)
 ***************************************************************************/
        
#endif  /* SHEEP_HEADER_H_ */

// To include this file
// #include "SHEEP_HEADER.h"
