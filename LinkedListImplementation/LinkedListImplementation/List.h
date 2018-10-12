#pragma once
typedef int ElementType;

struct node {
	ElementType data;
	node * next;
};
class List {
public:
	List();
	bool Empty();
	void InsertAtEnd(ElementType x);
	void Delete(ElementType x);
	int Sum();
	int Average();
	void Display();
private:
	node * first;
};

