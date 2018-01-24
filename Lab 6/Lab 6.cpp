/****************************************************************************
 * AUTHORS     : JOHNNY ANGEL & KOSTYANTYN SHUMISHYN
 * STUDENT IDs : W7236505 & W7216875
 * LAB #6      : Pocket Money
 * CLASS	   : CS 150
 * DUE DATE	   : 2/15/2017
 ***************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

/****************************************************************************
 * POCKET MONEY
 *---------------------------------------------------------------------------
 * This Program receives the pocket money left over from the previous week 
 *      and the amount spent in the current week from the user and calculates
 *      how much pocket money is remaining. Each week the user is allocated 
 *      $20.00.
 *---------------------------------------------------------------------------
 * INPUT:
 *     name          : The user's name.                                                      
 *     amtLeftover   : Amount leftover from the previous week.
 *     spent         : Amount spent this week.                  
 *
 * OUTPUT:
 *     name          : The user's name.
 *     pocketMoney   : Amount of pocket money remaining.
 ***************************************************************************/

int main()
{
    /************************************************************************
 	 * CONSTANTS
     * ----------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING AS WELL AS FORMATTING
	 * ----------------------------------------------------------------------
	 * NAME1         : 1st Programmer's Name
	 * NAME2         : 2nd Programmer's Name
	 * CLASS         : Students' Course
	 * SECTION       : Class Days and Times
	 * LAB_NUM       : Lab Number (specific to this Lab)
	 * LAB_NAME      : Title of the Lab
	 * ----------------------------------------------------------------------
     * USED FOR PROCESSING
     * ----------------------------------------------------------------------
     * WEEKLY_BONUS  : Amount of money added every week
     * ----------------------------------------------------------------------
     * USED FOR FORMATTING
     * ----------------------------------------------------------------------
	 * COL_WIDTH     : Holds formatted column width
	 * NAME_LENGTH   : Length of a name C-String plus Null Terminator
	 ***********************************************************************/
	 
	const char NAME1[]        = "Johnny Angel";
	const char NAME2[]        = "Kostyantyn S.";
    const char CLASS[]        = "CS150";
	const char SECTION[]      = "MW: 3:30pm - 5:20pm";
	const int  LAB_NUM        = 6;
	const char LAB_NAME[]     = "Pocket Money";
	
   	const float WEEKLY_BONUS  = 20.0;
	
	const int COL_WIDTH       = 33;
	const int NAME_LENGTH     = 25;
	
	// variable declarations will go here
	char name[NAME_LENGTH];  //IN  & OUT  - Name input by User
    float amtLeftover;       //IN  & CALC - Starting Amount from last week
    float spent;             //IN  & CALC - Amount spent this week
    float pocketMoney;       //OUT & CALC - Amount of pocket money remaining

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
	 * INPUT - Prompts the user for their name and the amount of money they
	 * had saved from the previous week, as well as the amount of money they
	 * have spent this week. Prompts use appropriate input requests so as to
	 * keep the buffer clean.
	 ***********************************************************************/
    cout << left;
    
    cout << setw(COL_WIDTH) << "What is your name?";
    cin.getline(name, NAME_LENGTH);
    
    cout << setw(COL_WIDTH) << "How much is left from last week?";
    cin  >> amtLeftover;
    cin.ignore(10000, '\n');
    
    cout << setw(COL_WIDTH) << "How much have you spent?";
    cin  >> spent;
    cin.ignore(10000, '\n');

    cout << right;
        
	/************************************************************************
	 * PROCESSING - Calculates the amount remaining after spending and bonus.
	 ***********************************************************************/
    pocketMoney = amtLeftover + WEEKLY_BONUS - spent;
    
	/************************************************************************
	 * OUTPUT - Output the user's name and how much pocket money they have.
	 ***********************************************************************/
    cout << left;
    
    cout << endl << endl;
    cout << "Hello " << name  << "!" << endl;
    
    cout << "You now have $ ";
    cout << fixed << setprecision(2) << pocketMoney << " left.";
    cout << "\n\n";
    
    cout << right;
    cin.ignore(10000, '\n');
	                            
	return 0;
}
