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
    // I/O Variables
    ifstream fin;
    ofstream fout;
    
	// Variables
    string player1Name;
	string player2Name;
    
    int playerOneRoll;
	int playerTwoRoll;
	
	bool playGame;
	
    // Generates a Random Seed based on time
    srand(time(NULL));
	
	// Opens the Test Values File
	fin.open("InputFile.txt");
	fout.open("OutputFile.txt");
    
	// Outputs the program Header
	PrintLabHeader("Kostyantyn S. and Joel Aoto", "High Roller", 14, 'L', fout);
	
	// Outputs High Roller Instructions
	OutputInstructions(fout);
	
	// Prompts for input of the name of each player
	GetPlayerNames(player1Name, player2Name, fin, fout);
	
	
	// Determines whether player wishes to play.
	playGame = (GetAndCheckCharResponse(fin, fout) == 'Y');
    
    while(playGame)
    {
        playerOneRoll = PlayOneTurn(player1Name, fin, fout);
        playerTwoRoll = PlayOneTurn(player2Name, fin, fout);
        
        DisplayWinner(player1Name, playerOneRoll,
                      player2Name, playerTwoRoll, fout);
                      
        playGame = (GetAndCheckCharResponse(fin, fout) == 'Y');              
    }
    fin.close();
    
    fout << "Thank you for playing :-)";
    
    fout.close();
	                            
	return 0;
}
