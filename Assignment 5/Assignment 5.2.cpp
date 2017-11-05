/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN
 * STUDENT IDs   : W7216875
 * Assignment #5 : MILITARY ACADEMY
 * CLASS	     : CS 150
 * DUE DATE	     : 4/05/2017
 ***************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

//PROTOTYPE(S)
// This function accepts a series of paramaters to output a heading
void PrintLabHeader(string names,   //IN  - Name(s) of Student(s)
                    string asName,  //IN  - Assignment number
                    int asNum,      //IN  - Assignment name
                    char asType);   //IN  - 'A'ssignment or 'L'ab

int main()
{	
    /************************************************************************
 	 * CONSTANTS
 	 * ----------------------------------------------------------------------
     * USED FOR CALCULATION
     * ----------------------------------------------------------------------
     * MIN_HEIGHT    : Holds the value for minimum height allowed
     * MAX_HEIGHT    : Holds the value for maximum height allowed
     * MIN_WEIGHT    : Holds the value for minimum weight allowed
     * MAX_WEIGHT    : Holds the value for maximum weight allowed
     *
     * M_MIN_HEIGHT  : Holds the bound for minimum male height
     * M_MAX_HEIGHT  : Holds the bound for maximum male height
     * M_MIN_WEIGHT  : Holds the bound for minimum male weight
     * M_MAX_WEIGHT  : Holds the bound for maximum male weight
     *
     * F_MIN_HEIGHT  : Holds the bound for minimum female height
     * F_MAX_HEIGHT  : Holds the bound for maximum female height
     * F_MIN_WEIGHT  : Holds the bound for minimum female weight
     * F_MAX_WEIGHT  : Holds the bound for maximum female weight
     * ----------------------------------------------------------------------
     * USED FOR FORMATTING
     * ----------------------------------------------------------------------
	 * PROMPT_WIDTH  : Holds formatted Prompt width
	 ***********************************************************************/
	const int MIN_HEIGHT   = 24;
    const int MAX_HEIGHT   = 110;
    const int MIN_WEIGHT   = 50;
    const int MAX_WEIGHT   = 1400;
    
    const int M_MIN_HEIGHT = 65;
    const int M_MAX_HEIGHT = 80;
    const int M_MIN_WEIGHT = 130;
    const int M_MAX_WEIGHT = 250;
    
    const int F_MIN_HEIGHT = 62;
    const int F_MAX_HEIGHT = 75;
    const int F_MIN_WEIGHT = 110;
    const int F_MAX_WEIGHT = 185;
    	
	const int PROMPT_WIDTH = 8;
    
	// Variable declarations
	
    // Input variables
    char gender;           //IN & CALC  - 'M' for Male or 'F' for Female
    int height;            //IN & CALC  - Integer value for height (inches)
    int weight;            //IN & CALC  - Integer value for weight (lbs)
    
    // Processing variables - Grouped based on similar functionality
    int numApplied;        //CALC       - Total applications
    
    bool genderInvalid;    //CALC       - Holds the condition bool for gender
    bool heightInvalid;    //CALC       - Holds the condition bool for height
    bool weightInvalid;    //CALC       - Holds the condition bool for weight
    
    bool genderContinue;   //CALC       - Bool for Exiting the Program
    bool measureContinue;  //CALC       - Bool for Exiting the Program
    
    bool genMale;          //CALC       - Bool for Male
    bool genFemale;        //CALC       - Bool for Female
    
    bool heightCheckFemale;//CALC       - Bool for checking Female Height
    bool heightCheckMale;  //CALC       - Bool for checking Male Height
    
    bool weightCheckFemale;//CALC       - Bool for checking Female Weight
    bool weightCheckMale;  //CALC       - Bool for checking Male Weight
    
    bool heightOk;         //CALC       - If true, height is acceptable
    bool weightOk;         //CALC       - If true, weight is acceptable

    // Output variables
    int numAccepted;       //CALC & OUT - Number of accepted
    float averageAccepted; //CALC & OUT - Average of applications
    
	/************************************************************************
	 * HEADER - Outputs the program Header
	 ***********************************************************************/
	PrintLabHeader("Kostyantyn S.", "Military Academy", 5, 'A');
	
	// Note: 
    // I overcommented this code a bit, but only because it helped me 
    // debug/read my own code aswell.
	
    genderContinue = true;
    numApplied = 0;
    numAccepted = 0;
    
    while(genderContinue)
    {
        cout << "Please enter the candidate's information"
             << " (enter 'X' to exit).";
        
        // Prompts for 'M'ale or 'F'emale or e'X'it, with error checking
        do
        {   
            cout << setw(PROMPT_WIDTH) << "\nGender: ";
            cin.get(gender);
            cin.ignore(10000, '\n');
            
            //Each is T if male or female respectively
            genMale        = (gender == 'm' || gender == 'M');
            genFemale      = (gender == 'f' || gender == 'F');
            
            //T if not closing program
            genderContinue = (gender != 'x' && gender != 'X');
            
            //genderInvalid is T if not male, not female and continuing
            genderInvalid  = (!genMale && !genFemale && genderContinue); 
            
            if(genderInvalid)
            {
               cout << "***** Invalid gender; please enter M or F *****";
            }
            
        } while(genderInvalid);
        
        //Bridges gap between Gender and Height/Weight while loops and allows
        //for repetition. Probably a result of bad coding that I had to do
        //this.
        measureContinue = genderContinue;
        
        while (measureContinue)
        {    
            // Prompts for a reasonable height entry, with error checking
            do
            {   
                cout << setw(PROMPT_WIDTH) << "Height: ";
                cin  >> height;
                cin.ignore(10000, '\n');
                
                //heightInvalid T if height isn't within a reasonable range
                heightInvalid = (height < MIN_HEIGHT || height > MAX_HEIGHT); 
                
                if(heightInvalid)
                {
                   cout << "***** Invalid height; please enter a height in"
                        << " inches between 24 and 110. *****\n";
                }
            } while(heightInvalid);
            
            // Prompts for a reasonable weight entry, with error checking
            do
            {   
                cout << setw(PROMPT_WIDTH) << "Weight: ";
                cin  >> weight;
                cin.ignore(10000, '\n');
                
                //weightInvalid T if weight isn't within a reasonable range
                weightInvalid = (weight < MIN_WEIGHT || weight > MAX_WEIGHT); 
                
                if(weightInvalid)
                {
                   cout << "***** Invalid weight; please enter a weight in "
                        << "lbs between 50 and 1400. *****\n";
                }
            } while(weightInvalid);
                
                
            // Checks Female Height bounds
            heightCheckFemale = (height >= F_MIN_HEIGHT &&
                                 height <= F_MAX_HEIGHT);
            // Checks Male Height bounds
            heightCheckMale   = (height >= M_MIN_HEIGHT &&
                                 height <= M_MAX_HEIGHT);
            
            // Determines whether the Height is acceptable for either Gender
             heightOk = (genFemale && heightCheckFemale) ||
                        (genMale && heightCheckMale);
                       
    
            // Checks Female Weight bounds
            weightCheckFemale = (weight >= F_MIN_WEIGHT &&
                                 weight <= F_MAX_WEIGHT);
            // Checks Male Weight bounds
            weightCheckMale   = (weight >= M_MIN_WEIGHT &&
                                 weight <= M_MAX_WEIGHT);
            
            // Determines whether the Weight is acceptable for either gender
            weightOk = (genFemale && weightCheckFemale) ||
                        (genMale && (weightCheckMale));
        
            // Outputs feedback based on measurements
            if(!heightOk && !weightOk)
            {
                cout << "\n\nThis candidate has been rejected based on the"
                     << " HEIGHT and WEIGHT requirements.\n\n\n\n";
            }
            else if(!heightOk)
            {
                cout << "\n\nThis candidate has been rejected based on the"
                     << " HEIGHT requirement.\n\n\n\n";
            }
            else if(!weightOk)
            {
                cout << "\n\nThis candidate has been rejected based on the"
                     << " WEIGHT requirement.\n\n\n\n";
            }
            else
            {
                cout << "\n\nThis candidate has been ACCEPTED!\n\n\n\n";
                // Increments accepted applications only
                numAccepted++;
            }
            
            // Increments total applications regardless of not passing
            numApplied++;
            
            // Breaks out of measurement related loop only, so gender is
            // prompted for again.
            measureContinue = false;
            
        } //while(measureContinue)
        
    } //while(genderContinue)
    
    // If there were applications, print out statistics about them.
    if (numApplied > 0)
    {
        averageAccepted = (numAccepted / float(numApplied)) * 100;
        
        cout << "\n\n" << numAccepted << " candidate(s) accepted!" << endl;
        
        cout << "That's " << fixed << setprecision(0) << averageAccepted 
             << "%!" << endl;
    }
    
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
    int adj;
    
    if (toupper(asType) == 'L')
    {
        strncpy(type, "Lab #", COPY_WIDTH);
        adj = 8;
        
    }
    else if (toupper(asType) == 'A')
    {
        strncpy(type, "Assignment #", COPY_WIDTH);
        adj = 0;
    }
    
    cout << left;
	cout << "******************************************************\n";
	cout << "* PROGRAMMER(S) : "     << names                         <<endl;
	cout << "* "         << setw(14) << "CLASS"  << ": "   << CLASS   <<endl;
	cout << "* "         << setw(14) << "SECTION"<< ": "   << SECTION <<endl;
	cout << "* " << type << setw(adj)<< asNum    << " : "  << asName  <<endl;
	cout << "******************************************************\n\n";
	cout << right;
} // Due to tech issues, you said it was fine to keep this function here
