#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    queue <int> q;
    int spin;
    cin >> spin;
    for(int i=0;i<spin;i++){
        string a;
        cin>>a;
        if(a == "push"){
            int b;
            cin>>b;
            q.push(b);
        }
        if(a == "pop"){
            if(q.empty()) cout<<-1<<'\n';
            else{
                cout<<q.front()<<'\n';
                q.pop();
            }
        }
        if(a == "size"){cout<<q.size()<<'\n';}
        if(a == "empty"){cout<<q.empty()<<'\n';}
        if(a == "back"){cout<<(q.empty()?-1:q.back())<<'\n';}
        if(a == "front"){cout<<(q.empty()?-1:q.front())<<'\n';}

    }
    return 0;
}