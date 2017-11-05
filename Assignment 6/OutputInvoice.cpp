#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION GetSalesInfo
 * --------------------------------------------------------------------------
 * This function serves the purpose of prompting the user for all the
 * relevant information regarding a purchase they will make.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      None of the parameters need to be defined because they are pass by
 *  reference, they need to only be initialized.
 *          accNum      : Account Number as an Integer
 *          month       : Month as Integer
 *          day         : Day as Integer
 *          year        : Year as integer
 *          countryCode : Code as 'O', 'S' or 'L'
 *          saleAmount  : Amount before tax and discount
 *          weight      : Weight of the Item Sold
 *          fin         : File I/O Assist Variable
 *          fout        : File I/O Assist Variable
 *              
 * POST-CONDITIONS
 *      This function will assign all the information to their corresponding
 *  variables in the main class by reference.
 ***************************************************************************/

void OutputInvoice(int accNum, int month, int day, int year,
				  char countryCode, double saleAmount, double discount,
                  double salesTax, double shipping, double totalDue, 
                  ofstream &fout)
{   
    // Output constants
    const int OUTWIDTH   = 23;
    const int MONEYWIDTH = 7;
    
    // Variables
    string county;
    int adj;
    
    // Used for tidying up County Output to be closer to centered
    adj = 30;
    
    // Associates char with County
    if (countryCode != 'O')
    {
        if (countryCode == 'S')
        {
            county = "San Diego County";
            adj = 29;
        } // countryCode == 'S'
        
        else
        {
            county = "LA County";
            adj = 32;
        } // countryCode == 'L'
    }
    else
    {
        county = "Orange County";
    } //countryCode == 'O'


    fout << left;
    fout << setw(39)  << "ACCOUNT NUMBER" << "COUNTY" << "\n     ";
    fout << setw(adj) << accNum           << county   << "\n\n";
    fout << right;
    
    fout << "DATE OF SALE: " << month << "/" << day << "/" << year;
    fout << endl << endl << endl << endl;
    
    fout << left;    
    fout << setw(OUTWIDTH)   << "SALE AMOUNT:         $";
    fout << fixed << setprecision(2);
    fout << right;
    fout << setw(MONEYWIDTH) << saleAmount << endl;
    
    fout << left;
    fout << setw(OUTWIDTH)   << "DISCOUNT:            $";
    fout << fixed << setprecision(2);
    fout << right;
    fout << setw(MONEYWIDTH) << discount << endl;
    
    fout << left;
    fout << setw(OUTWIDTH)   << "SALES TAX:           $";
    fout << fixed << setprecision(2);
    fout << right;
    fout << setw(MONEYWIDTH) << salesTax << endl;
    
    fout << left;
    fout << setw(OUTWIDTH)   << "SHIPPING:            $";
    fout << fixed << setprecision(2);
    fout << right;
    fout << setw(MONEYWIDTH) << shipping << endl;
    
    fout << left;
    fout << setw(OUTWIDTH)   << "TOTAL DUE:           $";
    fout << fixed << setprecision(2);
    fout << right;
    fout << setw(MONEYWIDTH) << totalDue << endl;
    
    fout << endl << endl << endl;
}
