#include<bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2, x;
    set<int> set1, set2, set_result;
    cin >> n1;
    for (int i = 0; i < n1; i++) {
        cin >> x;
        set1.insert(x);
    }


    cin >> n2;
    for (int i = 0; i < n2; i++) {
        cin >> x;
        set2.insert(x);
    }

 set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(set_result, set_result.begin()));
    for (auto i = set_result.begin(); i != set_result.end(); i++) {
        cout << *i << " ";
    }

    return 0;
}
