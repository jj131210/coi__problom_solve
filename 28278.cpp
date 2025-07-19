#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stack<int> st;
    int rpt;
    cin>>rpt;
    for(int i=0;i<rpt;i++){
        int first,second=-1;
        cin>>first;
        if(first==1){
            cin>>second;
            st.push(second);
        }
        else if(first==2){
            if(st.size() == 0) cout<<-1<<'\n';
            else{
                cout<<st.top()<<'\n';
                st.pop();
            }
        }
        else if(first==3){
            cout<<st.size()<<'\n';
        }
        else if(first==4){
            if(st.empty())cout<<1<<'\n';
            else cout<<0<<'\n';
        }
        else if(first==5){
            if(st.size() == 0) cout<<-1<<'\n';
            else{
                cout<<st.top()<<'\n';
            }
        }
    }
    return 0;
}