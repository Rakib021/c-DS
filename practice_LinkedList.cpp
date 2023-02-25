#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *nxt;
};

class LinkedList{
    public:
    node *head;
    int sz;

    LinkedList(){
        head=NULL;
        sz=0;
    }

    node *createNode(int value){
        node *newNode = new node;
        newNode->data=value;
        newNode->nxt = NULL;
        return newNode;
    }

    void insertAtHead(int value){
        sz++;
        node *a = createNode(value);

        if(head==NULL){
            head=a;
            return;
        }

        a->nxt=head;
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
    int getSize(){
        return sz;
    }
};
int main(){
    LinkedList l;
    l.insertAtHead(4);
    l.insertAtHead(3);
    l.insertAtHead(6);
    l.insertAtHead(13);
    l.insertAtHead(0);

    l.Traverse();

}