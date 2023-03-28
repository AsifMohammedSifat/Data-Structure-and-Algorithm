/**
||-----------------------||
||  	  Author           ||
|| Asif Mohammed Sifat   ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
* /
                        Graph


                1------2-------4
                       |       |
                       |       |
                       3-------5

BFS:
5 5
1 2
2 4
2 3
3 5
4 5
Output: 1 2 4 3 5
Path  : 1 2 4 5
=============================
DFS:
5 5
1 2
2 4
2 3
3 5
4 5
1 2 3 5 4
1 2 3 5
*/
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;

int visited[N];

vector<int> adjList[N];
int parent[N];

void bfs(int src){
    queue<int> q;

    visited[src] = 1;
    parent[src] = -1;

    q.push(src);


    while(!q.empty()){
        int head = q.front();
        q.pop();
        cout<<head<<" ";
        for(auto node: adjList[head]){
            if(visited[node]==0){
                q.push(node);
                parent[node] = head;
                visited[node] = 1;
            }
        }
    }
}

void dfs(int src){
    stack<int> q;

    visited[src] = 1;
    parent[src] = -1;

    q.push(src);


    while(!q.empty()){
        int head = q.top();
        q.pop();
        cout<<head<<" ";
        for(auto node: adjList[head]){
            if(visited[node]==0){
                q.push(node);
                parent[node] = head;
                visited[node] = 1;
            }
        }
    }
}


int main() {
    int n,m;
    cin>>n>>m;

    while(m--){
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    int src = 1;
    int dst = 5;

    bfs(src);
    cout<<endl;

    if(visited[src]==0){
        cout<<"Impossible\n";
        return 0;
    }

    vector<int> path;

    int selected = dst;

    while(true){
        path.push_back(selected);
        if(selected==src){
            break;
        }
        selected = parent[selected];
    }

    reverse(path.begin(),path.end());

    for(auto node:path){
        cout<<node<<" ";
    }
    cout<<endl;
}
