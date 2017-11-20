/*
 * BarberShop.cpp
 *
 *  Created on: Nov 17, 2017
 *      Author: Anis
 */
//BarberShop.cpp
#include <iostream>
#include "LinkedStack.h"
#include "BarberShop.h"
using namespace std;

BarberShop :: BarberShop<Customer> s1;
BarberShop :: BarberShop<Customer> s2;

// function addCustomer will add a customer to s1
void BarberShop :: addCustomer(Customer& customer){
//write your code here

s1.push(customer);
//this->s1.push(customer);

}
 // This function will pop s1 into s2 until s1 is empty so it gets to the bottom of the list then pop once
 // then has to pop everything back onto s1 just in case if the next call is adding
Customer BarberShop ::nextCustomer(){
//write your code here
Customer customertemp; // Temporary container to hold next customer object;
	while (!s1.isEmpty){ // reversing the order of customers in line
	s2.push(s1.pop());
}
	customertemp = s2.pop;
	while(!s2.isEmpty){  // reversing to the original order of line
		s1.push(s2.pop());
	}
	return customertemp;
}
friend ostream & operator << (ostream & os, Customer & p);

