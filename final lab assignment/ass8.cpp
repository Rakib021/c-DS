#include <bits/stdc++.h>
using namespace std;

class MinHeap{
public:
    MaxHeap mx;

    void insert(int x) {
        mx.insert(-x); 
    }

    void Delete(int idx) {
        mx.Delete(idx);
    }

    int getMin() {
        int maxValue = mx.getMax(); 
        return -maxValue; 
    }
};

