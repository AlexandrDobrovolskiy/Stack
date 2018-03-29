#include "stdafx.h"
#include "LinkedStackNode.h"


LinkedStackNode::LinkedStackNode(string data)
{
	this->nextNode = NULL;
	this->data = data;
}

LinkedStackNode::LinkedStackNode() {
	this->nextNode = NULL;
}


LinkedStackNode::~LinkedStackNode()
{
}

LinkedStackNode* LinkedStackNode::getNextNode() {
	return nextNode;
}

void LinkedStackNode::setNextNode(LinkedStackNode* newNextNode) {
	this->nextNode = newNextNode;
}

string LinkedStackNode::getData() {
	return this->data;
}