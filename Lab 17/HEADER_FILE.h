/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND ADAM QUARANTA
 * STUDENT IDs   : W7216875 & W7241913
 * LAB #17       : ARRAY TRAIN
 * CLASS	     : CS 150
 * DUE DATE	     : 5/01/2017
 ***************************************************************************/
 
// This file is called HEADER_FILE.h
#ifndef HEADER_FILE_H_
#define HEADER_FILE_H_

// Preprocessor directives go here
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

// Prototypes go here
// This function accepts a series of parameters to output a heading
void PrintHeader(string names,       //IN - Name(s) of Student(s)
                 string asName,      //IN - Assignment number
                 int asNum,          //IN - Assignment name
                 char asType);       //IN - 'A'ssignment or 'L'ab
                 

// Initializes an array of type Integer                     
void InitializeArray(int integerArray[],    //IN - an array of integers
                     const int AR_SIZE,     //IN - size of the passed array
                     int value);            //IN - value to be stored at
                                            //     specified array index
                     
// Clears a String Array of all String Values in its indices
void ClearStringArray(string stringArray[], //IN - an array of strings
                      const int AR_SIZE);   //IN - size of the passed array
                      
// Reads Input from File directly into the arrays
void InputArray(int integerArray[],         //IN - an array of integers
                string stringArray[],       //IN - an array of strings
                const int AR_SIZE,          //IN - size of the passed array
                ifstream &inFile);          //IN/OUT - File I/O Assist

// Returns Index of Greatest Integer in an Array
int FindGreatestIntArray(const int INTEGER_ARRAY[], //IN - array of integers
                         const int AR_SIZE);        //IN - size of array
                         
// Returns number of times a value occurs in array
int ArrayTrackValue(const int INTEGER_ARRAY[],      //IN - array of integers
                    const int AR_SIZE,              //IN - size of array
                    int trackValue);                //IN - searching for
                                                    //     integer value

// Finds Index of a specific String
int FindStringInArray(const string STRING_ARRAY[],  //IN - array of strings
                      const int AR_SIZE,            //IN - size of array
                      string findMe);               //IN - searching for
                                                    //     string value

// Outputs a Formatted Table of Names and Ages
void OutputArray(const int INTEGER_ARRAY[],         //IN - array of integers
                 const string STRING_ARRAY[],       //IN - array of strings
                 const int AR_SIZE,                 //IN - size of arrays
                 ofstream &outFile);                //IN - File I/O Assist

// Sums up the Integers in an Array
int SumIntegerArray(const int INTEGER_ARRAY[],      //IN - array of integers
                    const int AR_SIZE);             //IN - size of array
                    
// Averages the Integers in an Array
double AverageIntegerArray(const int INTEGER_ARRAY[], //IN - array of
                                                      //     integers
                           const int AR_SIZE);        //IN - size of array


#endif  /* HEADER_FILE_H_ */

// To include this file
// #include "HEADER_FILE.h"
