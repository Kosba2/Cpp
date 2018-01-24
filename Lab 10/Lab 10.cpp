/****************************************************************************
 * AUTHORS     : TINA TALEB & KOSTYANTYN SHUMISHYN
 * STUDENT IDs : W7223361 & W7216875
 * LAB #10     : Buddy's Average Sheep Age Calculator
 * CLASS	   : CS 150
 * DUE DATE	   : 3/14/2017
 ***************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

/****************************************************************************
 * BUDDY'S AVERAGE SHEEP AGE CALCULATOR
 *---------------------------------------------------------------------------
 * This program will help buddy calculate average age of all his sheep by 
 *      helping minimize input errors through error-checking.
 *---------------------------------------------------------------------------
 * INPUT:
 *     sheepAge              : The sheep's age input by user 
 *
 * OUTPUT:
 *     averageAge            : The average of all ages given by user
 *     ageRange              : Represents if population is young, middle-aged
 *                             or aging
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
     * USED FOR FORMATTING
     * ----------------------------------------------------------------------
	 * COL_WIDTH     : Holds formatted column width
	 * MAX_TESTS     : How many times you will average the number of sheep
	 * AGE_LIMIT     : EVERYBODY knows sheep live until this number
	 ***********************************************************************/
	 
	const char NAME1[]        = "Tina Taleb";
	const char NAME2[]        = "Kostyantyn S.";
    const char CLASS[]        = "CS150";
	const char SECTION[]      = "MW: 3:30pm - 5:20pm";
	const int  LAB_NUM        = 10;
	const char LAB_NAME[]     = "Buddy's Average Sheep Age Calculator";
	
	const int COL_WIDTH       = 11;
	const int MAX_TESTS       = 3;
	const int AGE_LIMIT       = 9;
	
	// variable declarations will go here
    int   sheepAge;               //CALC & IN  - Sheep age input
    int   totalSheepAge;          //CALC       - Sum of all valid sheep ages
    float averageSheepAge;        //CALC & OUT - Average of sheep ages
    
    int   sheepCount;             //CALC       - Number of valid sheep
	int   testCount;              //CALC       - Counter for test repetition

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
	 * INPUT/PROCESSING/OUTPUT - 
	 ***********************************************************************/
    cout << left;
    
    for (testCount = 1; testCount <= MAX_TESTS; testCount = testCount + 1)
    {
        sheepAge      = 0;
        totalSheepAge = 0;
        sheepCount    = 0;
        
        cout << "TEST #" << testCount << ":" << endl;
        cout << "Welcome to Buddy's Average Sheep Age Calculator!\n\n";
        cout << "\tEnter in the sheep ages, input -1 to exit" << endl;
        
        while (sheepAge > -1)
        {
            do
            {   
                cout << setw(COL_WIDTH) << "\tSheep Age: ";
                cin  >> sheepAge; 
                
                if(sheepAge > AGE_LIMIT)
                {
                   cout << "\n*** Invalid sheep age - please input a value"
                        << " less than or equal to " << AGE_LIMIT << "!\n\n";
                }
                
            } while(sheepAge > AGE_LIMIT);
            
            if (sheepAge > -1)
            {
                totalSheepAge = totalSheepAge + sheepAge;
                sheepCount = sheepCount + 1;
            }
            
        } // (sheepAge > -1)
        
        if (sheepCount != 0)
        {
            averageSheepAge = totalSheepAge / float(sheepCount);
            cout << fixed << setprecision(1);
            cout << "\nOn average your sheep are " << averageSheepAge
                 << " years old!" << endl;
                 
            if (averageSheepAge > 3)
            {
                if (averageSheepAge > 6)
                {
                    cout << "In general, your sheep are AGING"
                         << " - time to breed!\n" << endl << endl << endl;
                } //(averageSheepAge > 6)
                
                else
                {
                    cout << "In general, your sheep are MIDDLE-AGED"
                         << endl << endl << endl << endl;
                } //(averageSheepAge > 6)
                
            } //(averageSheepAge > 3)
            
            else
            {
                cout << "In general, your sheep are BABIES"
                     << endl << endl << endl << endl;
            } //(averageSheepAge > 3)
            
            
        }
        else
        {
            cout << "\nCould not average, your sheep count was zero!\n\n";
        }
        
    } //(testCount = 1; testCount <= MAX_TESTS; testCount = testCount + 1)
    
    cout << "Thank you for using Buddy's Average Sheep Age Calculator!\n"
         << "Have a great day!! :)";
    
    cout << right;
    
    cin.ignore(10000, '\n');
    cin.ignore(10000, '\n');
	                            
	return 0;
}
