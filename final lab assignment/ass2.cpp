#include<bits/stdc++.h>
using namespace std;

 class node {
    public:
    int data;
    node* next;
    node* prev;
};

class Doubly_Linked_List {
public:
    node* head;
    node* tail;
    int sz;


    Doubly_Linked_List() {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    void insertAtHead(int value) {
        node* newNode = new node();
        newNode->data = value;
        newNode->next = head;
        newNode->prev = NULL;

        if (head != NULL) {
            head->prev = newNode;
        } else {
            tail = newNode;
        }

        head = newNode;
        sz++;
    }

    void insertAtTail(int value) {
        node* newNode = new node();
        newNode->data = value;
        newNode->prev = tail;
        newNode->next = NULL;

        if (tail != NULL) {
            tail->next = newNode;
        } else {
            head = newNode;
        }

        tail = newNode;
        sz++;
    }

    void insertAtMid(int value) {
        node* newNode = new node();
        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = NULL;

        if (sz == 0) {
            head = tail = newNode;
        } else {
            node* curr = head;
            int mid = sz / 2;

            for (int i = 0; i < mid; i++) {
                curr = curr->next;
            }

            newNode->prev = curr->prev;
            newNode->next = curr;

            if (curr->prev != NULL) {
                curr->prev->next = newNode;
            } else {
                head = newNode;
            }

            curr->prev = newNode;
        }

        sz++;
    }

    void traverse() {
        node* curr = head;

        while (curr != NULL) {
            cout << curr->data << " ";
            curr = curr->next;
        }

        cout <<"\n";
    }
};

int main() {
    Doubly_Linked_List dll;

    dll.insertAtHead(1);
    dll.insertAtTail(3);
    dll.insertAtHead(2);
    dll.insertAtTail(4);
    dll.insertAtMid(5);

    dll.traverse(); 

    return 0;
}
