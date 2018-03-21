#pragma once
#include <iostream>
#include "stdafx.h"
#define SIZE 5

#ifndef MyStack_H
#define MyStack_H

template <class T> class MyStack
{
public:
	//Defoult constructor
	MyStack();

	//Defoult desructor
	~MyStack();

	//Methods
	void add(T item);
		//Add's an item into stack

	void remove();
		//Remove's last added item

	T get();
		//Return's the last added item

	bool isEmpty();
		//Is true if the collection is empty

	void checkForExeption();
		//Throw's exeption if the collection is empty

private:
	//Member variables
	T items[5];
	int count;
	int lastAdded;
	int currentElement;

};

#endif 


