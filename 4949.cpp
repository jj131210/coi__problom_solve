#include<bits/stdc++.h>
using namespace std;

bool solvea(string sa){
    
    
    vector<char> sta;
    for(char c : sa){
        if(c == '('){
            sta.push_back(c);
        }
        else if(c == '['){
            sta.push_back(c);
        }
        else if(c == ')'){
            if(sta.empty()){
                return false;
            }
            else{
                if(sta.back() != '('){
                    return false;
                }
                sta.pop_back();
            }
        }
        else if(c == ']'){
            if(sta.empty()){
                return false;
            }
            else{
                if(sta.back() != '['){
                    return false;
                }
                sta.pop_back();
            }
        }
    }
    return sta.size() == 0;
}



int main(){
    
    stack<char> st;
    while(true){
        string s;
        getline(cin, s);
        if(s == "."){
            break;
        }
        if(solvea(s)){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
    }
    
    return 0;
} 