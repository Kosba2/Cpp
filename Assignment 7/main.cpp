/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN
 * STUDENT IDs   : W7216875
 * ASSIGNMENT #7 : MILITARY ACADEMY (OOP)
 * CLASS	     : CS 150
 * DUE DATE	     : 5/03/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

int main()
{
    /************************************************************************
 	 * CONSTANTS
     * ----------------------------------------------------------------------
	 * CALCULATION - USED FOR CALCULATIONS
     * ----------------------------------------------------------------------
	 * P_GENDER   : Holds Prompt for Gender
	 * P_HEIGHT   : Holds prompt for Height
	 * P_WEIGHT   : Holds prompt for Weight
	 * P_AGE      : Holds prompt for Age
	 *
	 * MIN_HEIGHT : Holds value for minimum valid height
	 * MAX_HEIGHT : Holds value for maximum valid height
	 * MIN_WEIGHT : Holds value for minimum valid weight
	 * MAX_WEIGHT : Holds value for maximum valid weight
	 * MIN_AGE    : Holds value for minimum valid age
	 * MAX_AGE    : Holds value for maximum valid age
     * ----------------------------------------------------------------------
	 * FORMATTING - USED FOR FORMATTING VARIOUS ASPECTS OF CODE
	 * ----------------------------------------------------------------------
	 * PROMPT_WIDTH : Max length of longest prompt
	 ***********************************************************************/
    // Constants
    const int PROMPT_WIDTH = 20;
    
    const string P_GENDER = "Gender (M/F):";
    const string P_HEIGHT = "Height (in inches):";
    const string P_WEIGHT = "Weight (in lbs):";
    const string P_AGE    = "Age:";
    
    const float MIN_HEIGHT = 30.5;
    const float MAX_HEIGHT = 100.0;
    
    const int MIN_WEIGHT   = 75;
    const int MAX_WEIGHT   = 1400;
    
    const int MIN_AGE      = 0;
    const int MAX_AGE      = 130;
    
    // Male Specific
    const float M_MIN_HEIGHT = 65.0;
    const float M_MAX_HEIGHT = 80.0;
    const int M_MIN_WEIGHT = 130;
    const int M_MAX_WEIGHT = 250;
    
    // Female Specific
    const float F_MIN_HEIGHT = 62.0;
    const float F_MAX_HEIGHT = 75;
    const int F_MIN_WEIGHT = 110;
    const int F_MAX_WEIGHT = 185;
    
    // Gender independent
    const int MIN_ACC_AGE  = 18;
    const int MAX_ACC_AGE  = 25;
    
    const char MALE        = 'M';
    const char FEMALE      = 'F';
    
    // Output Indents
    const int OUT_1 = 15;       // First Output Indent
    const int OUT_2 = 9;        // Second Output Indent
    const int OUT_3 = 6;        // Third Output Indent
    const int OUT_4 = 9;        // Fourth Output Indent
    const int OUT_5 = 9;        // Fifth Output Indent
    const int OUT_6 = 20;       // Sixth Output Indent
    
    
    // I/O Variables
    ofstream outFileA;       // OUT - Used for Outputting Accepted Applicants
    ofstream outFileR;        // OUT - Used for Outputting Rejected Applicants
    
    // Variables
    Candidate candidate;    // CALC - Used for Instantiating Information
    bool      accepted;     // CALC - Used to Determine acceptance
    bool      runProg;      // CALC - Used to determine exiting program
    
    bool      heightFailure;   // CALC - Used to determine height failure
    bool      weightFailure;   // CALC - Used to determine weight failure
    bool      ageFailure;      // CALC - Used to determine age failure
    
    string acceptedString;      // Holds String value for acceptance
    
    // Object Temp Variables
    string name;        // Temporarily holds Candidate's name
    int    age;         // Temporarily holds Candidate's age
    char   gender;      // Temporarily holds Candidate's gender
    float  height;      // Temporarily holds Candidate's height
    int    weight;      // Temporarily holds Candidate's weight
    
	// Outputs the program Header
	PrintHeader("Kostyantyn Shumishyn", "Military Academy (OOP)", 7, 'A');
    
    
    outFileA.open("outputAccepted.txt");
    outFileR.open("outputRejected.txt");
        
    // Prints Heading for Accepted Applicants
    outFileA << left;
    outFileA << setw(OUT_1) << "NAME";
    outFileA << setw(OUT_2) << "GENDER";
    outFileA << setw(OUT_3) << "AGE";
    outFileA << setw(OUT_4) << "HEIGHT";
    outFileA << setw(OUT_5) << "WEIGHT";
    outFileA << setw(OUT_6) << "ACCEPTANCE STATUS" << endl;
    
    outFileA << "---------------   ------   ---   ------   ------   "
             << "--------------------\n";
    
    // Prints Heading for Rejected Applicants
    outFileR << left;
    outFileR << setw(OUT_1) << "NAME";
    outFileR << setw(OUT_2) << "GENDER";
    outFileR << setw(OUT_3) << "AGE";
    outFileR << setw(OUT_4) << "HEIGHT";
    outFileR << setw(OUT_5) << "WEIGHT";
    outFileR << setw(OUT_6) << "ACCEPTANCE STATUS" << endl;
    
    outFileR << "---------------   ------   ---   ------   ------   "
             << "--------------------\n";
    
        
    // Initial Prompt
    cout << "Please enter the candidate's information. Enter \"Done\ "
         << "to exit\n";

    // Prompts for Name the very first time.    
    cout << left;
    cout << setw(PROMPT_WIDTH) << "Name: ";
    cout << right;
    getline(cin, name);
    
    runProg = (name != "Done" && name != "done");
    
    
    while (runProg)
    {
        // Prompts for Valid Gender
        gender = ValidateChars(P_GENDER, PROMPT_WIDTH, MALE, FEMALE);
        
        // Prompts for Valid Height
        height = ValidateFloat(P_HEIGHT, PROMPT_WIDTH,
                               MIN_HEIGHT, MAX_HEIGHT);
                               
        // Prompts for Valid Weight
        height = ValidateInt(P_WEIGHT, PROMPT_WIDTH,
                               MIN_WEIGHT, MAX_WEIGHT);
                               
        // Prompts for Valid Age
        age == ValidateInt(P_AGE, PROMPT_WIDTH,
                           MIN_AGE, MAX_AGE);
                           
        // Assigns all values into object
        candidate.SetAll(name, age, gender, height, weight);
        
        if (candidate.GetGender() == 'F')
        {
            heightFailure = !(height >= F_MIN_HEIGHT &&
                              height <= F_MAX_HEIGHT);
                              
            weightFailure = !(weight >= F_MIN_WEIGHT &&
                              weight <= F_MAX_WEIGHT);
            
            ageFailure    = !(age    >= MIN_ACC_AGE  &&
                              age    <= MAX_ACC_AGE);
            
            accepted = (!heightFailure) && (!weightFailure) && (!ageFailure);
        
        } // Checks requirements for a female
        
        else
        {
            heightFailure = !(height >= M_MIN_HEIGHT &&
                              height <= M_MAX_HEIGHT);
                              
            weightFailure = !(weight >= M_MIN_WEIGHT &&
                              weight <= M_MAX_WEIGHT);
            
            ageFailure    = !(age    >= MIN_ACC_AGE  &&
                              age    <= MAX_ACC_AGE);
            
            accepted = (!heightFailure) && (!weightFailure) && (!ageFailure);
            
        } // Checks requirements for a male
        
        
        
        if (accepted)
        {
            acceptedString = "Accepted";
            
            outFileA << endl;
            outFileA << left;
            outFileA << setw(OUT_1) << candidate.GetName();
            outFileA << setw(OUT_2) << candidate.GetGender();
            outFileA << setw(OUT_3) << candidate.GetAge();
            outFileA << setw(OUT_4) << candidate.GetHeight();
            outFileA << setw(OUT_5) << candidate.GetWeight();
            outFileA << setw(OUT_6) << acceptedString + "\n";
            outFileA << endl;
            
        }
        else
        {
            acceptedString = "Not Accepted (";
            
            
            if (ageFailure)
            {
                acceptedString += " age ";
            }
            if (weightFailure)
            {
                acceptedString += " weight ";
            }
            if (heightFailure)
            {
                acceptedString += " height ";
            }
            
            acceptedString += ")";
            
            outFileR << endl;
            outFileR << left;
            outFileR << setw(OUT_1) << candidate.GetName();
            outFileR << setw(OUT_2) << candidate.GetGender();
            outFileR << setw(OUT_3) << candidate.GetAge();
            outFileR << setw(OUT_4) << candidate.GetHeight();
            outFileR << setw(OUT_5) << candidate.GetWeight();
            outFileR << setw(OUT_6) << acceptedString + "\n";
            outFileR << endl;
        }
        
        // Secondary Prompt
        cout << endl;
        cout << "Please enter the candidate's information. Enter \"Done\ "
             << "to exit\n";
    
        // Prompts for Name the following times   
        cout << left;
        cout << setw(PROMPT_WIDTH) << "Name: ";
        cout << right;
        getline(cin, name);
        
        runProg = (name != "Done" && name != "done");
    }
    
    outFileA.close();
    outFileR.close();
    
    cout << "Thank you for using this program!";

    cin.ignore();
	return 0;
}
