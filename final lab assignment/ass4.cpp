#include<bits/stdc++.h>
using namespace std;

bool is_Valid(string str);

int main() {
    string str;
    getline(cin, str);
    if (is_Valid(str)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
    return 0;
}
bool is_Valid(string str) {
    stack<char> st;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            st.push(str[i]);
        } else if (str[i] == ')' && !st.empty() && st.top() == '(') {
            st.pop();
        } else if (str[i] == '}' && !st.empty() && st.top() == '{') {
            st.pop();
        } else if (str[i] == ']' && !st.empty() && st.top() == '[') {
            st.pop();
        } else {
            return false;
        }
    }
    return st.empty();
}
