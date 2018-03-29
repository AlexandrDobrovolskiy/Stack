#pragma once
#include <iostream>
#include "stdafx.h"
#define SIZE 5

#ifndef MyStack_H
#define MyStack_H

class MyStack
{
private:
	//Member variables
	int items[SIZE];
	int count;
	int lastAdded;
	int currentElement;

public:
	//Defoult constructor
	MyStack();

	//Defoult desructor
	~MyStack();

	//Methods
	void add(int item);
		//Add's an item into stack

	void remove();
		//Remove's last added item

	int get();
		//Return's the last added item

	bool isEmpty();
		//Is true if the collection is empty

	void checkForExeption();
		//Throw's exeption if the collection is empty
};

#endif 


