#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    set<int> s1,s2,s3;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        s1.insert(x);
    }

    cin >> m;

    // set<int> s2;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        s2.insert(x);
    }

    // set<int> s3;
    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s3, s3.begin()));

    for (int x : s3)
        cout << x << " ";
    cout << endl;

    return 0;
}
