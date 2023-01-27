#include<bits/stdc++.h>
using namespace std;
//create a node
class node{
public:

int data;
node *next;
};

class linkedList{
    public:

    node *head; //head ta kothai point kora ache

linkedList(){
    head = NULL;
}
//creates a new node with data =value and next =NULL
node* createNewNode(int value){
    node *newNode = new node;  //create a node

    newNode->data = value; 
    newNode ->next =NULL;

    return newNode;
}


    void insertAtHead(int value){
        node *a = createNewNode(value);
        if(head==NULL)
        {
            head = a;
            return;
        }

        //if head is not NULL
        a->next = head;
        head=a;

    }
};
int main(){
    linkedList l;
    l.insertAtHead(10);
    l.insertAtHead(20);
    l.insertAtHead(30);
    l.insertAtHead(40);
    l.insertAtHead(50);
    

}