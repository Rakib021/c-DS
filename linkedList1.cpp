#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* nxt;
};

class LinkedList{
    public:

    node* head;
    LinkedList(){
        head=NULL;
    }

    //creates a new Node with data= value and nxt=NULL

    node *createNewNode(int value){
        node *newNode = new node;
        newNode->data= value;
        newNode->nxt=NULL;
        return newNode;
    }

    void insertAtHead(int value){
        node *a= createNewNode(value);

        if(head==NULL){
            head=a;
            return;
        }
        //if head is not null

        a->nxt =head;
        head=a;
    }

    void Traverse(){
        node *a=head;

        while(a!=NULL){
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<"\n";

    }
};
int main(){
    LinkedList l;
    l.Traverse();

    l.insertAtHead(10);
    l.Traverse();

    l.insertAtHead(20);
    l.Traverse();

    l.insertAtHead(20);
    l.Traverse();

    l.insertAtHead(30);
    l.Traverse();

    l.insertAtHead(60);
    l.Traverse();

}