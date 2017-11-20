/*
 * Stack.h
 *
 *  Created on: Nov 16, 2017
 *      Author: Anis
 */

#ifndef LINKEDSTACK_H_
#define LINKEDSTACK_H_
#include <iostream>
using namespace std;

//LinkedStack.h

template <class T>
struct node{
    T data;
    node<T>* next;
};

template <class T>
class LinkedStack{

      node<T> *top;
   public:
      //provide function prototypes for a Stack here
  int size;
  node<T> *head = NULL;
  void push(T&);
  void destroylist();
  T pop();
  T stop();
  bool isEmpty();

  ~LinkedStack();
};
//provide function implementations here


// TO be more efficient, I add new nodes to the beginning of the list
// so to pop and top and push I don't have to go through  every node to reach the top;

template <class T>
void LinkedStack<T> :: push(T& item){
	if (head== NULL){
		node<T> *temp = new node<T>;
		temp->data=item;
		temp->next=head;
		head=temp;
		size++;
	}
}
template <class T>
T LinkedStack<T> :: stop(){
	return head->data;
}
template <class T>
T LinkedStack<T> :: pop(){
	if (head==NULL) return;
	node<T> *temp = new node<T>;
	temp->data= head;
	head= head->next;
	size--;
	return temp->data;
	delete temp;	//does this line compile?
}
template <class T>
void LinkedStack<T>::destroylist(){
	node<T> *p;
	while(head != NULL){
		p = head;
		head = head->next;
		delete p;
	}
		size = 0;
}
template <class T>
LinkedStack<T>::~LinkedStack(){
	destroylist();
}
template <class T>
bool LinkedStack<T> :: isEmpty(){
	return head==NULL;
}
#endif /* LINKEDSTACK_H_ */
