#include "SHEEP_HEADER.h"

/****************************************************************************
 * Method GetName: Class Sheep
 * --------------------------------------------------------------------------
 * This method will return the Sheep's name.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *   There are no pre-conditions for this method.
 * 
 * POST-CONDITIONS
 *   Returns the Sheep's name
 ***************************************************************************/
 string Sheep::GetName()const
 {
     return name;
 }
 
/****************************************************************************
 * Method GetAge: Class Sheep
 * --------------------------------------------------------------------------
 * This method will return the Sheep's age.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *   There are no pre-conditions for this method.
 * 
 * POST-CONDITIONS
 *   Returns the Sheep's age
 ***************************************************************************/
 int Sheep::GetAge()const
 {
     return age;
 }
 
/****************************************************************************
 * Method GetBleat: Class Sheep
 * --------------------------------------------------------------------------
 * This method will return the Sheep's bleating status
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *   There are no pre-conditions for this method.
 * 
 * POST-CONDITIONS
 *   Returns the Sheep's bleating status
 ***************************************************************************/
 bool Sheep::GetBleat()const
 {
     return bleating;
 }
