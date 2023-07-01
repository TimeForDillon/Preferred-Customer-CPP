/*******************************************************************************
* CUSTOMERDATA CLASS
*_________________________________________________
* This program defines the functions and
* constructors for the CustomerData Class
*_________________________________________________
* INPUT:
*  "CustomerData.h": The function and constructor
*	declarations for the CustomerData class
*
* OUTPUT:
*  None
*******************************************************************************/

#include "customerData.h"

/*******************************************************************************
* FUNCTION GETCUSTOMERNUMBER
*_______________________________________________________________________________
* This function returns the customer number.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* customerNumber
*******************************************************************************/

int CustomerData::getCustomerNumber()
{
    return customerNumber;
}

/*******************************************************************************
* FUNCTION GETMAILINGLIST
*_______________________________________________________________________________
* This function returns whether mailing list is true or false.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* mailingList
*******************************************************************************/

bool CustomerData::getMailingList()
{
    return mailingList;
}

/*******************************************************************************
* FUNCTION SETCUSTOMERNUMBER
*_______________________________________________________________________________
* This function sets the customer number.
*_______________________________________________________________________________
* PRE-CONDITIONS
* int custNum
*
* POST-CONDITIONS
* None
*******************************************************************************/

void CustomerData::setCustomerNumber(int custNum)   // IN - customer number
{
    customerNumber = custNum;
}

/*******************************************************************************
* FUNCTION SETMAILINGLIST
*_______________________________________________________________________________
* This function sets the mailing list variable.
*_______________________________________________________________________________
* PRE-CONDITIONS
* bool onMailList
*
* POST-CONDITIONS
* None
*******************************************************************************/

void CustomerData::setMailingList(bool onMailList)  // IN - if on mail list
{
    mailingList = onMailList;
}
