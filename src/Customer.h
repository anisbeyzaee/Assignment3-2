/*
 * Customer.h
 *
 *  Created on: Nov 17, 2017
 *      Author: Anis
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include<iostream>
#include<string>

using namespace std;

class Customer{
	Customer();
private:
	string firstName;
	string lastName;

public:

	Customer(string firstName, string lastName);

	void setFirstName(string firstName);
	void setLastName(string lastName);
	string getName();

};

 Customer :: Customer(string firstName, string lastName){
 setFirstName(firstName);
 setLastName(lastName);
 }

void Customer :: setFirstName(string firstName){
	this->firstName = firstName;
}
void Customer :: setLastName(string lastName){
	this->lastName = lastName;
}
string Customer :: getName(){
	return firstName + lastName;
}


#endif /* CUSTOMER_H_ */
