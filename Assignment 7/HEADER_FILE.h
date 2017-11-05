/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN
 * STUDENT IDs   : W7216875
 * ASSIGNMENT #7 : MILITARY ACADEMY (OOP)
 * CLASS	     : CS 150
 * DUE DATE	     : 5/03/2017
 ***************************************************************************/
 
// This file is called HEADER_FILE.h
#ifndef HEADER_FILE_H_
#define HEADER_FILE_H_

// Preprocessor directives go here
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "CANDIDATE_HEADER.h"
using namespace std;

// Prototypes go here
// This function accepts a series of parameters to output a heading
void PrintHeader(string names,       //IN - Name(s) of Student(s)
                 string asName,      //IN - Assignment number
                 int asNum,          //IN - Assignment name
                 char asType);       //IN - 'A'ssignment or 'L'ab
                 
// This function receives a prompt and valid chars and error checks them
char ValidateChars(string prompt,    // Specific Binary Prompt
                   int adj,          // Value to format Prompt
                   char firstChar,   // First Valid character
                   char secondChar); // Second Valid character
                                  
// This function receives a prompt and a min/max int value for error check
int ValidateInt(string prompt,  // Prompt for a valid number
                int adj,        // Value to format Prompt
                int minVal,     // Inclusive minimum integer value
                int maxVal);    // Inclusive maximum integer value
                
// This function receives a prompt and a min/max float value for error check
float ValidateFloat(string prompt, // Prompt for a valid float
                    int adj,       // Value to format prompt
                    float minVal,  // Inclusive minimum float value
                    float maxVal); // Inclusive maximum float value
                
#endif  /* HEADER_FILE_H_ */

// To include this file
// #include "HEADER_FILE.h"
