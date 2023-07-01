#ifndef PREFERREDCUSTOMER_H
#define PREFERREDCUSTOMER_H

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

#include "customerData.h"

class PreferredCustomer : public CustomerData
{

public:
/*******************************************************************************
* FUNCTION GETPURCHASEAMOUNT
*________________________________________________
* This function returns the ammount of money spent by the customer.
*******************************************************************************/
    double getPurchaseAmount();
/*******************************************************************************
* FUNCTION GETDISCOUNTLEVEL
*________________________________________________
* This function returns the current discount level of the customer.
*******************************************************************************/
    double getDiscountLevel();
/*******************************************************************************
* FUNCTION ADDTRANSACTION
*________________________________________________
* This function adds ammount of money spent by customer to purchase amount
*******************************************************************************/
    void addTransaction(unsigned amount);   // IN - amount spent by customer
private:
    double purchasesAmount;     // CALC - running amount of money spent
    double discountLevel = 1;   // CALC - starting discount level
};

#endif // PREFERREDCUSTOMER_H
