#include "stdafx.h"
#include "MyStack.h"


MyStack::MyStack(){
	lastAdded = -1;
}

MyStack::~MyStack(){
}

bool MyStack::add(int item) {
	if (!isFull()){
		items[++lastAdded] = item;
		return true;
	}
	return false;
}

int MyStack::get() {
	return items[lastAdded];
}

void MyStack::remove() {
	checkForExeption();
	items[lastAdded--] = 0;
}

int MyStack::removeAndGet() {
	if (isEmpty())
		return NULL;
	int temp = items[lastAdded];
	items[lastAdded--] = 0;
	return temp;
}

bool MyStack::isFull() {
	return lastAdded == SIZE - 1;
}

bool MyStack::isEmpty() {
	return  lastAdded == -1;
}

void MyStack::checkForExeption() {
	if (isEmpty()) 
	{
		throw "The collection is empty !";
	}
}
