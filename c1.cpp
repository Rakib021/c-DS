#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num;
    cin>>num;
    int odd_sum = 0, even_sum = 0;
for (int i = num.size()-1; i >= 0; i--) {
    int digit = num[i] - '0';
    if ((num.size()-i) % 2 == 0) {
        even_sum += digit;
    } else {
        odd_sum += digit;
    }
}

int diff = abs(odd_sum - even_sum);
if (diff % 11 == 0) {
    cout << "YES\n";
} else {
    cout << "NO\n";
}



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
