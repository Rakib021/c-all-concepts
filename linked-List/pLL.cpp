#include<bits/stdc++.h>
using namespace std;
class node{
    public:

    int data;
    node* nxt;
};

class linkedList{
    node *head;

    linkedList(){
        head = NULL;
    }

    node * createNewNode(int value){
        node* newNode = new node;
        newNode->data = value;
        newNode->nxt = NULL;
        return newNode;
    }
};

int main()
{

}