#pragma once
#include <iostream>
#include <string>
#include "stdafx.h"

using namespace std;

#ifndef LinkedStackNode_H
#define LinkedStackNode_H

class LinkedStackNode
{
private:
	string data;
	LinkedStackNode* nextNode;
public:
	//Constructor & destructor
	LinkedStackNode(string);
	LinkedStackNode();
	~LinkedStackNode();

	//Methods
	LinkedStackNode* getNextNode();
		//returns next node

	void setNextNode(LinkedStackNode*);
		//set's the next node

	string getData();
	//returns data =)
};

#endif

