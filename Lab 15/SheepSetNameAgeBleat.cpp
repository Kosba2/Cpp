#include "SHEEP_HEADER.h"

/****************************************************************************
 * Method SetName: Class Sheep
 * --------------------------------------------------------------------------
 * This method will change the sheep's name to the given argument.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *  The following need a defined value passed in
 *              sheepName : Sheep's Name
 * 
 * POST-CONDITIONS
 *   Returns nothing.
 *   Sheep of class Sheep will have a name.
 ***************************************************************************/
 void Sheep::SetName(string sheepName)
 {
     name = sheepName;
 }
 
/****************************************************************************
 * Method SetAge: Class Sheep
 * --------------------------------------------------------------------------
 * This method will change the sheep's age to the given argument.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *  The following need a defined value passed in
 *              sheepAge : Sheep's Age
 * 
 * POST-CONDITIONS
 *   Returns nothing.
 *   Sheep of class Sheep will have a set age.
 ***************************************************************************/
 void Sheep::SetAge(int sheepAge)
 {
     age = sheepAge;
 }
 
/****************************************************************************
 * Method SetBleat: Class Sheep
 * --------------------------------------------------------------------------
 * This method will change the sheep's bleating status to the given argument.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *  The following need a defined value passed in
 *              sheepBleating : Sheep's Bleating Status
 * 
 * POST-CONDITIONS
 *   Returns nothing.
 *   Sheep of class Sheep will bleat.
 ***************************************************************************/
 void Sheep::SetBleat(bool sheepBleating)
 {
     bleating = sheepBleating;
 }
