// Stack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "MyStack.cpp"

using namespace std;

int main()
{
	MyStack<int> ms = MyStack<int>();
	ms.add(1);
	ms.add(2);
	ms.add(3);

	for (int i = 0; i < 3; i++)
	{
		cout << ms.get() << endl;
		ms.remove();
	}

	system("pause");
    return 0;
}

