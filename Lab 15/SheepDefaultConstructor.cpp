#include "SHEEP_HEADER.h"

/****************************************************************************
 * Default Constructor: Class Sheep
 * --------------------------------------------------------------------------
 * This constructor will be used as a default blueprint for the Sheep Class
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *   There are no pre-conditions for this constructor.
 * 
 * POST-CONDITIONS
 *   This constructor does not return anything because it is a constructor
 ***************************************************************************/
 Sheep::Sheep()
 {
    name.clear();
    age      = 0;
    height   = 0;
    weight   = 0;
    bleating = false;
 }

/****************************************************************************
 * Destructor: Class Sheep
 * --------------------------------------------------------------------------
 * This destructor is here because we need it
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *   There are no pre-conditions for this destructor.
 * 
 * POST-CONDITIONS
 *   This method does not return anything because it is a destructor
 ***************************************************************************/
Sheep::~Sheep()
{
	// We don't actually understand why we had to do this, no slides cover it
}
