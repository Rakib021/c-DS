#include <bits/stdc++.h>
using namespace std;

class Queue {
    public:
        int arr[100];
        int f_Index;
        int rearIndex;
   
        Queue() {
            f_Index = -1;
            rearIndex = -1;
        }
        void enqueue(int value) {
            if (rearIndex == 99) {
                cout << "Queue is full.cannot deque\n";
                return;
            }
            if (f_Index == -1) {
                f_Index = 0;
            }
            rearIndex++;
            arr[rearIndex] = value;
        }
        void dequeue() {
            if (f_Index == -1) {
                cout << "Queue is empty. Cannot dequeue.\n";
                return;
            }
            if (f_Index == rearIndex) {
                f_Index = -1;
                rearIndex = -1;
                return;
            }
            f_Index++;
        }
        int front() {
            if (f_Index == -1) {
                cout << "Queue is empty.\n";
                return -1;
            }
            return arr[f_Index];
        }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout << q.front() << "\n";
    q.dequeue();
    cout << q.front() <<"\n";
    q.dequeue();
    cout << q.front() <<"\n";
    q.dequeue();
    q.dequeue();
    return 0;
}
