// Week2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "LinkedList.h"

#include <iostream>

int main()
{
	LinkedList *list1 = new LinkedList();
	LinkedList *list2 = new LinkedList();

	list1->addToEnd(5);
	list1->addToEnd(2);
	list1->print();

	list2->addToEnd(20);
	list2->addToEnd(36);
	list2->print();

	list1->insertAtBeginning(10);
	list1->print();

	list2->insertAtBeginning(8);
	list2->print();

	list2->removeAtPosition(1);
	list2->print();

	list2->insertAtPosition(18, 3);
	list2->print();
	
	// Append lists
	std::cout << "\nAppending lists: " << std::endl;
	list1->appendLists(list2);
	list1->print();

	// Make copy of a list
	LinkedList *copy = list1->makeCopy();
	copy->print();

    return 0;
}

