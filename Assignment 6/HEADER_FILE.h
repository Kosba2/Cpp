// This file is called HEADER_FILE.h
#ifndef HEADER_FILE_H_
#define HEADER_FILE_H_

// Preprocessor directives go here
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

// Global variables go here


// Prototypes go here
// This function accepts a series of parameters to output a heading
void PrintHeader(string names,       //IN       - Name(s) of Student(s)
                    string asName,      //IN       - Assignment number
                    int asNum,          //IN       - Assignment name
                    char asType,        //IN       - 'A'ssignment or 'L'ab
                    ofstream &fout);    //IN & OUT - I/O Assist

// This function will assign all the relevant information for a purchase
void GetSalesInfo(int &accNum,          //     OUT - Account Number Input
                  int &month,           //     OUT - Month integer Input
                  int &day,             //     OUT - Day integer Input
                  int &year,            //     OUT - Year integer Input
				  char &countryCode,    //     OUT - Error Checked Char
                  double &saleAmount,   //     OUT - Sale amount (before tax)
                  int &weight,          //     OUT - Weight of Item
                  ifstream &fin,        //IN & OUT - File I/O Assist
                  ofstream &fout);      //IN & OUT - File I/O Assist
                  
// This function calculates and returns the amount discounted
double CalcDiscount(int month,          //IN - Month to determine discount
                    double saleAmount); //IN - Sale amount to calc discount
                    
// This function calculates and returns the amount taxed
double CalcSalesTax(char countryCode,  //IN       - Country code to find tax
                    double saleAmount, //IN       - Amount to calculate tax
                    ofstream &fout);   //IN & OUT - File I/O Assist
                    
// This function calculates and returns the shipping cost
double CalcShipping(int weight);       //IN - Used to determine shipping cost

// This function formats an output of all the relevant information
void OutputInvoice(int accNum,         //IN       - Account Number for Output
                   int month,          //IN       - Month for formatted date
                   int day,            //IN       - Day for formatted date
                   int year,           //IN       - Year for formatted date
				   char countryCode,   //IN       - Code used to get County
                   double saleAmount,  //IN       - Output original amount
                   double discount,    //IN       - Outputs amount saved
                   double salesTax,    //IN       - Outputs amount taxed
                   double shipping,    //IN       - Outputs shipping cost
                   double totalDue,    //IN       - Outputs the net cost
                   ofstream &fout);    //IN & OUT - File I/O Assist
                  
#endif  /* HEADER_FILE_H_ */

// To include this file
// #include "HEADER_FILE.h"
