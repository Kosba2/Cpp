/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND ROBERT ESPOSITO
 * STUDENT IDs   : W7216875 & W7180729
 * LAB #19       : ENUMERATED TYPES
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
using namespace std;

enum Seasons
{
    Winter, // 0
    Spring, // 1
    Summer, // 2
    Fall    // 3
};

// Prototypes go here
// This function accepts a series of parameters to output a heading
void PrintHeader(string names,       //IN - Name(s) of Student(s)
                 string asName,      //IN - Assignment number
                 int asNum,          //IN - Assignment name
                 char asType);       //IN - 'A'ssignment or 'L'ab
                 
// This function outputs the Menu and prompts the user for a choice of season
char GetSeason();

// This function receives a character and uses it to return a proper season
Seasons ConvertCharToSeason(char seasonChar); // IN - Character for Season

// This function receives a season datatype and returns an equivalent string
string ConvertSeasonToString(Seasons seasonChoice); // IN - Season type

// This function receives a season datatype and returns an equivalent fruit
// string
string ConvertSeasonToFruit(Seasons seasonChoice); // IN - Season type


#endif  /* HEADER_FILE_H_ */

// To include this file
// #include "HEADER_FILE.h"
