#include<bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node *nxt;
};

class linkedList{

    node *head;

    linkedList(){
        head = NULL;
    }

    node *createNewNode(int value){
        node *newNode = new node;
        newNode ->data=value;
        newNode->nxt = NULL;
    }

    void insertAtHead(int value){
        node *a= createNewNode(value);

        if(head==NULL){
            head = a;
            return;
        }

        //if head is not NULL

        a->nxt = head;
        head=a;
    }
};
int main(){

}