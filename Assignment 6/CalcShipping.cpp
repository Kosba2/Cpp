#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION CalcShipping
 * --------------------------------------------------------------------------
 * This function receives a weight and uses it to test which tier of shipping
 * costs the item will fall into based on weight.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function
 *          weight : Variable used to determine and calculate shipping costs
 *
 * POST-CONDITIONS
 *      This function will return the shipping due
 ***************************************************************************/

double CalcShipping(int weight)
{
    // Constants
    const int FLAT_RATE = 5;
    
    const int BARRIER1  = 25;
    const int BARRIER2  = 50;
    
    const double FIRST_RATE  = .10;
    const double SECOND_RATE = .07;
    
	// Variables
    double shippingCost;
    
    // Uses boundaries of different tiers to determine shipping costs
    if (weight > BARRIER1)
    {
        if (weight > BARRIER2)
        {
            shippingCost = FLAT_RATE + ((BARRIER2 - BARRIER1) * FIRST_RATE)
                                + ((weight - BARRIER2) * SECOND_RATE);
        } // 50+ lbs
        else
        {
            shippingCost = FLAT_RATE + ((weight - BARRIER1) * FIRST_RATE);
        } // 26-50 lbs
    }
    else
    {
        shippingCost = FLAT_RATE;
    } // 25 lbs or less
    
    return shippingCost;
}
