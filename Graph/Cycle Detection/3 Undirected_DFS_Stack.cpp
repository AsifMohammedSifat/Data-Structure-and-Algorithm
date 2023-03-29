/**
||-----------------------||
||  	  Author         ||
|| Asif Mohammed Sifat   ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||

                        Cycle Detection in--> 3 Undirected_DFS_Stack.cpp
            Make Visual Representaiton: https://csacademy.com/app/graph_editor/


BFS:
5 4

1 3
1 2
1 5
4 5
Output: No Cycle

5 6

1 3
1 2
5 3
1 5
2 4
4 5

Output: Cycle Exist
=============================
DFS:

*/
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;

int node,edge;
int visited[N];

vector<int> adjList[N];
int parent[N];

bool bfs(int src){
    stack<int> q;

    visited[src] = 1;

    q.push(src);


    while(!q.empty()){
        int head = q.top();
        q.pop();

        visited[head] = 2;

        for(auto node: adjList[head]){
            if(visited[node]==1){
                return true;
            }
            else if(visited[node]==0){
                q.push(node);
                parent[node] = head;
                visited[node] = 1;
            }
        }
    }

    return false;

}



int main() {
    cin>>node>>edge;

    while(edge--){
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    bool cycle = true;
    for(int i=1;i<=node;i++){
        if(visited[i]==0){
            bool ok = bfs(i);
            if(!ok){
                cycle = false;
                break;
            }
        }
    }
    if(cycle){
        cout<<"Cycle Exist\n";
    }
    else{
        cout<<"No Cycle\n";
    }
}
