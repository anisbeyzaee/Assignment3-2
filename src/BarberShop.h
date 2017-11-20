/*
 * BarberShop.h
 *
 *  Created on: Nov 17, 2017
 *      Author: Anis
 */

#ifndef BARBERSHOP_H_
#define BARBERSHOP_H_

#include <iostream>
#include "LinkedStack.h"
#include "Customer.h"
using namespace std;

class BarberShop{
     LinkedStack<Customer> s1;
     LinkedStack<Customer> s2;
     public:
      Customer customertemp; // Temporary container to hold next customer object;
      void addCustomer(Customer&);
      Customer nextCustomer();
};

void BarberShop :: addCustomer(Customer& customer){
	//write your code here

	s1.push(customer);
	//this->s1.push(customer);

	}


Customer BarberShop :: nextCustomer(){
//write your code here

		while (!s1.isEmpty){ // reversing the order of customers in line
		s2.push(s1.pop());
	}
		customertemp = s2.pop;
		while(!s2.isEmpty){  // reversing to the original order of line
			s1.push(s2.pop());
		}
		return customertemp;
	}
