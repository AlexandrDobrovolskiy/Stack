#include "stdafx.h"
#include "MyStack.h"


MyStack::MyStack(){
	lastAdded = -1;
	count = 0;
}

MyStack::~MyStack(){
}

void MyStack::add(int item) {
	items[++lastAdded] = item;
	count++;
}

int MyStack::get() {
	checkForExeption();
	return items[lastAdded];
}

void MyStack::remove() {
	checkForExeption();
	items[lastAdded--] = 0;
	count--;
}

bool MyStack::isEmpty() {
	return count == 0;
}

void MyStack::checkForExeption() {
	if (isEmpty()) 
	{
		throw nullptr;
	}
}
