#include <bits/stdc++.h>
using namespace std;
template <typename temp>
class Deque
{
	struct Node
	{
    	temp data;
    	Node *next, *prev;
    	Node(temp data) : data(data), next(nullptr), prev(nullptr) {}
	};
	Node *head, *tail;
	int size;
public:
	Deque() : head(nullptr), tail(nullptr), size(0) {}
	void push_front(temp data)
	{
    	head = new Node(data);
    	head->next = head->prev = tail;
    	if (!tail) tail = head;
    	size++;
	}
	void push_back(temp data)
	{
    	tail = new Node(data);
    	tail->next = tail->prev = head;
    	if (!head) head = tail;
    	size++;
	}
	temp pop_front()
	{
    	
    	temp data = head->data;
    	Node *node = head;
    	head = head->next;
    	head->prev = tail->next = nullptr;
    	if (!head) tail = nullptr;
    	delete node;
    	size--;
    	return data;
	}
	temp pop_back()
	{

    	temp data = tail->data;
    	Node *node = tail;
    	tail = tail->prev;
    	tail->next = head->prev = nullptr;
    	if (!tail) head = nullptr;
    	delete node;
    	size--;
    	return data;
	}
	temp front() 
	{

    	return head->data;
	}
	temp back() 
	{

    	return tail->data;
	}
	int get_size() 
	{
    	return size;
	}
};
int main() {
	Deque<int> input;
	input.push_front(1);
	input.push_front(2);
	input.push_back(3);
	input.push_back(4);
	cout << input.front() <<"\n";
	cout << input.back() <<"\n";
	cout << input.pop_front() <<"\n";
	cout << input.pop_back() <<"\n";
	cout << input.get_size() <<"\n";
	return 0;
}