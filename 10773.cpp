#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stack<int> st;
    int rpt,sum=0;
    cin>>rpt;
    for(int i=0;i<rpt;i++){
        int a;
        cin>>a;
        if(a == 0){
            if(st.empty());
            else(st.pop());
        }
        else st.push(a);
    }
    while(!st.empty()){
        sum+=st.top();
        st.pop();
    }
    cout<<sum;
    return 0;
} 