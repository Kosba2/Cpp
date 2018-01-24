/****************************************************************************
 * AUTHORS     : MICHAEL MCDERMOTT & KOSTYANTYN SHUMISHYN
 * STUDENT IDs : W7213649 & W7216875
 * LAB #13     : Introduction to Functions
 * CLASS	   : CS 150
 * DUE DATE	   : 4/03/2017
 ***************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

//PROTOTYPES
// This function accepts a series of paramaters to output a heading
void PrintLabHeader(string names,   //IN  - Name(s) of Student(s)
                    string asName,  //IN  - Assignment number
                    int asNum,      //IN  - Assignment name
                    char asType);   //IN  - 'A'ssignment or 'L'ab
                    
// This function accepts two integers and returns the sum of them.
int AddTwoInts(int num1,            //IN  - First number to be added
               int num2);           //IN  - Second number to be added

// This function accepts two integers and returns the product of them.
int MultiplyTwoInts(int num1,       //IN  - First number to be multiplied
                    int num2);      //IN  - Second number to be multiplied

// This function accepts two integers and returns the largest of the two.
int FindLargest(int num1,           //IN  - First number to be compared
                int num2);          //IN  - Second number to be compared

// This function accepts two integers and returns the average of the two.
float AverageTwoInts(int num1,      //IN  - First number to be averaged
                     int num2);     //IN  - Second number to be averaged


int main()
{	
    /************************************************************************
 	 * CONSTANTS
     * ----------------------------------------------------------------------
     * USED FOR FORMATTING
     * ----------------------------------------------------------------------
	 * PROMPT_WIDTH  : Holds formatted Prompt width
	 * OUTPUT_WIDTH  : Holds formatted Output text width
	 * RESULT_WIDTH  : Holds formatted Output data width
	 ***********************************************************************/
	 
	const int PROMPT_WIDTH      = 26;
    const int OUTPUT_WIDTH      = 17; // 16 + 1 for tab character
    const int RESULT_WIDTH      = 6;  // 6 so semi-large numbers format well
    
	// variable declarations will go here
    int n1;           //IN & CALC  - First Integer
    int n2;           //IN & CALC  - Second Integer
    bool continueRun; //CALC       - Determines when to exit
    int runCount;     //CALC & OUT - Keeps track of number of runs
    
    int sum;          //CALC & OUT - Sum of two Integers
    int product;      //CALC & OUT - Product of two Integers
    int largest;      //CALC & OUT - Largest of two Integers
    float average;    //CALC & OUT - Average of two Integers
    
	/************************************************************************
	 * HEADER - Outputs the program Header
	 ***********************************************************************/
	PrintLabHeader("Michael McDermott and Kostyantyn S.",
                   "Introduction to Functions", 13, 'L');
	
	runCount = 0;
	
    do
    {
        continueRun = true;
        
        /********************************************************************
    	 * INPUT - Prompts the user and reads in two inputs to be manipulated
    	 *     with various functions. Exits if the first value entered is
    	 *     -999.
    	 *******************************************************************/
        cout << left;
        
        cout << setw(PROMPT_WIDTH) << "Enter the first integer: ";
        cin  >> n1;
        cin.ignore(10000, '\n');
        
        if (n1 == -999)
        {
            continueRun = false;
        } //if (n1 == -999)
        
        if (continueRun)
        {
            runCount ++;
            
            cout << setw(PROMPT_WIDTH) <<  "Enter the second integer: ";
            cin  >> n2;
            cin.ignore(10000, '\n');
            
            /****************************************************************
        	 * PROCESSING - Calls various functions to manipulate the two 
             * input integers for either a sum, a product, finding the 
             * largest between them or an average.
        	 ***************************************************************/
            
            sum     = AddTwoInts(n1, n2);
            product = MultiplyTwoInts(n1, n2);
            largest = FindLargest(n1, n2);
            average = AverageTwoInts(n1, n2);
            
            /****************************************************************
        	 * OUTPUT - Outputs the sum, the product, the largest value and 
             * the average of the two integers.
        	 ***************************************************************/
        	
        	cout << "\n-----------------------------------------------\n";
        	cout << "Run #" << runCount << " Results: ";
        	cout << "\n-----------------------------------------------\n\n";
        	
        	cout << left  << setw(OUTPUT_WIDTH) << "\tThe SUM is: ";
            cout << right << setw(RESULT_WIDTH) << sum     << "\n";
            
            cout << left  << setw(OUTPUT_WIDTH) << "\tThe PRODUCT is: ";
            cout << right << setw(RESULT_WIDTH) << product << "\n";
            
            cout << left  << setw(OUTPUT_WIDTH) << "\tThe LARGEST is: ";
            cout << right << setw(RESULT_WIDTH) << largest << "\n";
            
            cout << left  << setw(OUTPUT_WIDTH) << "\tThe AVERAGE is: ";
            cout << right << setw(RESULT_WIDTH) << average << "\n";
                 
            cout << "\n-----------------------------------------------\n\n";
            
        } //if (continueRun)
            
        cout << right;
        
    } while (continueRun);
    
    cout << "\n\nThank you for using this program.\n";
    
    cin.ignore(10000, '\n');
	                            
	return 0;
}

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

void PrintLabHeader(string names, string asName, int asNum, char asType)
{
    // Formatting constant
    const int COPY_WIDTH = 13; //12 + terminator
    
    // Output constants
    const char  CLASS[]        = "CS150";
	const char  SECTION[]      = "MW: 3:30pm - 5:20pm";
    
    // Variable declarations
    char type[COPY_WIDTH];
    
    if (toupper(asType) == 'L')
    {
        strncpy(type, "Lab #", COPY_WIDTH);
    }
    else if (toupper(asType) == 'A')
    {
        strncpy(type, "Assignment #", COPY_WIDTH);
    }
    
    cout << left;
	cout << "******************************************************\n";
	cout << "* PROGRAMMER(S) : "     << names                         <<endl;
	cout << "* "         << setw(14) << "CLASS"  << ": "   << CLASS   <<endl;
	cout << "* "         << setw(14) << "SECTION"<< ": "   << SECTION <<endl;
	cout << "* " << type << setw(9)  << asNum    << ": "   << asName  <<endl;
	cout << "******************************************************\n\n";
	cout << right;
}

/****************************************************************************
 * Function AddTwoInts:
 * --------------------------------------------------------------------------
 *      Accepts two integers and returns the sum of them.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value prior to
 *  calling the function:
 *          num1        //IN  - First Integer to be added
 *          num2        //IN  - Second Integer to be added
 *
 *          sum         //OUT - The sum of two integers
 *
 * POST-CONDITIONS
 *      This function will output the sum of two integers
 ***************************************************************************/
int AddTwoInts(int num1, int num2)
{
    int sum;
    
    sum = num1 + num2;
    
    return sum;
}

/****************************************************************************
 * Function MultiplyTwoInts:
 * --------------------------------------------------------------------------
 *      Accepts two integers and returns the product of them.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value prior to
 *  calling the function:
 *          num1        //IN  - First Integer to be multiplied
 *          num2        //IN  - Second Integer to be multiplied
 *
 *          product     //OUT - The product of two integers
 *
 * POST-CONDITIONS
 *      This function will output the product of two integers
 ***************************************************************************/
int MultiplyTwoInts(int num1, int num2)
{
    int product;
    
    product = num1 * num2;
    
    return product;
}

/****************************************************************************
 * Function FindLargest:
 * --------------------------------------------------------------------------
 *      Accepts two integers and returns the largest of them.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value prior to
 *  calling the function:
 *          num1        //IN  - First Integer to be compared
 *          num2        //IN  - Second Integer to be compared
 *
 *          largest     //OUT - The largest of two integers
 *
 * POST-CONDITIONS
 *      This function will output the largest of two integers
 ***************************************************************************/
int FindLargest(int num1, int num2)
{
    int largest;
    
    if (num1 > num2)
    {
        largest = num1;
    }
    else
    {
        largest = num2;
    }
    
    return largest;
}

/****************************************************************************
 * Function AverageTwoInts:
 * --------------------------------------------------------------------------
 *      Accepts two integers and returns the average of them.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value prior to
 *  calling the function:
 *          num1        //IN  - First Integer, of two, to be averaged
 *          num2        //IN  - Second Integer, of two, to be averaged
 *
 *          average     //OUT - The average of two integers
 *
 * POST-CONDITIONS
 *      This function will output the average of two integers
 ***************************************************************************/
float AverageTwoInts(int num1, int num2)
{
    float average;
    
    average = AddTwoInts(num1, num2) / 2.0;
    
    return average;
}
