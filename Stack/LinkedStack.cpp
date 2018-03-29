#include "stdafx.h"
#include "LinkedStack.h"


LinkedStack::LinkedStack()
{
	count = 0;
}

LinkedStack::LinkedStack(string items[]) {
	count = 0;
	throw "daemn son =(";
}

LinkedStack::~LinkedStack()
{
}

void LinkedStack::add(string item) {
	LinkedStackNode* newNode = new LinkedStackNode(item);
	if (count = 0) {
		this->head = newNode;
	}
	else {
		getNode()->setNextNode(newNode);
	}
	count++;
}

string LinkedStack::get() {
	return this->getNode()->getData();
}

LinkedStackNode* LinkedStack::getNode() {
	LinkedStackNode* temp = head;
	for (int i = 1; i < count; i++) {
		temp = temp->getNextNode();
	}
	return temp;
}

bool LinkedStack::remove() {
	if (isEmpty())
		return false;
	else {
		LinkedStackNode temp = *head;
		for (int i = 1; i < count - 1; i++) {
			temp = *temp.getNextNode();
		}
		temp.setNextNode(NULL);
	}
	return true;
}

bool LinkedStack::isEmpty() {
	return count == 0;
}

int LinkedStack::getCount() {
	return count;
}
