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

    void frontHead(int value){
        sz++;
        node *a= createNode(value);

        if(head==NULL){
            head=a;
            return;
        }

        a->nxt = head;
        head=a;
    }

    void Traverse(){
        node *a=head;

        while(a!=NULL){
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<" \n";

    }
    int getSize(){
        return sz;
    }

    void deleteAtHead(){
        if(head==NULL){
            return;
        }
        sz--;

        node *a=head;
        head=a->nxt;
        delete a;
    }

    void deleteLastElement(){
        if(head==NULL){
            return;

        }

        node *a=head;
        while(a!=NULL){
            a=a->nxt;

        }

        delete a->nxt;
        // a->nxt=NULL;


        }
    

};


int main(){

    LinkedList l;
    l.frontHead(4);
    l.frontHead(2);
    l.frontHead(1);
    l.frontHead(9);
    l.frontHead(0);
    l.Traverse();
    // l.deleteAtHead();
    l.deleteLastElement();
    l.Traverse();

    cout<<l.getSize()<<"\n";

}