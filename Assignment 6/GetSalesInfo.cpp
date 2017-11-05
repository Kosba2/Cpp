#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION GetSalesInfo
 * --------------------------------------------------------------------------
 * This function serves the purpose of prompting the user for all the
 * relevant information regarding their sales.
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

void GetSalesInfo(int &accNum, int &month, int &day, int &year,
				  char &countryCode, double &saleAmount, int &weight,
                  ifstream &fin, ofstream &fout)
{   
    // Variables
    int daysInMonth;
    
    bool charInvalid;
    bool monthInvalid;
    bool dayInvalid;
    bool yearInvalid;
    bool weightInvalid;
    
    fout << left;
	
	fout << "Please Enter your Account Number: ";
	fin  >> accNum;
	fin.ignore(10000, '\n');
	fout << accNum << endl;
	
	fout << "Please Enter the Sales Date.\n";
	
	// Error checks input for a valid Month
	do
	{
        fout << "Enter Month: ";
	    fin  >> month;
	    fin.ignore(10000, '\n');
    	
	    fout << month << endl;
        
    	monthInvalid = (month < 1 || month > 12);
    	
    	if (monthInvalid)
    	{
            fout << "** INVALID INPUT - Please enter a valid Month **\n";
        }
        
    } while (monthInvalid);
    
    // Error checks input for a valid Year
	do
	{
		fout << "Enter Year: ";
		fin  >> year;
		fin.ignore(10000, '\n');
		
		fout << year << endl;
        
    	yearInvalid = (year < 1 || year > 2017);
    	
    	if (yearInvalid)
    	{
            fout << "** INVALID INPUT - Please enter a valid Year **\n";
        }
        
    } while (yearInvalid);
	
	
	// Error checks input integer for a valid Day
	do
	{
        fout << "Enter Day: ";
		fin  >> day;
		fin.ignore(10000, '\n');
    	
	    fout << day << endl;
        
        // Determines valid max number of days depending on month
    	switch (month)
    	{
    		case 1 : 
    		case 3 :
    		case 5 :
    		case 7 :
    		case 8 :
    		case 10:
    		case 12: daysInMonth = 31;
    				 break;
    				 
    		case 4 :
    		case 6 :
			case 9 :
			case 11: daysInMonth = 30;
					 break;
					 		 
    		case 2 : daysInMonth = 28;
    				 break;
		}
		
		// Adjusts February for Leap Years
		if (month == 2 && year % 4 == 0)
		{
			daysInMonth = 29;
		}
		
		dayInvalid = (day < 1 || day > daysInMonth);
    	
    	if (dayInvalid)
    	{
            fout << "** INVALID INPUT - Please enter a valid Day **\n";
        }
        
    } while (dayInvalid);
	
	
	// Error checks an input character against 'O', 'S' and 'L'.
	do
	{
        fout << "Please Enter the Country Code: ";
    	fin.get(countryCode);
        fin.ignore(10000, '\n');
    	
    	countryCode = toupper(countryCode);
        fout << countryCode << endl;
        
    	charInvalid = ((countryCode != 'O') && 
                       (countryCode != 'S') &&
                       (countryCode != 'L'));
    	
    	if (charInvalid)
    	{
            fout << "** INVALID INPUT - Please enter 'O', 'S' or 'L' **\n";
        }
        
    } while (charInvalid);
    
    fout << "Please Enter the Sales Amount: ";
	fin  >> saleAmount;
	fin.ignore(10000, '\n');
	fout << fixed << setprecision(2);
    fout << saleAmount << endl;
    
    fout << "Please Enter the Weight: ";
	fin  >> weight;
	fin.ignore(10000, '\n');
    fout << weight << endl << endl << endl;
	
	fout << right;
}
