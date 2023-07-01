/*******************************************************************************
* PREFERREDCUSTOMER CLASS
*_________________________________________________
* This program defines the functions and
* constructors for the PreferredCustomer Class
*_________________________________________________
* INPUT:
*  "PreferredCustomer.h": The function and constructor
*	declarations for the PreferredCustomer class
*
* OUTPUT:
*  None
*******************************************************************************/

#include "preferredCustomer.h"

/*******************************************************************************
* FUNCTION GETPURCHASEAMOUNT
*_______________________________________________________________________________
* This function returns the ammount of money spent by the customer.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* double
*******************************************************************************/

double PreferredCustomer::getPurchaseAmount()
{
    return purchasesAmount;
}

/*******************************************************************************
* FUNCTION GETDISCOUNTLEVEL
*_______________________________________________________________________________
* This function returns the current discount level of the customer.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* double
*******************************************************************************/

double PreferredCustomer::getDiscountLevel()
{
    return discountLevel;
}

/*******************************************************************************
* FUNCTION ADDTRANSACTION
*_______________________________________________________________________________
* This function adds ammount of money spent by customer to purchase amount
*_______________________________________________________________________________
* PRE-CONDITIONS
* unsigned amount
*
* POST-CONDITIONS
* None
*******************************************************************************/

void PreferredCustomer::addTransaction(unsigned amount) // IN - spent amount
{
    if(purchasesAmount >= 2000) discountLevel = 1.10;
    else if(purchasesAmount >= 1500) discountLevel = 1.07;
    else if(purchasesAmount >= 1000) discountLevel = 1.06;
    else if(purchasesAmount >= 500) discountLevel = 1.05;
    purchasesAmount += (amount * discountLevel);
}
