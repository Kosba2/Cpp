// This file is called HEADER_FILE.h
#ifndef HEADER_FILE_H_
#define HEADER_FILE_H_

// Preprocessor directives go here
#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <fstream>
using namespace std;

// Global variables go here


// Prototypes go here
// This function accepts a series of parameters to output a heading
void PrintLabHeader(string names,    //IN       - Name(s) of Student(s)
                    string asName,   //IN       - Assignment number
                    int asNum,       //IN       - Assignment name
                    char asType,     //IN       - 'A'ssignment or 'L'ab
                    ofstream &fout); //IN & OUT - I/O Assist

// This function will output a very specific, formatted, set of instructions
void OutputInstructions(ofstream &fout);    //IN & OUT - I/O Assist

// This function prompts for an input of player names
void GetPlayerNames(string   &player1Name,  //IN & OUT - Name of Player 1
                    string   &player2Name,  //IN & OUT - Name of Player 2
                    ifstream &fin,          //IN & OUT - I/O Assist
                    ofstream &fout);        //IN & OUT - I/O Assist
                    
// This function will accept a character as input, compare it against valid
// inputs, and will keep error checking until it receives a valid response.
char GetAndCheckCharResponse(ifstream &fin,     //IN & OUT - I/O Assist
                             ofstream &fout);   //IN & OUT - I/O Assist

// This function will go through the process of a single player's turn
int PlayOneTurn(string playerName,  //IN       - Name of current player
                ifstream &fin,      //IN & OUT - I/O Assist
                ofstream &fout);    //IN & OUT - I/O Assist

// This function will use a time-based seed to call for a random number
// between 1 and 6
int RollDie();

// This function will use the randomly generated number to output relevant
// ASCII Art of the dice.
void DisplayDie(int dieRandom,    //IN       - Used for selecting ASCII Art
                ofstream &fout);  //IN & OUT - I/O Assist

// This function compares the rolls for each player and determines which has
// the greater roll, and using that, outputs the name, if a particular one,
// of the winner, or both if not.
void DisplayWinner(string player1Name,  //IN - Name of Player 1
                   int player1Roll,     //IN - Roll made by Player 1
                   string player2Name,  //IN - Name of Player 2
                   int player2Roll,     //IN - Roll made by Player 2
                   ofstream &fout);     //IN & OUT - I/O Assist

// This function serves the slight purpose of delaying the continuation of
// the program by prompting for an input of a newline character.
void PressEnterToRoll(ifstream &fin,     //IN & OUT - I/O Assist
                      ofstream &fout);   //IN & OUT - I/O Assist
                
#endif  /* HEADER_FILE_H_ */

// To include this file
// #include "HEADER_FILE.h"
