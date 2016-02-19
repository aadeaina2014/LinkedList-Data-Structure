#include "SLinkedList.h"
#include "StringLinkedList.h"

#include "DLinkedList.h"
#include "StringDLinkedList.h"

//# include "CircleList.h"

#include<iostream>
using namespace std;
int main()
{
	//String Linked List Demo
	/*StringLinkedList itineryLinkedList;
	itineryLinkedList.addFront("MLB");
	itineryLinkedList.addFront("JFK");
	itineryLinkedList.addFront("MCO");

	cout << itineryLinkedList.front() <<endl; 
	itineryLinkedList.removeFront();
	cout << itineryLinkedList.front() << endl;  */
	
	//Generic Linked List
	/* SLinkedList <int> singlyLinkedList;
	     //Populate List
	singlyLinkedList.addFront(1);
	singlyLinkedList.addFront(2);
	singlyLinkedList.addFront(3);
	singlyLinkedList.addFront(4);

	   // Read List
	cout << singlyLinkedList.front() << endl;
	singlyLinkedList.removeFront();//modify List
	cout << singlyLinkedList.front() << endl;// check effect of removal
	*/
	

	// String DLinkedList Demo
	DLinkedList dlist;
	dlist.addFront("JFK");
	dlist.addBack("LGA1");
	dlist.addBack("LGA2");
	dlist.addBack("LGA3");
	dlist.addBack("JFK");
	cout <<dlist.back()<< endl;
	cout << dlist.front()<< endl;
	dlist.removeBack();
	cout << dlist.back() << endl;
	cout << dlist.size() << endl;
	


	//CircleList clist;

	//clist.add("F");
	//clist.add("I");
	//clist.add("T");

	system("Pause");
	return EXIT_SUCCESS;
}