#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int p = pow(a, c) + pow(b, c);
        int q = b - a;

        cout << gcd(p, q) << endl;
    }

    return 0;
}
