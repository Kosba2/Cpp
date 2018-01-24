/****************************************************************************
 * AUTHOR	   : BLAZE SYKA
 * STUDENT ID  : W7073992
 * AUTHOR2	   : KOSTYANTYN SHUMISHYN
 * STUDENT ID2 : W7216875
 * LAB #4      : Vending Machine
 * CLASS	   : CS 150
 * SECTION 	   : MW 3:30 - 5:20p
 * DUE DATE	   : 2/8/2017
 ***************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/****************************************************************************
 * Vending Machine
 *---------------------------------------------------------------------------
 * This Program will output the price of an item, your change due, as well as
 * the fewest number of denominations possible, excluding pennies.
 *---------------------------------------------------------------------------
 * INPUT:
 *      <Price of the item will be gathered from the user>
 *
 * OUTPUT:
 *     <This program will output item price, change due and denominations>
 ***************************************************************************/

int main()
{
    /************************************************************************
 	 * CONSTANTS
     * ----------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * ----------------------------------------------------------------------
	 * NAME1       : 1st Programmer's Name
	 * NAME2       : 2nd Programmer's Name
	 * CLASS       : Students' Course
	 * SECTION     : Class Days and Times
	 * LAB_NUM     : Lab Number (specific to this Lab)
	 * LAB_NAME    : Title of the Lab
	 ***********************************************************************/
	const char NAME1[]        = "Blaze Syka";
	const char NAME2[]        = "Kostyantyn Shumishyn";
    const char CLASS[]        = "CS150";
	const char SECTION[]      = "MW: 3:30pm - 5:20pm";
	const int  LAB_NUM        = 4;
	const char LAB_NAME[]     = "Vending Machine";
	
	// variable declarations will go here
	short itemPrice;         // IN, OUT, & CALC - Price of the item sold
	short changeDue;         // OUT & CALC - Change due out of 100 cents
	short changeRemainder;   // CALC - Processing variable of due change
	short numQuarter;        // OUT & CALC - Number Quarters due from change
	short numDime;           // OUT & CALC - Number Dimes due from change
	short numNickel;         // OUT & CALC - Number Nickels due from change
	
	// OUTPUT - Class Headings
	cout << left;
	cout << "****************************************************\n";
	cout << "* PROGRAMMERS : "    << NAME1     << " and " << NAME2    <<endl;
	cout << "* "      << setw(12) << "CLASS"   << ": "    << CLASS    <<endl;
	cout << "* "      << setw(12) << "SECTION" << ": "    << SECTION  <<endl;
	cout << "* LAB #" << setw(7)  << LAB_NUM   << ": "    << LAB_NAME <<endl;
	cout << "****************************************************\n\n";
	cout << right;
	
	/************************************************************************
	 * INPUT - Price of item to be purchased. Must be between 5 and 100 cents
     * and in 5 cent increments.
	 ***********************************************************************/
    cout << "Enter a price for the item: ";
    cin  >> itemPrice;
	 
	/************************************************************************
	 * PROCESSING - Calculates the change due from a dollar based on the
	 * input price of the item. Uses the change that is due to calculate the
	 * number of quarters through division, followed by the same operation
	 * but with the modulus to update the remaining change. It then repeats 
	 * this process to calculate number of dimes and number of nickels.
	 ***********************************************************************/
    changeDue          = 100 - itemPrice;
    
    numQuarter         = changeDue / 25;
    changeRemainder    = changeDue % 25;
    
    numDime            = changeRemainder / 10;
    changeRemainder    = changeRemainder % 10;
    
    numNickel          = changeRemainder / 5;
    
	/************************************************************************
	 * OUTPUT - Outputs a pseudo-formatted display of the Item Price,
	 * followed by the Total Change Due and each denomination due as well
	 ***********************************************************************/
    cout << "You bought an item for " << itemPrice << " cents and gave me a";
    cout << " dollar, so your change is " << changeDue << " cents.\n\n\n";
    
	cout << "DISPENSING...\n" << numQuarter << " Quarter(s),\n" << numDime;
	cout << " Dime(s), and\n" << numNickel  << " Nickel(s).\n\n\n\n";
	
             
	return 0;
}
