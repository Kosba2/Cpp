#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION CalcDiscount
 * --------------------------------------------------------------------------
 * This function receives a month and a sale amount to determine how much the
 * user will save on a given date.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          month       : Month to be used to determine discount
 *          saleAmount  : Sale amount to calculate discount amount
 *
 * POST-CONDITIONS
 *      This function will return the discounted amount
 ***************************************************************************/

double CalcDiscount(int month, double saleAmount)
{
    // Variables
    double discount;
    
    if (month > 5)
    {
        if (month > 8)
        {
            discount = .15;
        } // September or later
        
        else
        {
            discount = .1;
        } // June to August
    }
    else
    {
        discount = .05;
    } // January to May
    
    discount *= saleAmount;
    
    return discount;
}
