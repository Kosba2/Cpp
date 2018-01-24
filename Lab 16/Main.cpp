/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND TIANHAO HUANG
 * STUDENT IDs   : W7216875 & W7220990
 * LAB #16       : OOP - FLO'S PARTY PLANNER
 * CLASS	     : CS 150
 * DUE DATE	     : 4/26/2017
 ***************************************************************************/
 
#include "HEADER_FILE.h"

int main()
{
    // Variables
	Guest macy;        // CALC & OUT - Guest object for outputting meal
	Guest sheldon;     // CALC & OUT - Guest object for outputting meal
	Guest johnson;     // CALC & OUT - Guest object for outputting meal
	Guest rowe;        // CALC & OUT - Guest object for outputting meal
	Guest brown;       // CALC & OUT - Guest object for outputting meal
	
	// Constructor Test Variable
	Guest test("Johnny Test", 88, true, true); // CALC & OUT - Guest Object
	
	// Guest Variables
	string guestName;       // CALC & OUT - Each guest's name
	string guestFood;       // CALC & OUT - Each guest's preferred food
	string guestDrink;      // CALC & OUT - Each guest's preferred drink
	
	// Outputs the program Header
	PrintHeader("Tianhao Huang and Kostyantyn Shumishyn", 
                "OOP - Flo's Party Planner", 16, 'L');
    
    // Initializes all Guest Objects   
    macy.SetAll("Pat Macy", 21, true, false);
    sheldon.SetAll("Dixie Sheldon", 6, false, false);
    johnson.SetAll("Al Johnson", 35, true, false);
    rowe.SetAll("Laura Rowe", 5, false, true);
    brown.SetAll("Pricilla Brown", 16, true, true);
    
    // Macy's Output
    guestName  = macy.GetName();
    guestFood  = DetermineSnack(macy);
    guestDrink = DetermineDrink(macy);
    OutputGuestDetails(guestName, guestFood, guestDrink);
    
    // Sheldon's Output
    guestName  = sheldon.GetName();
    guestFood  = DetermineSnack(sheldon);
    guestDrink = DetermineDrink(sheldon);
    OutputGuestDetails(guestName, guestFood, guestDrink);
    
    
    
    
    
    
    // Johnson's Output
    guestName  = johnson.GetName();
    guestFood  = DetermineSnack(johnson);
    guestDrink = DetermineDrink(johnson);
    OutputGuestDetails(guestName, guestFood, guestDrink);
    
    // Rowe's Output
    guestName  = rowe.GetName();
    guestFood  = DetermineSnack(rowe);
    guestDrink = DetermineDrink(rowe);
    OutputGuestDetails(guestName, guestFood, guestDrink);
    
    // Brown's Output
    guestName  = brown.GetName();
    guestFood  = DetermineSnack(brown);
    guestDrink = DetermineDrink(brown);
    OutputGuestDetails(guestName, guestFood, guestDrink);
    
    // Test Output
    cout << "--------------------------------------\n";
    cout << "Bonus Output to test Full Constructor:\n";
    cout << "--------------------------------------\n\n";
    
    guestName  = test.GetName();
    guestFood  = DetermineSnack(test);
    guestDrink = DetermineDrink(test);
    OutputGuestDetails(guestName, guestFood, guestDrink);
    
	cin.ignore();
	return 0;
}
