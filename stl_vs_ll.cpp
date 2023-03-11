#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l;
    l.push_front(12);
    l.push_front(22);
    l.push_front(14);
    l.push_front(11);

    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it<<" "; 
    }

}