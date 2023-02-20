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
    LinkedList(){
        head=NULL;
    }
//creates a node with data = value and nxt = NULL
    node* createNewNode(int value){
        node *newNode = new node;
        newNode ->data = value;
        newNode->nxt=NULL;
        return newNode;
    }

    //insert a value to head

    void insertAtHead(int value){

        node *a= createNewNode(value);
        if(head ==NULL){
            head = a;
            return;
        }
        //if head is not NULL
        a->nxt = head;
        head=a;


    }
    //print the linkedList
    void Traverse(){
        node *a = head;

        while(a!=NULL){
            cout<<a->data<<" ";
            a= a->nxt;
        }
        cout<<"\n";

    }

    //search single value
    void searchDistinctValue(){

    }

    //search all possible occurences
    void SearchAllValue(){

    }
};

int main(){
    LinkedList l;
    l.insertAtHead(10);
    l.insertAtHead(20);
    l.insertAtHead(30);
    l.insertAtHead(30);

    l.Traverse();

}