/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND KEVIN BARRETT
 * STUDENT IDs   : W7216875 & W7247110
 * LAB #15       : Intro to OOP
 * CLASS	     : CS 150
 * DUE DATE	     : 4/24/2017
 ***************************************************************************/
#include "HEADER_FILE.h"

int main()
{
    // Variables
	Sheep black;
	Sheep white;
	
	string bleatPrompt;
	bool bleating;
	
	string nameInput;
    int ageInput;
    int heightInput;
	int weightInput;
	char bleatingStatus;
	
	string isBlackBleating;
	string isWhiteBleating;
	
	
	// Outputs the program Header
	PrintHeader("Kevin Barrett and Kostyantyn Shumishyn", 
                "Intro to Object Oriented Programming", 15, 'L');
    
    // Input for Black Sheep
    // Name
    cout << "Please Input the first Sheep's name: ";
    cin >> nameInput;
    cin.ignore();
    black.SetName(nameInput);
    
    // Age
    cout << "Please Input " << black.GetName() << "'s age (years): ";
    cin >> ageInput;
    cin.ignore();
    black.SetAge(ageInput);
    
    // Height
    cout << "Please Input " << black.GetName() << "'s height (in.): ";
    cin >> heightInput;
    cin.ignore();
    black.SetHeight(heightInput);  
    
    // Weight
    cout << "Please Input " << black.GetName() << "'s weight (lbs): ";
    cin >> weightInput;
    cin.ignore();
    black.SetWeight(weightInput); 
    
    // Bleating
    bleatPrompt = "Is " + black.GetName() + " bleating";
    bleatingStatus = GetAndCheckCharResponse(bleatPrompt);
    black.SetBleat(bleatingStatus == 'Y');
    cout << endl << endl;
    
    // Outputs Summary
    black.OutputSheepDetails();
    
    
    // Input for White Sheep
    // Name
    cout << "Please Input the second Sheep's name: ";
    cin >> nameInput;
    cin.ignore();
    white.SetName(nameInput);
    
    // Age
    cout << "Please Input " << white.GetName() << "'s age (years): ";
    cin >> ageInput;
    cin.ignore();
    white.SetAge(ageInput);
    
    // Height
    cout << "Please Input " << white.GetName() << "'s height (in.): ";
    cin >> heightInput;
    cin.ignore();
    white.SetHeight(heightInput);
    
    // Weight
    cout << "Please Input " << white.GetName() << "'s weight (lbs): ";
    cin >> weightInput;
    cin.ignore();
    white.SetWeight(weightInput);
    
    // Bleating
    bleatPrompt = "Is " + white.GetName() + " bleating";
    bleatingStatus = GetAndCheckCharResponse(bleatPrompt);
    white.SetBleat(bleatingStatus == 'Y');
    cout << endl;

    // Outputs Summary
    white.OutputSheepDetails();
    
    
    
    
    
    
    
    
    
    // Makes black sheep bleat
    black.SetBleat(true);
    
    // Checks Whether Black is bleating
    if (black.GetBleat())
    {
        isBlackBleating = "Yes";
    }
    else
    {
        isBlackBleating = "No";
    }
    
    // Checks Whether Black is bleating
    if (white.GetBleat())
    {
        isWhiteBleating = "Yes";
    }
    else
    {
        isWhiteBleating = "No";
    }
    
    // Outputs bleat status for both sheep
    cout << "Is " << black.GetName() << " bleating? " << isBlackBleating;
    cout << endl;
    cout << "Is " << white.GetName() << " bleating? " << isWhiteBleating;
    cout << endl;
    
	cin.ignore();
	return 0;
}
