#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    char c;
    cin>>n>>m;
    vector <char> v;
    vector <bool> selector;
    for(int i=0;i<n;i++){
        cin>>c;
        v.push_back(m);
    }
    sort(v.begin(), v.end());
    fill(selector.end()-n, selector.end(), true);
    do{
        for(int i=0;i<m;i++){
            if(selector[i] == 1){
                cout<<v[i];
        }
        cout<<endl;
    }while(next_permutation(selector.begin(), selector.end()));
    return 0;
    
}