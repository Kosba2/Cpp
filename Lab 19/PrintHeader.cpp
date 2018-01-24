/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND ROBERT ESPOSITO
 * STUDENT IDs   : W7216875 & W7180729
 * LAB #19       : ENUMERATED TYPES
 * CLASS	     : CS 150
 * DUE DATE	     : 5/03/2017
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
 * POST-CONDITIONS
 *      This function will output the class heading.
 ***************************************************************************/

void PrintHeader(string names, string asName, int asNum, char asType)
{
    /************************************************************************
 	 * CONSTANTS
     * ----------------------------------------------------------------------
	 * OUTPUT - USED FOR OUTPUTTING
	 * ----------------------------------------------------------------------
	 * CLASS   : Name of the Course
	 * SECTION : Section of the Course
	 ***********************************************************************/
    // Constants
    const string CLASS   = "CS150";              
	const string SECTION = "MW: 3:30pm - 5:20pm";
    
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
