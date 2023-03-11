#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *nxt;
    node *prv;
};

class DoublyLinkedList
{
public:
    node *head;
    int sz;

    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    node *createNewNode(int data)
    {
        node *newNode = new node;
        newNode->data = data;
        newNode->nxt = NULL;
        newNode->prv = NULL;
        return newNode;
    }

    void insertAtHead(int data)
    {
        sz++;
        node *newNode = createNewNode(data);

        if (head == NULL)
        {
            head = newNode;
            return;
        }

        node *a = head;
        newNode->nxt = a;
        a->prv = newNode;
        head = newNode;
    }

    void Traverse(){
        node *a=head;
        while(a!=NULL){
            cout<<a->data<<" ";
            a=a->nxt;
        }
        cout<<"\n";
    }
   int getSize()
    {
       return sz;
    }
};
int main()
{
    DoublyLinkedList dl;
    dl.insertAtHead(10);
    dl.insertAtHead(20);
    dl.insertAtHead(40);
    dl.insertAtHead(16);
    dl.insertAtHead(13);
    dl.Traverse();
    cout<<dl.getSize()<<"\n";
}