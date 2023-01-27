#include <bits/stdc++.h>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};
class LinkedList {
private:
	Node* head;
	int size;
public:
	LinkedList() {
    	head = NULL;
    	size = 0;
	}
   void func(int x) {
    	Node* temp = new Node();
    	temp->data = x;
    	temp->next = head;
    	head = temp;
    	size++;
	}
	void traverse() {
    	Node* temp = head;
    	while (temp != NULL) {
        	cout << temp->data << " ";
        	temp = temp->next;
    	}
    	cout << endl;
	}
	int getSize() {
    	return size;
	}
	int getValue(int index) {
    	if (index >= size) {
        	return -1;
    	}
    	Node* temp = head;
    	for (int i = 0; i < index; i++) {
        	temp = temp->next;
    	}
    	return temp->data;
	}
	void printReverse(Node* temp) {
    	if (temp == NULL) {
        	return;
    	}
    	printReverse(temp->next);
    	cout << temp->data << " ";
	}
	void printReverse() {
    	printReverse(head);
    	cout << endl;
	}
	void swapFirst() {
    	if (size < 2) {
        	return;
    	}
    	Node* temp = head->next;
    	head->next = temp->next;
    	temp->next = head;
    	head = temp;
	}
};
int main()
{
    	LinkedList l;
	cout<<l.getSize()<<"\n";
	l.func(5);
	cout<<l.getSize()<<"\n";
	l.func(6);
	l.func(30);
	cout<<l.getSize()<<"\n";
	l.func(20);
	l.func(30);

	cout<<l.getValue(2)<<"\n";

	cout<<l.getValue(6)<<"\n";

	l.printReverse();
	l.traverse();
	l.swapFirst();
	l.traverse();
	l.printReverse();
return 0;
}