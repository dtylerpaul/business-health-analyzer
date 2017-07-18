/*
 * Customer.cpp
 *
 *  Created on: Jul 16, 2017
 *      Author: dtp
 */

#include "Customer.h"

Customer::Customer() {
	// all variables are strings; default null for string as part of #include <string>;
	//only required for non string variables

}

Customer::Customer(string firstName, string lastName, string eMail, string country, string state, string city, string street) {
	newFirstName = firstName;
	newLastName = lastName;
	newEmail = eMail;
	newCountry = country;
	newState = state;
	newCity = city;
	newStreet = street;
}




Customer::~Customer() {
	// TODO Auto-generated destructor stub
}

