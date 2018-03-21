#include "stdafx.h"
#include "MyStack.h"


template <class T>
MyStack<T>::MyStack()
{
	lastAdded = -1;
	count = 0;
}

template <class T>
MyStack<T>::~MyStack()
{
}

template <class T>
void MyStack<T>::add(T item) 
{
	items[++lastAdded] = item;
	count++;
}

template <class T>
T MyStack<T>::get() 
{
	checkForExeption();
	return items[lastAdded];
}

template <class T>
void MyStack<T>::remove() 
{
	checkForExeption();
	items[lastAdded--] = 0;
	count--;
}

template <class T>
bool MyStack<T>::isEmpty() 
{
	return count == 0;
}

template <class T>
void MyStack<T>::checkForExeption() 
{
	if (isEmpty()) 
	{
		throw nullptr;
	}
}
