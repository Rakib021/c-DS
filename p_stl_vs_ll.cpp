#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class LinkedList
{
public:
    node *head;

    LinkedList()
    {
        head = NULL;
    }

    node *createNewNode(int value)
    {
        node *NewNode = new node;

        NewNode->data = value;
        NewNode->next = NULL;
        return NewNode;
    }

    void insertAtHead(int value)
    {
        node *a = createNewNode(value);

        if (head == NULL)
        {
            head = a;
            return;
        }

        a->next=head;
        head=a;
    }

    void Traverse(){
        node *a=head;

        while(a!=NULL){
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\n";
    }
};
int main()
{

    LinkedList l;
    l.insertAtHead(12);
    l.insertAtHead(45);
    l.insertAtHead(11);
    l.insertAtHead(110);

    l.Traverse();
}
