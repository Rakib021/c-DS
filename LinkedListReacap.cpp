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
        node *newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }

    void insertAtHead(int value)
    {
        node *a = createNewNode(value);

        if (head == NULL)
        {
            head = a;
            return;
        }

        // if head is not NUll

        a->next = head;
        head = a;
    }

    void Traverse()
    {
        node *a = head;

        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->next;
        }
        cout << "\n";
    }

    int SearchDistincValue(int value)
    {
        node *a = head;
        int index = 0;

        while (a != NULL)
        {
            if (a->data == value)
            {
                return index;
            }

           a= a->next;
           index++;
        }
       return -1;
    }

    void searchAllvalue(int value){
        node*a=head;
        int index=0;

        while(a!=NULL){
            if(a->data== value){
                cout<<value<<"is found at "<<index;

            }
            a=a->next;
            index++;
        }
    }
};

int main()
{
    LinkedList l;
    l.insertAtHead(10);
    l.Traverse();
    l.insertAtHead(20);
    l.insertAtHead(40);
    l.insertAtHead(60);
    l.insertAtHead(80);
    l.insertAtHead(220);
    l.Traverse();

    l.SearchDistincValue(60);
    l.searchAllvalue(20);
    l.Traverse();


}