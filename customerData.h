#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H

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

#include "personData.h"

class CustomerData : public PersonData
{
public:
/*******************************************************************************
* FUNCTION GETCUSTOMERNUMBER
*________________________________________________
* This function returns the customer number.
*******************************************************************************/
    int getCustomerNumber();
/*******************************************************************************
* FUNCTION GETMAILINGLIST
*________________________________________________
* This function returns whether mailing list is true or false.
*******************************************************************************/
    bool getMailingList();
/*******************************************************************************
* FUNCTION SETCUSTOMERNUMBER
*________________________________________________
* This function sets the customer number.
*******************************************************************************/
    void setCustomerNumber(int custNum);    // IN - customer number
/*******************************************************************************
* FUNCTION SETMAILINGLIST
*________________________________________________
* This function sets the mailing list variable.
*******************************************************************************/
    void setMailingList(bool onMailList);   // IN - if on mail list
private:
    int customerNumber;     // CALC - unique customer number
    bool mailingList;       // CALC - whether on mail list
};

#endif // CUSTOMERDATA_H
