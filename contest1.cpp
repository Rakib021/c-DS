#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T; 
    while (T--) {
        long  long n;
        cin >> n;
        vector<int> powers;
        for (int i = 60; i >= 0; i--) { 
            long long p = pow(2, i);
            if (p <= n) { 
                n -= p; 
                powers.push_back(i); 
            }
        }

        for (int i = 0; i <= powers.size(); i++) {
            cout << "2^" << powers[i];
            if (i < powers.size() - 1) {
                cout << "+";
            }
        }
        cout << endl;
    }
    return 0;
}
