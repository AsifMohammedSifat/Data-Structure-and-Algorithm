/*
||-----------------------||
||  	  Author         ||
|| Asif Mohammed Sifat   ||
||  Department of CSE    ||
||   CS Instructor       ||
||Phitron,ProgrammingHero||
||-----------------------||
* /
                       Problem Link: https://cses.fi/problemset/task/1669/
Sample Input-01:
4 5
1 3
2 1
2 4
3 2
3 4
Output: Cycle Exist
 
Sample Input-02:
4 3
2 1
2 4
3 2
Output: No Cycle
 
*/
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5;
vector<int> adjList[N];
int visited[N];
int parent[N];
 
int startNode,endNode;
 
 
bool dfs(int src)
{
    visited[src] = 1;
 
    for(int node : adjList[src])
    {
        if(node==parent[src])
        {
            continue;
        }
 
        if(visited[node]==0)
        {
            parent[node] = src;
            bool ok =  dfs(node);
            if(ok)
            {
                return true;
            }
        }
        if(visited[node]==1)
        {
            startNode = node;
            endNode = src;
            return true;
        }
        if(visited[node]==2)
        {
            continue;
        }
    }
    visited[src] = 2;
    return false;
}
 
 
int main()
{
    int node,edge;
    cin>>node>>edge;
 
    while(edge--)
    {
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
 
    bool cycle = false;
    for(int i=1; i<=node; i++)
    {
        if(visited[i]==0)
        {
            bool ok = dfs(i);
            if(ok)
            {
                cycle = true;
                break;
            }
        }
    }
    if(cycle)
    {
        vector<int>path;
        int temp = endNode;
        path.push_back(endNode);
        while(temp!=startNode){
            path.push_back(parent[temp]);
            temp = parent[temp];
        }
        path.push_back(endNode);
        cout<<path.size()<<endl;
        for(auto city:path){
            cout<<city<<" ";
        }
 
 
    }
    else
    {
        cout<<"IMPOSSIBLE\n";
    }
}
