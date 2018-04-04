#pragma once
#include <iostream>
#include "stdafx.h"
#define SIZE 2

#ifndef MyStack_H
#define MyStack_H

class MyStack
{
private:
	//Member variables
	int items[SIZE];
	int lastAdded;

public:
	//Defoult constructor
	MyStack();

	//Defoult desructor
	~MyStack();

	//Methods
	bool add(int item);
		//Add's an item into stack

	bool isFull();
		//Shecks fullness

	void remove();
		//Remove's last added item
	
	int removeAndGet();
		//Useless thing...

	int get();
		//Return's the last added item

	bool isEmpty();
		//Is true if the collection is empty

	void checkForExeption();
		//Throw's exeption if the collection is empty
};

#endif 


