#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> st;
    vector<int> t;
    vector<char> ans;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        t.push_back(temp);
    }
    int idx = 0;
    for(int i=1;i<=n;i++){
        st.push_back(i);
        ans.push_back('+');
        while (!st.empty()&&st.back() == t[idx]){
            st.pop_back();
            idx++;
            ans.push_back('-');
        }
        
    }
    if(!st.empty()) cout<<"NO";
    else{
        for(auto c : ans){
            cout << c << '\n';
    }
    return 0;
}
}