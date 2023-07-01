/*******************************************************************************
* AUTHOR       : Kevin Gonzalez, Dillon Welsh
* LAB16        : INHERITANCE
* CLASS        : CS 3A
* SECTION      : 71206
* DUE DATE     : 11/03/2020
*******************************************************************************/

#include "preferredCustomer.h"

int main()
{
    PreferredCustomer newCusty;     // CALC - obj for calculations
    // PROCESSING - testing method functions
    newCusty.addTransaction(543);
    cout << newCusty.getPurchaseAmount() << endl;
    newCusty.addTransaction(2543);
    cout << newCusty.getPurchaseAmount() << endl;
    return 0;
}
