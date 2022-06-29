#include <bits/stdc++.h>
using namespace std;
#define n 5

int visited[n];
void bfs(int v, vector<vector<int>> adjList){
    list<int> queue;
    int u;
    queue.push_back(v);
    while (queue.size() > 0){
        u = queue.front();
        queue.pop_front();
        if(!visited[u]){
            visited[u] = 1;
            cout<<u<<endl;
            for(int i=0;i<adjList[u].size();i++){
                queue.push_back(adjList[u][i]);
            }
        }
    }
}
int main(){
    memset(visited, 0, sizeof(visited));
    //no of edge in graph
    vector<vector<int>> adjList{
            {1, 3, 4},
            {4, 2},
            {1, 3},
            {2},
            {0, 2}
    };
    bfs(1, adjList);
    return 0;
}
