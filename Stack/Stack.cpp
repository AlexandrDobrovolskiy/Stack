// Stack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "MyStack.h"
#include "LinkedStackNode.h" 
#include "LinkedStack.h"

using namespace std;

int main()
{
	MyStack* ms = new MyStack();
	ms->add(1);
	ms->add(2);
	ms->add(3);

	for (int i = 0; i < 3; i++)
	{
		cout << ms->removeAndGet() << endl;
	}

	/*
	LinkedStackNode* myNode = new LinkedStackNode("Hello");
	LinkedStackNode* mySecondNode = new LinkedStackNode("World !");

	cout << myNode->getData() << endl;
	myNode->setNextNode(mySecondNode);

	cout << myNode->getNextNode()->getData() << endl;

	LinkedStack* mls = new LinkedStack();
	mls->add("Darkness");
	mls->add("My old friend");
	mls->add("Hello, ");

	for (int i = 0; i < 3; i++)
	{
		cout << mls->get() << endl;
		mls->remove();
	}
	*/

	system("pause");
    return 0;
}

