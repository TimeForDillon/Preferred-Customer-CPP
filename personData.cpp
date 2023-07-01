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

#include "personData.h"

/*******************************************************************************
* FUNCTION GETLASTNAME
*_______________________________________________________________________________
* This function returns the last name.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* string
*******************************************************************************/

string PersonData::getLastName()
{
    return lastName;
}

/*******************************************************************************
* FUNCTION GETFIRSTNAME
*_______________________________________________________________________________
* This function returns the first name.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* string
*******************************************************************************/

string PersonData::getFirstName()
{
    return firstName;
}

/*******************************************************************************
* FUNCTION GETADDRESS
*_______________________________________________________________________________
* This function returns the address.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* string
*******************************************************************************/

string PersonData::getAddress()
{
    return address;
}

/*******************************************************************************
* FUNCTION GETCITY
*_______________________________________________________________________________
* This function returns the city.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* string
*******************************************************************************/

string PersonData::getCity()
{
    return city;
}

/*******************************************************************************
* FUNCTION GETSTATE
*_______________________________________________________________________________
* This function returns the state.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* string
*******************************************************************************/

string PersonData::getState()
{
    return state;
}

/*******************************************************************************
* FUNCTION GETZIPCODE
*_______________________________________________________________________________
* This function returns the zip code.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* int
*******************************************************************************/

int PersonData::getZipcode()
{
    return zipcode;
}

/*******************************************************************************
* FUNCTION GETPHONE
*_______________________________________________________________________________
* This function returns the phone number.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* int
*******************************************************************************/

int PersonData::getPhone()
{
    return phone;
}

/*******************************************************************************
* FUNCTION SETLASTNAME
*_______________________________________________________________________________
* This function sets the last name to the passed variable.
*_______________________________________________________________________________
* PRE-CONDITIONS
* string lastName
*
* POST-CONDITIONS
* None
*******************************************************************************/

void PersonData::setLastName(string lastName)   // IN - customers last name
{
    this->lastName = lastName;
}

/*******************************************************************************
* FUNCTION SETFIRSTNAME
*_______________________________________________________________________________
* This function sets the first name to the passed variable.
*_______________________________________________________________________________
* PRE-CONDITIONS
* string firstName
*
* POST-CONDITIONS
* None
*******************************************************************************/

void PersonData::setFirstName(string firstName) // IN - customers first name
{
    this->firstName = firstName;
}

/*******************************************************************************
* FUNCTION SETADDRESS
*_______________________________________________________________________________
* This function sets the address to the passed variable.
*_______________________________________________________________________________
* PRE-CONDITIONS
* string address
*
* POST-CONDITIONS
* None
*******************************************************************************/

void PersonData::setAddress(string address) // IN - customers address
{
    this->address = address;
}

/*******************************************************************************
* FUNCTION SETCITY
*_______________________________________________________________________________
* This function sets the city to the passed variable.
*_______________________________________________________________________________
* PRE-CONDITIONS
* string city
*
* POST-CONDITIONS
* None
*******************************************************************************/

void PersonData::setCity(string city)       // IN - customers city
{
    this->city = city;
}

/*******************************************************************************
* FUNCTION SETSTATE
*_______________________________________________________________________________
* This function sets the state to the passed variable.
*_______________________________________________________________________________
* PRE-CONDITIONS
* string state
*
* POST-CONDITIONS
* None
*******************************************************************************/

void PersonData::setState(string state)     // IN - customers state
{
    this->state = state;
}

/*******************************************************************************
* FUNCTION SETZIPCODE
*_______________________________________________________________________________
* This function sets the zip code to the passed variable.
*_______________________________________________________________________________
* PRE-CONDITIONS
* string zipcode
*
* POST-CONDITIONS
* None
*******************************************************************************/

void PersonData::setZipcode(int zipcode)    // IN - customers zip code
{
    this->zipcode = zipcode;
}

/*******************************************************************************
* FUNCTION SETPHONE
*_______________________________________________________________________________
* This function sets the phone number to the passed variable.
*_______________________________________________________________________________
* PRE-CONDITIONS
* string phone
*
* POST-CONDITIONS
* None
*******************************************************************************/

void PersonData::setPhone(int phone)        // IN - customers phone
{
    this->phone = phone;
}
