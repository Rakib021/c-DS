#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

vector<int> findFactorials(ll n) {
    vector<int> factorials;
    ll f = 1;

    for (int i = 1; f <= n; i++) {
        f *= i;
        if (n % f == 0) factorials.push_back(i);
    }

    return factorials;
}

int main() {
    ll n;
    cin >> n;

    vector<int> factorials = findFactorials(n);

    if (factorials.size() == 0) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < factorials.size(); i++) {
            cout << factorials[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
