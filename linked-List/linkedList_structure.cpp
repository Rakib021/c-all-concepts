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
    int sz;

    // constructor for assign head value

    LinkedList()
    {
        head = NULL;
        sz = 0;
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
        sz++;

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
                cout << value << "is found at index " << index << "\n";
            }

            a = a->nxt;
            index++;
        }
    }
    void insertAtAnyIndex(int index, int value)
    {
        if (index < 0 || index > sz)
        {
            return;
        }

        if (index == 0)
        {
            insertAtHead(value);
            return;
        }
        sz++;
        node *a = head;
        int cur_index = 0;

        while (cur_index != index - 1)
        {
            a = a->nxt;
            cur_index++;
        }

        node *newnode = createNewNode(value);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }
    void deleteAtHaed()
    {
        if (head == NULL)
        {
            return;
        }
        sz--;
        node *a = head;
        head = a->nxt;
        delete a;
    }

    void deleteAnyIndex(int index)
    {
        if(index<0 || index>sz-1){
            return;
        }
        if (index == 0)
        {
            deleteAtHaed();
            return;
        }
        sz--;
        node *a = head;
        int cur_index = 0;

        while (cur_index != index - 1)
        {
            a = a->nxt;
            cur_index++;
        }

        node *b = a->nxt;
        a->nxt = b->nxt;
        delete b;
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

    l.insertAtAnyIndex(1, 100);
    l.traverse();

    l.deleteAtHaed();
    l.traverse();
}