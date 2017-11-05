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
	int count;
	double discount;
	double salesTax;
	double shipping;
	double totalDue;
	
    int accountNum;
    
    int month;
    int day;
    int year;
    
    char countryCode;
    
    double saleAmount;
    
    int weight;
	
	// Opens the Test Values File
	fin.open("InputFile.txt");
	fout.open("OutputFile.txt");
    
	// Outputs the program Header
	PrintHeader("Kostyantyn Shumishyn", "Functions", 6, 'A', fout);

    // Core Assignment Loop, runs 3 times because thats the number of 
    // provided test cases
    for (count = 1; count <= 3; count++)
    {
        GetSalesInfo(accountNum, month, day, year, countryCode, saleAmount,
                     weight, fin, fout);
        discount = CalcDiscount(month, saleAmount);
        totalDue = saleAmount - discount;
        
        salesTax = CalcSalesTax(countryCode, totalDue, fout);
        totalDue += salesTax;
        
        shipping = CalcShipping(weight);
        totalDue += shipping;
                
        OutputInvoice(accountNum, month, day, year, countryCode, saleAmount,
                      discount, salesTax, shipping, totalDue, fout);
    }
    
    fin.close();
    fout.close();
	                            
	return 0;
}

// Comment: I changed the order of prompts for Year and Day so I could do 
// an extra-thorough error check for a valid day. Hope thats okay.
