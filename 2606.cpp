#include <bits/stdc++.h>
using namespace std;
vector<bool> visited(n+1, false);
vector<vector<int>> graph(n+1);
int main(){
    int n, m,;
    cin >> n >> m; 
    graph.resize(n + 1);
    visited.resize(n + 1, false);
    for(int i=0;i<m;i++){
        int u, b;
        cin >> u >> b;
        graph[u].push_back(b);
        graph[b].push_back(u);
    }
    
    queue<int> q;
    q.push(1);
    visited[1] = true;
    // while (!q.empty()) {
    //     int v = q.front();
    //     q.pop();
    //     for(auto c :graph[v]) {
    //         if (visited[c] == false) {
    //             q.push(c);
    //             visited[c] = true;
    //             infectedCount++;
    //         }
    //     }
    // }
    cout << infectedCount;
}


