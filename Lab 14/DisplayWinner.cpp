#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION DisplayWinner
 * --------------------------------------------------------------------------
 * This function receives the rolls for each of two players and determines
 * which is the winner.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          player1Name : First Player's Name
 *          player1Roll : First Player's Roll
 *          player2Name : Second Player's Name
 *          player2Roll : Second Player's Roll
 *
 * POST-CONDITIONS
 *      This function will compare and output the correct output depending on
 *  which one got the greater roll.
 ***************************************************************************/

void DisplayWinner(string player1Name, int player1Roll,
                   string player2Name, int player2Roll)
{
    if (player1Roll != player2Roll)
    {
        if (player1Roll > player2Roll)
        {
            cout << player1Name << " is the WINNER!!!";
        }
        else
        {
            cout << player2Name << " is the WINNER!!!";
        }
    }
    else
    {
        cout << player1Name << " & " << player2Name << " have tied!";
    }
    
    cout << endl << endl;
}
