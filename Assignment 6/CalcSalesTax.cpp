#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION CalcSalesTax
 * --------------------------------------------------------------------------
 * This function receives a country code and a sale amount (after discount)
 * and uses this information to determine the tax rate, then the amount taxed
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function, except fout:
 *          countryCode : Country code to determine tax rate
 *          saleAmount  : Sale amount to calculate taxation amount
 *          fout        : File I/O Assist Variable
 *
 * POST-CONDITIONS
 *      This function will return the taxation due
 ***************************************************************************/

double CalcSalesTax(char countryCode, double saleAmount, ofstream &fout)
{
    // Variables
    double taxation;
    
    // Determines which tax rate to apply
    switch(countryCode)
    {
        case 'O': taxation = .0775;
                    break;
        case 'S': taxation = .0825;
                    break;
        case 'L': taxation = .08;
                    break;
        default: fout << "***** ERROR - INVALID COUNTRY CODE *****\n";
    }
    taxation *= saleAmount;
    
    return taxation;
}
