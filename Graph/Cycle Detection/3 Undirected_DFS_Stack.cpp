/**
||-----------------------||
||  	  Author         ||
|| Asif Mohammed Sifat   ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
* /      
                            Cycle Detection in Graph--> Undirected_DFS_STACK
            Make Visual Representaiton: https://csacademy.com/app/graph_editor/


Sample Input-01:
5 4

1 3
1 2
1 5
4 5
Output: No Cycle


Sample Input-02:

8 7
1 2
2 3
2 4
3 5
6 7
7 8
6 8
Output: Cycle Exist


*/





#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;

int node,edge;
int visited[N];

vector<int> adjList[N];
int parent[N];

bool dfs(int src){
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
    bool cycle;
    for(int i=1;i<=node;i++){
        if(visited[i]==0){
            cycle = true;
            bool ok = dfs(i);
            if(!ok){
                cycle = false;
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
