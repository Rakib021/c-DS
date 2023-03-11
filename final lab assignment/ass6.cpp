#include <iostream>
#include <deque>
using namespace std;
void sort_array(int arr[], int n);
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort_array(arr, n);

    return 0;
}



void sort_array(int arr[], int n) {
    deque<int> dq;
    dq.push_front(arr[0]);


    for (int i = 1; i < n; i++) {
      
        if (arr[i] < dq.front())
            dq.push_front(arr[i]);

        else if (arr[i] >= dq.back()) {
            while (!dq.empty() && arr[i] >= dq.back())
                dq.pop_back();
            dq.push_back(arr[i]);
        }

        
        else {
            deque<int>::iterator it;
            for (it = dq.begin(); it != dq.end(); it++) {
                if (*pit > arr[i]) {
                    dq.insert(it, arr[i]);
                    break;
                }
            }
        }
    }

 while (!dq.empty()) {
        cout << dq.front() << " ";
        dq.pop_front();
    }
    cout << endl;
}


