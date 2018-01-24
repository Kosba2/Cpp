/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND ROBERT ESPOSITO
 * STUDENT IDs   : W7216875 & W7180729
 * LAB #19       : ENUMERATED TYPES
 * CLASS	     : CS 150
 * DUE DATE	     : 5/03/2017
 ***************************************************************************/
#include "HEADER_FILE.h"
int main()
{
    /************************************************************************
 	 * CONSTANTS
     * ----------------------------------------------------------------------
	 * OUTPUT - USED FOR OUTPUT
	 * ----------------------------------------------------------------------
	 * NUM_TEST_RUNS : Number of times the program is ran
	 ***********************************************************************/ 
    // Variables
	char    seasonChar;    // Represents the choice of season by user in char
	Seasons seasonChoice;  // Represents the choice in season datatype
	string  seasonString;  // Represents the choice in string datatype
	string  fruitString;   // Represents the choice in string data of Fruits
	bool    runProgram;    // Boolean for exiting program
	
	// Outputs the program Header
	PrintHeader("Robert Esposito and Kostyantyn Shumishyn", 
                "Enumerated Types", 19, 'L');
    
    // Makes sure to run the code at least once
    runProgram = true;
    
    while (runProgram)
    {
        // Prompts for Seasonal Input
        seasonChar = GetSeason();
        
        runProgram = (seasonChar != 'X');
        
        if (runProgram)
        {
            // Converts Char type to Season
            seasonChoice = ConvertCharToSeason(seasonChar);
            // Convert Season to String
            seasonString = ConvertSeasonToString(seasonChoice);
            // Convert Season to Fruit
            fruitString  = ConvertSeasonToFruit(seasonChoice);
            cout << "For " << seasonString  << ", you might want to "
                 << "try a " << fruitString << ".\n";
        }
    }
    cout << "\nThank you for using Fruit Selector!\n";
    
	cin.ignore();
	return 0;
}
