#pragma once
#include <iostream>
#include <string>
#include "stdafx.h"
#include "LinkedStackNode.h"

using namespace std;

#ifndef LinkedStack_H
#define LinkedStack_H

class LinkedStack 
{
private:
	//Member variables
	int count;
	LinkedStackNode* head;

public:
	//Constuctors & destructor
	LinkedStack();
	LinkedStack(string[]);
	~LinkedStack();

	//Methods
	string get();
		//returns the "last in" value 
	LinkedStackNode* getNode();
		//returns the "last in" node

	void add(string);
		//adds the item into stack

	bool remove();
		//removes the "last in" value
		//returns true if remove was succesfull
	
	int getCount();
		//returnes the number of items int the collection

	bool isEmpty();
		//returns true if the collection is empty

};

#endif

