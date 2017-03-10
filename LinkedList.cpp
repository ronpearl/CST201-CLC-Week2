#include "stdafx.h"
#include "LinkedList.h"
#include <iostream>

using namespace std;



/**
* Add item to end of list
*
* @param val
*/
void LinkedList::addToEnd(int val) {
	LinkedList *temp = new LinkedList();
	temp->data = val;
	temp->next = NULL;

	LinkedList *temp2 = head;

	if (temp2 == NULL) {
		head = temp;
		return;
	}

	// Get to the end of the list
	while (temp2->next != NULL) {
		temp2 = temp2->next;
	}

	// Do the append
	temp2->next = temp;
}

LinkedList* LinkedList::makeCopy() {
	LinkedList *curr = head;	// point to head
	LinkedList *copy = new LinkedList();

	while (curr != NULL) {
		copy->addToEnd(curr->data);		// Add the val from the current linked list to new linked list
		
		curr = curr->next;
	}

	return copy;
}

/**
* Insert data at the beginning of the list
*
* @param val
*/
void LinkedList::insertAtBeginning(int val) {
	LinkedList *temp = new LinkedList();
	temp->data = val;
	temp->next = NULL;

	if (head != NULL) {
		temp->next = head;
	}

	head = temp;
}

/**
* Remove a node at a specific position
*
* @param pos
*/
void LinkedList::removeAtPosition(int pos) {
	LinkedList *temp1 = head;

	// removing first node
	if (pos == 1) {
		head = temp1->next;     // Assign head to 2nd node
		free(temp1);            // Delete first node

		return;
	}

	// Move pointer to the position we need to remove
	for (int i = 0; i < pos - 2; i++) {
		temp1 = temp1->next;
	}

	LinkedList *temp2 = temp1->next;     // Assign temp2 to the node we will remove
	temp1->next = temp2->next;          // Assign node after the position we are going to remove

	free(temp2);                // Free up memory allocation for
}

/**
* Insert a number at a specific position
*
* @param val
* @param pos
*/
void LinkedList::insertAtPosition(int val, int pos) {
	LinkedList *temp1 = new LinkedList();
	temp1->data = val;
	temp1->next = NULL;

	if (pos == 1) {
		temp1->next = head;
		head = temp1;
		return;
	}

	LinkedList *curr = new LinkedList();
	LinkedList *prev = new LinkedList();

	curr = head;                            // Assign curr to head

											// Iterate through positions to find new node position
	for (int i = 1; i < pos; i++) {
		prev = curr;
		curr = curr->next;
	}

	prev->next = temp1;     // Add new node to prev (which puts it into the correct position)
	temp1->next = curr;     // Add next position of curr to temp3
}

/**
* Append this list with another
*
* @param toAppend
*/
void LinkedList::appendLists(LinkedList *toAppend) {
	LinkedList *thisList = head;
	LinkedList *newList = toAppend->head;

	// Get to the last element of our current list
	while (thisList->next != NULL) {
		thisList = thisList->next;
	}

	thisList->next = newList;
}

/**
* Print out items in the list
*/
void LinkedList::print() {
	LinkedList *temp = head;

	// Check if empty
	if (temp == NULL) {
		cout << "Empty" << endl;
		return;
	}

	while (temp != NULL) {
		cout << temp->data;
		cout << ", ";
		temp = temp->next;
	}

	cout << "NULL" << endl;
}