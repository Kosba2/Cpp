/****************************************************************************
 * AUTHOR        : KOSTYANTYN SHUMISHYN
 * STUDENT IDs   : W7216875
 * Assignment #2 : New Salary
 * CLASS	     : CS 150
 * DUE DATE	     : 2/22/2017
 ***************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

/****************************************************************************
 * New Salary
 *---------------------------------------------------------------------------
 * This program will obtain from the user the user's full name, a current 
 *      annual salary and a percent increase due on that salary. It will also
 *      calculate the retroactive pay due to the user.
 *---------------------------------------------------------------------------
 * INPUT:
 *     name             : The user's name.                                                      
 *     annualSalary     : Amount user initially makes yearly
 *     salaryIncrease   : Rate of the pay increase due
 *
 * OUTPUT:
 *     name             : The user's name.
 *     newAnnualSalary  : New amount user makes yearly
 *     newMonthlySalary : New amount user makes monthly
 *     retroactivePay   : Amount user is due retroactively
 ***************************************************************************/

int main()
{
    /************************************************************************
 	 * CONSTANTS
     * ----------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING AS WELL AS FORMATTING
	 * ----------------------------------------------------------------------
	 * NAME           : Programmer's Name
	 * CLASS          : Students' Course
	 * SECTION        : Class Days and Times
	 * ASGNMT_NUM     : Assignment Number
	 * ASGNMT_NAME    : Title of the Assignment
	 * ----------------------------------------------------------------------
     * USED FOR PROCESSING
     * ----------------------------------------------------------------------
     * RETRO_MONTHS   : Number of months counted for retroactive pay
     * MONTHS_WORK    : Number of months per year work user works
     * ----------------------------------------------------------------------
     * USED FOR FORMATTING
     * ----------------------------------------------------------------------
	 * PROMPT_WIDTH   : Holds the column width for the prompt
     * NEW_SAL1_WIDTH : Holds the column width for the 1st output column
	 * NEW_SAL2_WIDTH : Holds the column width for the 2nd output column
	 * NAME_LENGTH    : Holds the max number of characters for user's name
	 ***********************************************************************/
	 
	const char NAME[]         = "Kostyantyn S.";
    const char CLASS[]        = "CS150";
	const char SECTION[]      = "MW: 3:30pm - 5:20pm";
	const int  ASGNMT_NUM     = 2;
	const char ASGNMT_NAME[]  = "New Salary";
	
	// processing constants
	const int RETRO_MONTHS    = 6;
	const int MONTHS_WORK     = 12;
	
	// formatting constants
	const int PROMPT_WIDTH    = 29;
	const int NEW_SAL1_WIDTH  = 15;
	const int NEW_SAL2_WIDTH  = 19;
	const int NEW_SAL3_WIDTH  = 15;
	const int NAME_LENGTH     = 25;
	
	// variable declarations will go here
	char name[NAME_LENGTH];  //IN & OUT  - Name input by User
    float annualSalary;      //IN & CALC - Amount user initially makes yearly
    float salaryIncrease;    //IN & CALC - Rate of the pay increase due
    
    float newAnnualSalary;   //OUT & CALC - New amount user makes yearly
    float newMonthlySalary;  //OUT & CALC - New amount user makes monthly
    float retroactivePay;    //OUT & CALC - Amount user is due retroactively
    
	// OUTPUT - Class Headings
	cout << left;
	cout << "****************************************************\n";
	cout << "* PROGRAMMER  : "    << NAME        <<endl;
	cout << "* "      << setw(12) << "CLASS"     << ": "  << CLASS    <<endl;
	cout << "* "      << setw(12) << "SECTION"   << ": "  << SECTION  <<endl;
	cout << "* Assignment "       << ASGNMT_NUM;
    cout << ": "                  << ASGNMT_NAME << endl;
	cout << "****************************************************\n\n";
	cout << right;
	
	
	/************************************************************************
	 * INPUT - Prompts the user for their name, their annual salary and the
     * rate at which their pay will be increased. Formatted to be left
     * justified and numbers numerically represent the change with correct
     * decimal spaces. Will keep buffer clean.
	 ***********************************************************************/
    cout << left;
    
    cout << setw(PROMPT_WIDTH) << "What is your name?";
    cin.getline(name, NAME_LENGTH);
    
    cout << setw(PROMPT_WIDTH) << "What is your current salary?";
    cin  >> annualSalary;
    cin.ignore(10000, '\n');
    
    cout << setw(PROMPT_WIDTH) << "What is your pay increase?";
    cin  >> salaryIncrease;
    cin.ignore(10000, '\n');

    cout << right;
        
	/************************************************************************
	 * PROCESSING - Calculates the user's New Annual and Monthly Salary as
	 * well as their retroactive pay due for the period in which their raise
	 * was overdue.
	 ***********************************************************************/
    newAnnualSalary  = annualSalary + (annualSalary * salaryIncrease);
    newMonthlySalary = newAnnualSalary / MONTHS_WORK;
    retroactivePay   = (newAnnualSalary - annualSalary) / MONTHS_WORK
                       * RETRO_MONTHS;
    
	/************************************************************************
	 * OUTPUT - Output the user's name, New Annual and Monthly Salary, and
	 * the retroactive pay due.
	 ***********************************************************************/
    cout << left;
    
    cout << endl;
    cout << name  << "'s SALARY INFORMATION" << endl;
    
    cout << setw(NEW_SAL1_WIDTH) << "New Salary" 
         << setw(NEW_SAL2_WIDTH) << "Monthly Salary"
         << setw(NEW_SAL3_WIDTH) << "Retroactive Pay"
         << endl;
         
    cout << right;     
    
    cout << fixed << setprecision(2);
    cout << setw(NEW_SAL1_WIDTH - 5) << newAnnualSalary
         << setw(NEW_SAL2_WIDTH)     << newMonthlySalary
         << setw(NEW_SAL3_WIDTH + 5) << retroactivePay;
         
    cout << "\n\n";
    
    cin.ignore(10000, '\n');
	                            
	return 0;
}
