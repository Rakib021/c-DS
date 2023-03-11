#include<bits/stdc++.h>
using namespace std;
void find_Prev_Index(string ara[], int n);
int main() {
    int n;
    cin >> n;

    string ara[n];
    for (int i = 0; i < n; i++) {
        cin >> ara[i];
    }

    find_Prev_Index(ara, n);

    return 0;
}
void find_Prev_Index(string ara[], int n) {
   map<string, int> prev_Index;
    for (int i = 0; i < n; i++) {
        if (prev_Index.find(ara[i]) == prev_Index.end()) {
            
            cout << "-1\n";
        } else {
            
            cout << prev_Index[ara[i]] << "\n";
        }
        prev_Index[ara[i]] = i;
    }
}