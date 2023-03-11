#include<bits/stdc++.h>
using namespace std;

// Node structure for linked list
struct Node {
    string data;
    Node* next;
    Node(string d) {
        data = d;
        next = NULL;
    }
};

// Merge two linked lists in lexicographic order
Node* merge(Node* left, Node* right) {
    Node* result = NULL;

    // Base cases
    if (left == NULL)
        return right;
    else if (right == NULL)
        return left;

    // Recursive cases
    if (left->data <= right->data) {
        result = left;
        result->next = merge(left->next, right);
    }
    else {
        result = right;
        result->next = merge(left, right->next);
    }

    return result;
}

// Split linked list into two halves
void split(Node* head, Node** left, Node** right) {
    Node* slow = head;
    Node* fast = head->next;

    while (fast != NULL) {
        fast = fast->next;
        if (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
    }

    *left = head;
    *right = slow->next;
    slow->next = NULL;
}

// Merge Sort algorithm for linked list
void mergeSort(Node** head) {
    Node* h = *head;
    Node* left = NULL;
    Node* right = NULL;

    // Base case
    if (h == NULL || h->next == NULL)
        return;

    // Split linked list into two halves
    split(h, &left, &right);

    // Recursively sort left and right halves
    mergeSort(&left);
    mergeSort(&right);

    // Merge sorted halves
    *head = merge(left, right);
}

// Display linked list
void displayList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

// Driver program
int main() {
    int n;
    cin >> n;

    Node* head = NULL;
    Node* tail = NULL;

    // Create linked list
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        Node* newNode = new Node(s);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = tail->next;
        }
    }

    // Sort linked list using Merge Sort algorithm
    mergeSort(&head);

    // Display sorted linked list
    displayList(head);

    return 0;
}
