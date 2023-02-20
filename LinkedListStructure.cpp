#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *nxt;
};
class LinkedList
{
public:
    node *head;
    LinkedList()
    {
        head = NULL;
    }
    // creates a node with data = value and nxt = NULL
    node *createNewNode(int value)
    {
        node *newNode = new node;
        newNode->data = value;
        newNode->nxt = NULL;
        return newNode;
    }

    // insert a value to head

    void insertAtHead(int value)
    {

        node *a = createNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        // if head is not NULL
        a->nxt = head;
        head = a;
    }
    // print the linkedList
    void Traverse()
    {
        node *a = head;

        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << "\n";
    }

    // search single value
    int searchDistinctValue(int value)
    {
        node *a = head;
        int index = 0;

        while (a != NULL)
        {
            if (a->data == value)
            {
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;
    }

    // search all possible occurences
    void SearchAllValue(int value)
    {
        node *a=head;
        int index=0;

        while(a!=NULL){
            if(a->data==value){
                cout<<value<<"is found at"<<index<<"\n";
            }

            a=a->nxt;
            index++;
        }
    }
};

int main()
{
    LinkedList l;
    l.Traverse();

    l.insertAtHead(10);
    l.Traverse();

    l.insertAtHead(30);
    l.Traverse();

    l.insertAtHead(20);
    l.Traverse();

    l.insertAtHead(30);

    l.Traverse();
   cout<<"10 is found at"<< l.searchDistinctValue(10)<<"\n";
   cout<<"5 is found at"<< l.searchDistinctValue(5)<<"\n";
   cout<<"30 is found at"<< l.searchDistinctValue(30)<<"\n";

   l.SearchAllValue(30);
}