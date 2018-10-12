
#include "pch.h"
#include <iostream>
#include "List.h"
using namespace std;
int counter = 0;
List::List()
{
	counter = 0;
	first = NULL;
}

bool List::Empty()
{
	if (first != NULL) { //checks to seee if method is empty
		return false;
	}
	return true;
}

void List::InsertAtEnd(ElementType x) //method to insert the number(s) 
{
	node * firstSpot = new node;                   //creates a new pointer called firstSpot;
	firstSpot->data = x;             //set firstSpot value equal to value passed in parameter
	firstSpot->next = NULL;            //set firstSpot next value equal to null

	if (first == NULL) {                //if the first node is null
		first = firstSpot;                      //then make firstSpot the first node
	}
	else {                            //if the first node is not null then insert at the end
		node * secSpot = first;               //create a new pointer and set it equal to first because first points to the list
		while (secSpot->next != NULL) {       //while secSpot next value is not null
			secSpot = secSpot->next;                //traverses through the link list to the end
		}
		secSpot->next = firstSpot;                    //sets end equal to the firstSpot node

	}

	counter++;
}

void List::Delete(ElementType x)
{
	node * del = first;		//create the pointer del;
	while (first != NULL) {
		if (del->data == x && counter == 1) {
			delete del;
			break;
		}
		else if (del->data == x && counter > 1) {
			del = del->next;
			first = del;
			break;
		}
		else if (del->data != x && counter > 1) {
			del = del->next;
			break;
		}
	}
	counter--;
}

int List::Sum() //returns a sum of the values in the list
{
	int sum = 0;
	node *p = first;
	while (p != NULL) {
		sum += p->data;
		p = p->next;
	}
	cout << "The Sum Of the Values : " << sum << endl;
	return counter; //returns the amount of values stored in the list
}

int List::Average() //goes through the list and evaluates the average of the values
{
	int sum = 0;
	node *p = first;
	while (p != NULL) {
		sum += p->data;
		p = p->next;
	}
	cout << "The Average Of the Values : " << sum / counter << endl;
	return sum / counter;
}
void List::Display() {                  //displays the contents of the list
	node * p = first;
	while (p != NULL) {
		cout << "The number stored is: " << endl
			<< p->data << endl;                   //print out the value in the node
		p = p->next;                                    //move to the next node
	}
}