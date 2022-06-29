#include <bits/stdc++.h>
using namespace std;
#define n 5

int visited[n];
void dfs(int v, vector<vector<int>> adj){
    if(!visited[v]){
        visited[v] = 1;
        cout<<v<<endl;
        for(int i=0;i<adj[v].size();i++){
            dfs(adj[v][i], adj);
        }
    }
}

int main(){
    memset(visited, 0, sizeof(visited));
    vector<vector<int>> adjList{
            {1, 3, 4},
            {4, 2},
            {1, 3},
            {2},
            {0, 2}
    };
    dfs(1, adjList);
    return 0;
}

