#include <bits/stdc++.h>
using namespace std;

int n,m

int main(){
    cin >> n >> m; 
    vector<vector<int>> graph(n+1);
    for(int i=0;i<m;i++){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<bool> visited(n+1, false);
    queue<int> q;
    q.push(1);
    visited[1] = true;
    while (!q.empty()) {
        intr v = q.front();
        q.pop();
        for(auto c :graph[v]) {
            if (!visited[c]) {
                visited[c] = true;
                q.push(c);
            }
        }
    {
        /* code */
    }
    
}


