#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> p;

void f(int a,int b,int c,int n){
    if(n==1){
        p.push_back({a,c});
        return;
    }
	f(a,c,b,n-1);
    p.push_back({a,c});
    f(b,a,c,n-1);
}

int main(){
	int n;
    cin>>n;
    f(1,2,3,n);
    cout<<p.size()<<'\n';
    for(auto c : p){
        cout<<c.first<<' '<<c.second<<'\n';
    }
}