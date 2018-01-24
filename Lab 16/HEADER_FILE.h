/****************************************************************************
 * AUTHORS       : KOSTYANTYN SHUMISHYN AND TIANHAO HUANG
 * STUDENT IDs   : W7216875 & W7220990
 * LAB #16       : OOP - FLO'S PARTY PLANNER
 * CLASS	     : CS 150
 * DUE DATE	     : 4/26/2017
 ***************************************************************************/
 
// This file is called HEADER_FILE.h
#ifndef HEADER_FILE_H_
#define HEADER_FILE_H_

// Preprocessor directives go here
#include <iostream>
#include <iomanip>
#include <string>
#include "GUEST_HEADER.h"
using namespace std;

// Prototypes go here
// This function accepts a series of parameters to output a heading
void PrintHeader(string names,       //IN - Name(s) of Student(s)
                 string asName,      //IN - Assignment number
                 int asNum,          //IN - Assignment name
                 char asType);       //IN - 'A'ssignment or 'L'ab
                 
// This function will determine which Snack the Guest will receive based on
// that guest's food preferences.
string DetermineSnack(Guest hungryGuest);  //IN - Guest object wanting snack

// This function will determine which Drink the Guest will receive based on
// that guest's beverage preferences.
string DetermineDrink(Guest thirstyGuest); //IN - Guest object wanting drink

// This function will accept a guest's name and their food choices to output
// a simple statement in regards to what they get.
void OutputGuestDetails(string guestName,  //IN - Guest's name
                        string food,       //IN - Guest's Food
                        string drink);     //IN - Guest's Drink
                  
#endif  /* HEADER_FILE_H_ */

// To include this file
// #include "HEADER_FILE.h"
