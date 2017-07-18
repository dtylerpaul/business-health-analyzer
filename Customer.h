/*
 * Customer.h
 *
 *  Created on: Jul 16, 2017
 *      Author: dtp
 */

#include <iostream>
#include <string>

using namespace std;

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

class Customer {
public:
	//default Constructor
	Customer();
	//overload Constructor
	Customer(string, string, string, string, string, string, string);

	virtual ~Customer();

private:
	//member variables
	string newFirstName;
	string newLastName;
	string newEmail;
	string newCountry;
	string newState;
	string newCity;
	string newStreet;


};

#endif /* CUSTOMER_H_ */
