/****************************************************************************
 * AUTHOR	   : JACOBIS SORIANO
 * STUDENT ID  : W7217146
 * AUTHOR2	   : KOSTYANTYN SHUMISHYN
 * STUDENT ID2 : W7216875
 * LAB #5      : Output - Geometry
 * CLASS	   : CS 150
 * SECTION 	   : MW 3:30 - 5:20p
 * DUE DATE	   : 2/13/2017
 ***************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/****************************************************************************
 * OUTPUT - GEOMETRY
 *---------------------------------------------------------------------------
 * This Program will obtain dimensions of 3 geometric objects; a triangle, a
 * rectangle and a circle, and output their respective areas.
 *---------------------------------------------------------------------------
 * INPUT:
 *     Two floats will be read in at a time for each specified shape at
 *     time, a total of five intergers or floats inputs will be required.
 *             triangleHeight:      stores the height of the triangle
 *             triangleBase:        stores the dimension of the base
 *             rectangleWidth:      stores the width of the rectangle
 *             rectangleHeight:     stores the height of the rectangle
 *             circleRadius:        stores the radius of the circle
 *
 * OUTPUT:
 *     The output will be variously trunkated or rounded versions of each
 *     shape's area.
 *             triangleArea:        outputs the area of the triangle
 *             rectangleArea:       outputs the area of the rectangle
 *             circleArea:          outputs the area of the circle
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
	 * PI            : Holds the value of PI
	 * COL_WIDTH     : Holds formatted column width
	 * TRI_OUT_WIDTH : Holds width of Triangle Output Column
     * REC_OUT_WIDTH : Holds width of Rectangle Output Column
     * CIR_OUT_WIDTH : Holds width of Circle Output Column
	 ***********************************************************************/
	const char NAME1[]        = "Jacobis Soriano";
	const char NAME2[]        = "Kostyantyn S.";
    const char CLASS[]        = "CS150";
	const char SECTION[]      = "MW: 3:30pm - 5:20pm";
	const int  LAB_NUM        = 5;
	const char LAB_NAME[]     = "Output - Geometry";
	const float PI            = 3.14159;
	const int COL_WIDTH       = 35;
	const int TRI_OUT_WIDTH   = 18;
	const int REC_OUT_WIDTH   = 19;
	const int CIR_OUT_WIDTH   = 16;
	
	// variable declarations will go here
	float triangleHeight;   // IN, CALC holds value of triangle height
	float triangleBase;     // IN, CALC holds value of triangle base
	float rectangleWidth;   // IN, CALC holds value of rectangle width
	float rectangleHeight;  // IN, CALC holds value of rectangle height
	float circleRadius;     // IN, CALC holds value of circle radius
	
	float triangleArea;     // OUT, CALC holds value of area for triangle
	float rectangleArea;    // OUT, CALC holds value of area for rectangle
	float circleArea;       // OUT, CALC holds value of area for circle


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
	 * INPUT - Dimensions of the three shapes to be used for calculating area
	 ***********************************************************************/
    cout << left;
    cout << setw(COL_WIDTH) << "Enter the height of the triangle:";
    cin  >> triangleHeight;
    
    cout << setw(COL_WIDTH) << "Enter the base of the triangle:";
    cin  >> triangleBase;
    cout << endl;
    
    cout << setw(COL_WIDTH) << "Enter the width of the rectangle:";
    cin  >> rectangleWidth;
    
    cout << setw(COL_WIDTH) << "Enter the height of the rectangle:";
    cin  >> rectangleHeight;
    cout << endl;
    
    cout << setw(COL_WIDTH) << "Enter the radius of the circle:";
    cin  >> circleRadius;
    cout << endl << endl;
    cout << right;
        
	/************************************************************************
	 * PROCESSING - Calculates the area of the triangle, rectangle and circle
	 * using their corresponding dimensions, formulas and the constant PI.
	 ***********************************************************************/
    triangleArea  = (1 / 2.0) * (triangleBase) * (triangleHeight);
    rectangleArea = (rectangleWidth) * (rectangleHeight);
    circleArea    = (PI) * (circleRadius) * (circleRadius); 
    
	/************************************************************************
	 * OUTPUT - Outputs a formatted table of alligned values of each shape's
	 * area based on different trimming/rounding/truncating rules.
	 ***********************************************************************/
    cout << setw(TRI_OUT_WIDTH) << "Triangle Area"
         << setw(REC_OUT_WIDTH) << "Rectangle Area"
         << setw(CIR_OUT_WIDTH) << "Circle Area" << endl;
         
    cout << setw(TRI_OUT_WIDTH) << triangleArea
         << setw(REC_OUT_WIDTH) << rectangleArea
         << setw(CIR_OUT_WIDTH) << circleArea    << endl;
         
    cout << setprecision(3);
    cout << setw(TRI_OUT_WIDTH) << triangleArea
         << setw(REC_OUT_WIDTH) << rectangleArea
         << setw(CIR_OUT_WIDTH) << circleArea    << endl;
    
    cout << showpoint;
    cout << setw(TRI_OUT_WIDTH) << triangleArea
         << setw(REC_OUT_WIDTH) << rectangleArea
         << setw(CIR_OUT_WIDTH) << circleArea    << endl;
         
    cout << fixed;     
    cout << setw(TRI_OUT_WIDTH) << triangleArea
         << setw(REC_OUT_WIDTH) << rectangleArea
         << setw(CIR_OUT_WIDTH) << circleArea    << endl;
    
    cout << fixed               << setprecision(5);
    cout << setw(TRI_OUT_WIDTH) << triangleArea
         << setw(REC_OUT_WIDTH) << rectangleArea
         << setw(CIR_OUT_WIDTH) << circleArea    << endl;
    
    
    cin.ignore(1000, '\n');
    cin.ignore(1000, '\n');
	                            
	return 0;
}
