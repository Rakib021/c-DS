#include <bits/stdc++.h>
using namespace std;

void sort_Array(deque<int>& dq);

int main() {
    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        dq.push_back(x);
    }
    sort_Array(dq);
    while (!dq.empty()) {
        cout << dq.front() << " ";
        dq.pop_front();
    }
    return 0;
}
void sort_Array(deque<int>& dq) {
    deque<int> res;
    while (!dq.empty()) {
        int front = dq.front();
        int back = dq.back();
        if (front > back) {
            res.push_front(front);
            dq.pop_front();
        } else {
            res.push_front(back);
            dq.pop_back();
        }
    }
    dq = res;
}