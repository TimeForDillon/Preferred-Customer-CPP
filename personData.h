#ifndef PERSONDATA_H
#define PERSONDATA_H

/*******************************************************************************
* PERSONDATA CLASS
*_________________________________________________
* This program defines the functions and
* constructors for the PersonData Class
*_________________________________________________
* INPUT:
*  "PersonData.h": The function and constructor
*	declarations for the PersonData class
*
* OUTPUT:
*  None
*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

class PersonData
{
public:
/*******************************************************************************
* FUNCTION GETLASTNAME
*________________________________________________
* This function returns the last name.
*******************************************************************************/
    string getLastName();
/*******************************************************************************
* FUNCTION GETFIRSTNAME
*________________________________________________
* This function returns the first name.
*******************************************************************************/
    string getFirstName();
/*******************************************************************************
* FUNCTION GETADDRESS
*________________________________________________
* This function returns the address.
*******************************************************************************/
    string getAddress();
/*******************************************************************************
* FUNCTION GETCITY
*________________________________________________
* This function returns the city.
*******************************************************************************/
    string getCity();
/*******************************************************************************
* FUNCTION GETSTATE
*________________________________________________
* This function returns the state.
*******************************************************************************/
    string getState();
/*******************************************************************************
* FUNCTION GETZIPCODE
*________________________________________________
* This function returns the zip code.
*******************************************************************************/
    int getZipcode();
/*******************************************************************************
* FUNCTION GETPHONE
*________________________________________________
* This function returns the phone number.
*******************************************************************************/
    int getPhone();
/*******************************************************************************
* FUNCTION SETLASTNAME
*________________________________________________
* This function sets the last name to the passed variable.
*******************************************************************************/
    void setLastName(string lastName);      // IN - passed in last name
/*******************************************************************************
* FUNCTION SETFIRSTNAME
*________________________________________________
* This function sets the first name to the passed variable.
*******************************************************************************/
    void setFirstName(string firstName);    // IN - passed in first name
/*******************************************************************************
* FUNCTION SETADDRESS
*________________________________________________
* This function sets the address to the passed variable.
*******************************************************************************/
    void setAddress(string address);        // IN - passed in address
/*******************************************************************************
* FUNCTION SETCITY
*________________________________________________
* This function sets the city to the passed variable.
*******************************************************************************/
    void setCity(string city);              // IN - passed in city
/*******************************************************************************
* FUNCTION SETSTATE
*________________________________________________
* This function sets the state to the passed variable.
*******************************************************************************/
    void setState(string state);            // IN - passed in state
/*******************************************************************************
* FUNCTION SETZIPCODE
*________________________________________________
* This function sets the zip code to the passed variable.
*******************************************************************************/
    void setZipcode(int zipcode);           // IN - passed in zip code
/*******************************************************************************
* FUNCTION SETPHONE
*________________________________________________
* This function sets the phone number to the passed variable.
*******************************************************************************/
    void setPhone(int phone);               // IN - passed in phone number
private:
    string lastName;    // CALC - customers last name
    string firstName;   // CALC - customers first name
    string address;     // CALC - customers address
    string city;        // CALC - customers city
    string state;       // CALC - customers state
    int zipcode;        // CALC - customers zip code
    int phone;          // CALC - customers phone
};

#endif // PERSONDATA_H
