/*
||-----------------------||
||  	  Author         ||
|| Asif Mohammed Sifat   ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||

Problem Link: https://cses.fi/problemset/result/5732874/

*/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> adj_list[N];
int visited[N];
int level[N];
int parent[N];

void bfs(int src)
{
    visited[src] = 1;
    level[src] = 1;
    parent[src] = -1;

    queue<int> q;
    q.push(src);

    while (!q.empty())
    {
        int head = q.front();
        q.pop();

        for (int child : adj_list[head])
        {
            if (visited[child] == 0)
            {
                visited[child] = 1;
                level[child] = level[head] + 1;
                parent[child] = head;
                q.push(child);
            }
        }
    }
}

int main()
{
    int node, edge;
    cin >> node >> edge;

    for (int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src_node = 1;
    bfs(src_node);

    int dst_node = node;

    if(visited[dst_node]==0){
        cout<<"IMPOSSIBLE\n";
        return 0;
    }

    cout<<level[dst_node]<<endl;

    vector<int> path;

    int selected_node = dst_node;

    while(true){
        path.push_back(selected_node);
        if(selected_node==src_node){
            break;
        }
        selected_node = parent[selected_node];
    }

    reverse(path.begin(),path.end());

    for(int node: path){
        cout<<node<<" ";
    }
    cout<<'\n';
    return 0;
}
