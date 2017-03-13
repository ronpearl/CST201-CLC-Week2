// Week2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "LinkedList.h"

#include <iostream>

int main()
{
	// Create two linked lists
	LinkedList *list1 = new LinkedList();
	LinkedList *list2 = new LinkedList();

	// Adding integers to the end of list 1
	list1->addToEnd(5);
	list1->addToEnd(2);
	list1->print();

	// Adding integers to the end of list 2
	list2->addToEnd(20);
	list2->addToEnd(36);
	list2->print();

	// Inserting an integer to the beginning of list 1
	list1->insertAtBeginning(10);
	list1->print();

	// Inserting an integer to the beginning of list 2
	list2->insertAtBeginning(8);
	list2->print();

	// Remove integer from first position
	list2->removeAtPosition(1);
	list2->print();

	// Insert integer at 3rd position
	list2->insertAtPosition(18, 3);
	list2->print();
	
	// Append lists
	std::cout << "\nAppending lists: " << std::endl;
	list1->appendLists(list2);
	list1->print();

	// Make copy of a list
	std::cout << "\nMake copy of lists: " << std::endl;
	LinkedList *copy = list1->makeCopy();
	copy->print();

	// Reverse the list
	std::cout << "\nReverse the list: " << std::endl;
	copy->reverseList();
	copy->print();
    return 0;
}

