#include<bits/stdc++.h>
using namespace std;

bool solve(){
    string s;
    cin>>s;

    vector<char> st;
    for(char c : s){
        if(c == '('){
            st.push_back(c);
        }
        else{
            if(st.empty()){
                return false;
            }
            else{
                st.pop_back();
            }
        }
    }
    return st.size() == 0;
}

int main(){
    int rpt;
    cin>>rpt;
    stack<char> st;
    for(int i=0;i<rpt;i++){
        if(solve()){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    
    return 0;
} 