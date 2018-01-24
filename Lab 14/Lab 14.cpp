/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND JOEL AOTO
 * STUDENT IDs   : W7216875 & W7262855
 * LAB #14       : HIGH ROLLER
 * CLASS	     : CS 150
 * DUE DATE	     : 4/17/2017
 ***************************************************************************/
#include "HEADER_FILE.h"

int main()
{
	// Variables
    string player1Name;
	string player2Name;
    
    int playerOneRoll;
	int playerTwoRoll;
	
	bool playGame;
	
	
    // Generates a Random Seed based on time
    srand(time(NULL));
    
	// Outputs the program Header
	PrintLabHeader("Kostyantyn S. and Joel Aoto", "High Roller", 14, 'L');
	
	// Outputs High Roller Instructions
	OutputInstructions();
	
	// Prompts for input of the name of each player
	GetPlayerNames(player1Name, player2Name);
	
	
	// Determines whether player wishes to play.
	playGame = (GetAndCheckCharResponse() == 'Y');
    
    while(playGame)
    {
        playerOneRoll = PlayOneTurn(player1Name);
        playerTwoRoll = PlayOneTurn(player2Name);
        
        DisplayWinner(player1Name, playerOneRoll,
                      player2Name, playerTwoRoll);
                      
        playGame = (GetAndCheckCharResponse() == 'Y');              
    }
    
    cout << "Thank you for playing :-)";
    
    cin.ignore(10000, '\n');
	                            
	return 0;
}
