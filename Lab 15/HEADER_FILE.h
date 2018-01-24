// This file is called HEADER_FILE.h
#ifndef HEADER_FILE_H_
#define HEADER_FILE_H_

// Preprocessor directives go here
#include <iostream>
#include <iomanip>
#include <string>
#include "SHEEP_HEADER.h"
using namespace std;

// Global variables go here


// Prototypes go here
// This function accepts a series of parameters to output a heading
void PrintHeader(string names,       //IN       - Name(s) of Student(s)
                 string asName,      //IN       - Assignment number
                 int asNum,          //IN       - Assignment name
                 char asType);       //IN       - 'A'ssignment or 'L'ab
                 

// This function will use a prompt to get a valid 'Y' or 'N' response
char GetAndCheckCharResponse(string prompt);  //IN - Used for Prompting
                  
#endif  /* HEADER_FILE_H_ */

// To include this file
// #include "HEADER_FILE.h"
