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

void PrintLabHeader(string names, string asName, int asNum, char asType,
                    ofstream &fout)
{
    // Output constants
    const string CLASS   = "CS150";
	const string SECTION = "MW: 3:30pm - 5:20pm";
    
    // Variable declarations
    int adj;
    string type;
    
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
    
    fout << left;
	fout << "***********************************************************\n";
	fout << "* PROGRAMMER(S) : "     << names                         <<endl;
	fout << "* "         << setw(14) << "CLASS"  << ": "   << CLASS   <<endl;
	fout << "* "         << setw(14) << "SECTION"<< ": "   << SECTION <<endl;
	fout << "* " << type << setw(adj)<< asNum    << " : "  << asName  <<endl;
	fout << "***********************************************************\n";
	fout << endl;
	fout << right;
}
