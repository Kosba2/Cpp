/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND TIANHAO HUANG
 * STUDENT IDs   : W7216875 & W7220990
 * LAB #16       : OOP - FLO'S PARTY PLANNER
 * CLASS	     : CS 150
 * DUE DATE	     : 4/26/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION PrintHeader
 * --------------------------------------------------------------------------
 * This function receives an assignment name, type & number then outputs the
 * appropriate header - returns nothing.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          names : Names of Student or Students
 *          asName: Assignment Name
 *          asNum : Assignment Number
 *          asType: Assignment Type ==> THIS SHOULD CONTAIN:
 *                                      ‘L’ for Labs
 *                                      ‘A’ for Assignments
 *
 * POST-CONDITIONS
 *      This function will output the class heading.
 ***************************************************************************/

void PrintHeader(string names, string asName, int asNum, char asType)
{
    // Output constants
    const string CLASS   = "CS150";               // Name of Course
	const string SECTION = "MW: 3:30pm - 5:20pm"; // Section of Course
    
    // Variable declarations
    int adj;        // Integer whose value varies to allign output
    string type;    // String whose value varies to differentiate output
    
    if (toupper(asType) == 'L')
    {
        type = "Lab #";
        adj = 8;
    }
    else if (toupper(asType) == 'A')
    {
        type = "Assignment #";
        adj = 0;
    }
    
    
    
    
    
    cout << left;
	cout << "***********************************************************\n";
	cout << "* PROGRAMMER(S) : "     << names                         <<endl;
	cout << "* "         << setw(14) << "CLASS"  << ": "   << CLASS   <<endl;
	cout << "* "         << setw(14) << "SECTION"<< ": "   << SECTION <<endl;
	cout << "* " << type << setw(adj)<< asNum    << " : "  << asName  <<endl;
	cout << "***********************************************************\n";
	cout << endl;
	cout << right;
}
