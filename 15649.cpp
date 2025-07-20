#include <bits/stdc++.h>
using namespace std;
int n,m;
vector <int> ans;
vector <int> l;
void recu(int k){
    if(ans.size() >= m){
        for(auto c:ans){
            cout<<c<<" ";
        }

        cout<<'\n';
        return;
    }
    for(int i=k;i<n;i++){
        //if(l[i] == -1){
        //    continue;
        //}
        ans.push_back(l[i]);
        //l[i] = -1;
        recu(i+1);
        l[i] = ans.back();
        ans.pop_back();
    }
}
int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        l.push_back(i+1);
    }
    
    recu(0);
}