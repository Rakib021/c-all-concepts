#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *nxt;
};

class LinkedList
{
public:
    node *head;

    // constructor for assign head value

    LinkedList()
    {
        head = NULL;
    }

    // create a new node with data= value and next = NULL

    node *createNewNode(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->nxt = NULL;

        return newNode;
    }

    // iNSERT NEW VALUE AT HEAD

    void insertAtHead(int value)
    {

        node *a = createNewNode(value);

        if (head == NULL)
        {
            head = a;
            return;
        }

        // if head is not null

        a->nxt = head;
        head = a;
    }

    // prints the linked list
    void traverse()
    {
        node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }
    // search for a single value
    int searchDistincValue(int value)
    {

        node *a = head;
        int index = 0;
        while (a != NULL)
        {
            if (a->data == value)
            {
                return index;
            }

            a = a->nxt;
            index++;
        }
        return -1;
    }
    // search All possible occurrence
    void searchAllValue(int value)
    {
        node *a = head;
        int index = 0;
        while (a != NULL)
        {
            if (a->data == value)
            {
cout<<value<<"is found at index "<<index<<"\n";
            }

            a = a->nxt;
            index++;
        }

    }
};

int main()
{
    LinkedList l;

    l.insertAtHead(10);
    l.insertAtHead(20);
    l.insertAtHead(20);
    l.insertAtHead(30);

    l.traverse();

    l.searchDistincValue(10);
    l.searchDistincValue(5);

    l.searchAllValue(20);
}