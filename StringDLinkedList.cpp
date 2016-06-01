/**********************************************************************
ECE 2552: Data Structures and Algorithms in C++
FileName : StringDLinkedList.cpp
File Description: String DoublyLinkedList class definition
Code Author :  Ayokunle Ade-Aina [aadeaina2014@my.fit.edu] (c)2016
***********************************************************************/
#include "StringDLinkedList.h"



DLinkedList::DLinkedList() {			// constructor
	header = new DNode;				// create sentinels
	trailer = new DNode;
	header->next = NULL;
	header->elem = "Header";
	trailer->elem = "Trailer";
	trailer->prev = NULL;
	header->next = trailer;			// have them point to each other
	trailer->prev = header;
	n = 0;
}

// insert new node before v
void DLinkedList::add(DNode* v, const Elem& e) {
	DNode* u = new DNode;  u->elem = e;		// create a new node for e
	u->next = v;				// link u in between v
	u->prev = v->prev;				// ...and v->prev
	//v->prev->next = u;
	//v->prev = u;
	//v->prev->next = v->prev = u;  this code is a bug,looks professional  but its confusing
	v->prev = v->prev->next = u;
	n++;
}

void DLinkedList::addFront(const Elem& e)	// add to front of list
{
	add(header->next, e);
}

void DLinkedList::addBack(const Elem& e)	// add to back of list
{
	add(trailer, e);
}

bool DLinkedList::empty() const		// is list empty?
{
	return (header->next == trailer);
}

int DLinkedList::size()
{
	return n;

}

const Elem& DLinkedList::front() const	// get front element
{
	return header->next->elem;
}

const Elem& DLinkedList::back() const		// get back element
{
	return trailer->prev->elem;
}
void DLinkedList::remove(DNode* v) {		// remove node v
	DNode* u = v->prev;				// predecessor
	DNode* w = v->next;				// successor
	u->next = w;				// unlink v from list
	w->prev = u;
	delete v;
}

void DLinkedList::removeFront()		// remove from font
{
	remove(header->next);
}

void DLinkedList::removeBack()		// remove from back
{
	remove(trailer->prev);
}


DLinkedList::~DLinkedList() {			// destructor
	while (!empty()) removeFront();		// remove all but sentinels
	delete header;				// remove the sentinels
	delete trailer;
}
