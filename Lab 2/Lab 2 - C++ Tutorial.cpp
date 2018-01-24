/****************************************************************************
* AUTHOR	 : BLAZE SYKA
* STUDENT ID : 7073992
* LAB #2     : Dev C++ Tutorial
* CLASS		 : CS 150
* SECTION 	 : MW 3:30-5:20
* DUE DATE	 : 3/29/2017



/**************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

/****************************************************************************
* DEV C++
*----------------------------------------------------------------------------
*This program will output the class heading. 
*----------------------------------------------------------------------------
*INPUT:
*	<There is not input for this program - output data is obtained through 
*	the constraints.>
*
*OUTPUT:
* <This program will output a class hearing>
****************************************************************************/
int main ()
{
	/************************************************************************
 	 *CONSTANTS
     *-----------------------------------------------------------------------
	 *OUTPUT - USED FOR CLASS HEADING
	 *----------------------------------------------------------------------
	 *PROGRAMMER  : Programmer's Name
	 *CLASS       : Student's Course
	 *SECTION     : Class Days and Times
	 *LAB_NUM     : Land Number (specific to this lab)
	 *LAB_NAME    : Title of the Lab
	************************************************************************/
	const char PROGRAMMER[]   = "Blaze Syka";
	const char CLASS[]        = "CS150";
	const char SECTION[]      = "MW: 3:30pm-5:20pm";
	const int  LAB_NUM        = 2;
	const char LAB_NAME[]     = "Dev C++ Tutorial";
	
	// variable declarations will go here
	
	//OUTPUT - Class heading
	cout << left;
	cout << "************************************************************\n";
	cout << "* PROGRAMMED BY : " << PROGRAMMER << endl;
	cout << "* "      << setw(14) << "CLASS"   << ": " <<CLASS        <<endl;
	cout << "* "      << setw(14) << "SECTION" << ": " <<SECTION      <<endl;
	cout << "* LAB #" << setw(9)  << LAB_NUM   << ": " <<LAB_NAME     <<endl;
	cout << "*****************************************************\n\n";
	cout << right;
	/************************************************************************
	 *INPUT - describe input here
	 ***********************************************************************/
	 
	/************************************************************************
	 *PROCESSING - decribe processing here
	************************************************************************/
	
	/************************************************************************
	 *OUTPUT - describe input here
	 ***********************************************************************/
	 
	cout << "Press <enter> to exit";
	cin.ignore(1000, '\n');
	
	return 0;
	
}
	 
	 
	 
	 
