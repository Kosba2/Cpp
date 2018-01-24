/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND ADAM QUARANTA
 * STUDENT IDs   : W7216875 & W7241913
 * LAB #17       : ARRAY TRAIN
 * CLASS	     : CS 150
 * DUE DATE	     : 5/01/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

int main()
{
    /************************************************************************
 	 * CONSTANTS
     * ----------------------------------------------------------------------
	 * FORMATTING - USED FOR FORMATTING VARIOUS ASPECTS OF CODE
	 * ----------------------------------------------------------------------
	 * AR_SIZE       : Size of the Array Expected from Input File
     * ----------------------------------------------------------------------
     * TEST_AGE_ONE  : Used for testing occurence of certain Ages
     * TEST_AGE_TWO  : Used for testing occurence of certain Ages
     * TEST_AMOUNT   : Used for counting number of Name Searches
	 ***********************************************************************/
    // Constants
    const int AR_SIZE = 6;
    
    const int TEST_AGE_ONE = 21;
    const int TEST_AGE_TWO = 23;
    const int TEST_AMOUNT = 3;
    
    // I/O Variables
    ifstream inFile;        // IN  - Used for Inputting Data from File
    ofstream outFile;       // OUT - Used for Outputting Data to File
    
    // Variables
    string nameArray [AR_SIZE] = {""};  // IN, CALC, OUT - Array of Names
    int     ageArray [AR_SIZE] = {0};   // IN, CALC, OUT - Array of Ages
    
    string name;           // CALC & OUT - Generic Variable for any name
    int arrayIndex;        // CALC & OUT - Generic Variable for any Indice
    int numOccurences;     // CALC & OUT - Generic Variable for Occurences
    
    int count;             // CALC       - Used for For Loops
    
    int sumOfAges;         // CALC & OUT - Used to Store Sum of Ages
    double averageOfAges;  // CALC & OUT - Used to Store Average of Ages
    
	// Outputs the program Header
	PrintHeader("Adam Quaranta and Kostyantyn Shumishyn", 
                "Array Train", 17, 'L');
    
    
    
    // First Task - Initialize Array of Ages to -1 and Names to Empty Strings
    InitializeArray( ageArray, AR_SIZE, -1);
    ClearStringArray(nameArray, AR_SIZE);
    
    
    
    // Second Task - Read Name and Age data from file to Arrays
    inFile.open("inputData.txt");
    InputArray(ageArray, nameArray, AR_SIZE, inFile);
    inFile.close();

    
    
    // Third Task - Finds oldest person and outputs name, age and index.
    arrayIndex = FindGreatestIntArray(ageArray, AR_SIZE);
    
    cout << "The oldest person is " << nameArray[arrayIndex]     << endl
         << "They are " << ageArray[arrayIndex] << " years old." << endl
         << "They are at Index " << arrayIndex  << " in both arrays.\n\n";
    
    
    
    // Fourth Task - Searches for number of instances of an age
    numOccurences = ArrayTrackValue(ageArray, AR_SIZE, TEST_AGE_ONE);
    cout << TEST_AGE_ONE << " appears " << numOccurences << " time(s). \n";
    
    numOccurences = ArrayTrackValue(ageArray, AR_SIZE, TEST_AGE_TWO);
    cout << TEST_AGE_TWO << " appears " << numOccurences << " time(s). \n\n";
    
    
    
    // Fifth Task - Searches for a person and outputs their information
    for (count = 0; count < TEST_AMOUNT; count++)
    {
        cout << "Please Input name of Person you're searching for: ";
        getline(cin, name);
        arrayIndex = FindStringInArray(nameArray, AR_SIZE, name);
        
        cout << endl;
        if (arrayIndex > -1)
        {
            cout << "Found " << name << " in Index " << arrayIndex << ".\n\n"
                 << "NAME: " << nameArray[arrayIndex] << endl
                 << "AGE:  " << ageArray[arrayIndex]  << endl << endl;
        } // Should only be valid array indices
        
        else
        {
            cout << name << " was not found.\n\n";
        } // (arrayIndex <= -1) only when person not found
    }
    
    
    // Sixth Task - Write Name and Age data from Array to file
    outFile.open("outputData.txt");
    OutputArray(ageArray, nameArray, AR_SIZE, outFile);
    outFile.close();
    
    
    
    // Seventh Task - Sum the Array of Ages
    sumOfAges = SumIntegerArray(ageArray, AR_SIZE);
    cout << "The Sum of the ages is " << sumOfAges << ".\n\n";
    
    
    
    // Eighth Task - Average the Array of Ages
    averageOfAges = AverageIntegerArray(ageArray, AR_SIZE);
    cout << "The Average of the ages is " << averageOfAges << ".\n\n";
    
    
    
    cin.ignore();
	return 0;
}
