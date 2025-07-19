#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    queue <int> q;
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        q.push(i+1);
    }
    for(int i=0;i<a-1;i++){
        int b;
        q.pop();
        b = q.front();
        q.pop();
        q.push(b);
    }
    cout<<q.front()<<'\n';
    return 0;
}