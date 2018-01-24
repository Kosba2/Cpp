/****************************************************************************
 * AUTHORS     : BRANKO ANDREWS & KOSTYANTYN SHUMISHYN
 * STUDENT IDs : W7251480 & W7216875
 * LAB #8      : Party Planner
 * CLASS	   : CS 150
 * DUE DATE	   : 3/01/2017
 ***************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

/****************************************************************************
 * PARTY PLANNER
 *---------------------------------------------------------------------------
 * This program will receive input from a user to help them decide which
 *      snacks and beverages their friend will be served.
 *---------------------------------------------------------------------------
 * INPUT:
 *     name          : The user's friend's name.                                                      
 *     age           : The user's friend's age.
 *     likeChocolate : Whether the user's friend likes chocolate.
 *     likeNuts      : Whether the user's friend likes nuts.
 *
 * OUTPUT:
 *     name          : The user's name.
 ***************************************************************************/

int main()
{
    /************************************************************************
 	 * CONSTANTS
     * ----------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING AS WELL AS FORMATTING
	 * ----------------------------------------------------------------------
	 * NAME1         : 1st Programmer's Name
	 * NAME2         : 2nd Programmer's Name
	 * CLASS         : Students' Course
	 * SECTION       : Class Days and Times
	 * LAB_NUM       : Lab Number (specific to this Lab)
	 * LAB_NAME      : Title of the Lab
     * ----------------------------------------------------------------------
     * USED FOR FORMATTING
     * ----------------------------------------------------------------------
	 * COL_WIDTH     : Holds formatted column width
	 * NAME_LENGTH   : Length of a name C-String plus Null Terminator
	 ***********************************************************************/
	 
	const char NAME1[]        = "Branko Andrews";
	const char NAME2[]        = "Kostyantyn S.";
    const char CLASS[]        = "CS150";
	const char SECTION[]      = "MW: 3:30pm - 5:20pm";
	const int  LAB_NUM        = 8;
	const char LAB_NAME[]     = "Party Planner";
	
	const int COL_WIDTH       = 30;
	const int NAME_LENGTH     = 25;
	
	// variable declarations will go here
	char name[NAME_LENGTH];  //IN  & OUT  - Name input by the User
    int age;                 //IN  & CALC - Age input by the User
    char likeChocolate;      //IN  & CALC - User's friend likes chocolate?
    char likeNuts;           //IN  & CALC - User's friend likes nuts?

	// OUTPUT - Class Headings
	cout << left;
	cout << "****************************************************\n";
	cout << "* PROGRAMMERS : "    << NAME1     << " and " << NAME2    <<endl;
	cout << "* "      << setw(12) << "CLASS"   << ": "    << CLASS    <<endl;
	cout << "* "      << setw(12) << "SECTION" << ": "    << SECTION  <<endl;
	cout << "* LAB #" << setw(7)  << LAB_NUM   << ": "    << LAB_NAME <<endl;
	cout << "****************************************************\n\n";
	cout << right;
	
	
	/************************************************************************
	 * INPUT - Prompts the user for their friend's name, age and preferences
	 * regarding chocolate, and only asks if they like nuts if they like
	 * chocolate. Keeps buffer clean.
	 ***********************************************************************/
    cout << left;
    
    cout << setw(COL_WIDTH) << "What is your Friend's name?";
    cin.getline(name, NAME_LENGTH);
    
    cout << setw(COL_WIDTH) << "How old is your friend?";
    cin  >> age;
    cin.ignore(10000, '\n');
    
    cout << setw(COL_WIDTH) << "Do they like chocolate (Y/N)?";
    cin.get(likeChocolate);
    cin.ignore(10000, '\n');
    
    if (likeChocolate != 'N')
    {
         if (likeChocolate != 'n')
         {
              cout << setw(COL_WIDTH) << "Do they like nuts (Y/N)?";
              cin.get(likeNuts);
              cin.ignore(10000, '\n');
         } //(likeChocolate != 'n')
         
    } //(likeChocolate != 'N')

    cout << right;
        
	/************************************************************************
	 * PROCESSING & OUTPUT - Determines which snack and beverage to get the 
     * user's friend based on previous responses and outputs it in a
     * a simple string statement.
	 ***********************************************************************/
    
    cout << left;
    
    cout << endl;
    
    if (age <= 20)
    {
         if (likeChocolate != 'N')
         {
              if (likeNuts != 'N')
              {
                   cout << "You should serve "         << name
                        << " Peanut M & M's and soda." << endl;
              } // (likeNuts != 'N')
              else
              {
                   cout << "You should serve "         << name
                        << " M & M's and soda." << endl;
              } // else (likeNuts != 'N')
              
         } // (likeChocolate != 'N')
         
         else
         {
              cout << "You should serve "         << name
                        << " Skittles and soda." << endl;
         } // else (likeChocolate != 'N')
         
    } // (age <= 20)
    
    else
    {
         if (likeChocolate != 'N')
         {
              if (likeNuts != 'N')
              {
                   cout << "You should serve "         << name
                        << " Peanut M & M's and beer." << endl;
              } // (likeNuts != 'N')
              else
              {
                   cout << "You should serve "         << name
                        << " M & M's and beer." << endl;
              } // else (likeNuts != 'N')
              
         } // (likeChocolate != 'N')
         
         else
         {
              cout << "You should serve "         << name
                        << " Skittles and beer." << endl;
         } // else (likeChocolate != 'N')
         
    } // else (age <= 20)
    
    cout << right;
    cin.ignore(10000, '\n');
	                            
	return 0;
}
