// LinkedListImplementation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
#include "List.h"
using namespace std;
int main() {
	List list;
	cout << "Welcome to Linked List..." << endl;
	cout << "What Would You Like To Do: " << endl
		<< "1 : Insert" << endl
		<< "2 : Delete" << endl
		<< "3 : Display" << endl
		<< "4 : Sum" << endl
		<< "5 : Average" << endl
		<< "6 : Exit" << endl;
	ElementType user;
	cin >> user;
	while (user != 6 || user <= 5 || user >= 1) {
		switch (user) {
			ElementType num;
		case 1:
			cout << "Enter the Number To be Stored : ";
			cin >> num;
			list.InsertAtEnd(num);
			break;
		case 2:
			cout << "Enter the Number To be Deleted : ";
			cin >> num;
			list.Delete(user);
			break;
		case 3:
			list.Display();
			break;
		case 4:
			list.Sum();
			break;
		case 5:
			list.Average();
			break;
		case 6:
			cout << " Exiting Program...";
			return 0;
		}
		cout << "What Would You Like To Do: " << endl
			<< "1 : Insert" << endl
			<< "2 : Delete" << endl
			<< "3 : Display" << endl
			<< "4 : Sum" << endl
			<< "5 : Average" << endl
			<< "6 : Exit" << endl;
		cin >> user;
	}
}

