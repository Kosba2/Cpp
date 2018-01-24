#include "HEADER_FILE.h"

/****************************************************************************
 * FUNCTION PlayOneTurn
 * --------------------------------------------------------------------------
 * This function receives a name as an argument and uses it to play out that
 * player's turn for rolling the dice.
 * --------------------------------------------------------------------------
 * PRE-CONDITIONS
 *      The following parameters need to have a defined value
 *  prior to calling the function:
 *          playerName : Name of the player whose turn it is
 *
 * POST-CONDITIONS
 *      This function will have called functions relevant to the given
 *  player's turn and return what the player's random roll was along with
 *  ASCII art of their roll.
 ***************************************************************************/

int PlayOneTurn(string playerName)
{
    int dieRoll;
    
    cout << playerName << "'s turn \n";
    
    PressEnterToRoll();
    
    dieRoll = RollDie();
    
    cout << playerName << " rolls: \n";
    DisplayDie(dieRoll);
    
    return dieRoll;
}
